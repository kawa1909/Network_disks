#include "onlinemusicwidget.h"
#include "ui_onlinemusicwidget.h"
#include <QPainter>
#include <QDebug>

OnlineMusicWidget::OnlineMusicWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OnlineMusicWidget)
{
    ui->setupUi(this);

    //禁止窗口改变尺寸
    this->setFixedSize(this->geometry().size());

    //去掉窗口标题
    this->setWindowFlag(Qt::FramelessWindowHint);
}

OnlineMusicWidget::~OnlineMusicWidget()
{
    delete ui;


}

//处理播放器背景画面
void OnlineMusicWidget::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    //更换背景图片
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/new/prefix1/images/musicplayer_ui.png"));
}


void OnlineMusicWidget::on_pushButton_Close_clicked()
{
    //关闭窗口
    close();
}


//音乐歌曲下载和播放
void OnlineMusicWidget::DownloadPalyer(QString album_id, QString hash){

}

//访问HTTP网页
void OnlineMusicWidget::HttpAccessFunc(QString){

}

//音乐的hash和ablum——id值解析（使用JSON)
void OnlineMusicWidget::HashJsonAnalysis(QByteArray){

}

//搜索音乐数据信息的JSON解析，解析出真正的音乐文件和歌词
QString OnlineMusicWidget::MusicJsonAnalysis(QByteArray){

}
//鼠标拖动窗口实现移动
void OnlineMusicWidget::mouseMoveEvent(QMouseEvent *et){
    if(mousepress){
        QPoint movePos = et->globalPos();//窗口初始位置
        move(movePos-movepoint);
    }
}

//按下
void OnlineMusicWidget::mousePressEvent(QMouseEvent *et){
    if(et->button() == Qt::LeftButton){
        mousepress = true;
    }
    //窗口移动距离
    movepoint = et->globalPos()-pos();
}

//释放事件
void OnlineMusicWidget::mouseReleaseEvent(QMouseEvent *et){
    Q_UNUSED(et);
    mousepress = false;
}
