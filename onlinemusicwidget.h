#ifndef ONLINEMUSICWIDGET_H
#define ONLINEMUSICWIDGET_H

#include <QWidget>
#include <QNetworkRequest>//HTTp的URL请求管理类
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QJsonArray>
#include <QJsonObject>
#include <QMediaPlaylist>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QTime>
#include <math.h>
#include <QMouseEvent>


QT_BEGIN_NAMESPACE
namespace Ui { class OnlineMusicWidget; }
QT_END_NAMESPACE

class OnlineMusicWidget : public QWidget
{
    Q_OBJECT

public:
    OnlineMusicWidget(QWidget *parent = nullptr);
    ~OnlineMusicWidget();


    //处理播放器背景画面
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_Close_clicked();//离开按钮按下时


private:
    Ui::OnlineMusicWidget *ui;


protected:
    //音乐歌曲下载和播放
    void DownloadPalyer(QString album_id, QString hash);

    //访问HTTP网页
    void HttpAccessFunc(QString);

    //音乐的hash和ablum——id值解析（使用JSON)
    void HashJsonAnalysis(QByteArray);

    //搜索音乐数据信息的JSON解析，解析出真正的音乐文件和歌词
    QString MusicJsonAnalysis(QByteArray);

protected:
    //鼠标拖动窗口实现移动
    void mouseMoveEvent(QMouseEvent *et);//移动
    void mousePressEvent(QMouseEvent *et);//按下
    void mouseReleaseEvent(QMouseEvent *et);//释放事件

private:
    //定义坐标
    QPoint m_mousepoint;
    QPoint movepoint;
    bool mousepress;
};
#endif // ONLINEMUSICWIDGET_H






