#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QTcpSocket>
#include "protocol.h"
#include "opedb.h"
#include <QDir>
#include <QFile>
#include <QTimer>

class MyTcpSocket : public QTcpSocket
{
    Q_OBJECT
public:
    MyTcpSocket();
    QString getName();
    void copyDir(QString strSrcDir, QString strDestDir);

signals:
    void offline(MyTcpSocket *mysocket);

public slots:
    void recvMsg();
    void clientOffline();//处理客户端下线的槽函数
    void sendFileToClient();

private:
    QString m_strName;//用户登录时的名字
    QFile m_file;
    qint64 m_iTotal;
    qint64 m_iReceived;
    bool m_bUpload;

    QTimer *m_pTimer;

};

#endif // MYTCPSOCKET_H
