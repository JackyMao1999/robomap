#include <iostream>
#include "../include/robomap/mainwindow.hpp"
#include <QtGui>
#include <QAbstractButton>
#include <QAbstractSlider>
#include <QApplication>
#include <QMessageBox>
#include "ros/ros.h"
#include <robomap/VolcanoGuiInfo.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/Twist.h>
namespace robomap {

using namespace Qt;
using namespace std;

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
{
    ui.setupUi(this);
    /******** ROS设置 ********/
    ros::NodeHandle n;
    VolcanoGuiInfo_pub = n.advertise<robomap::VolcanoGuiInfo>("/VolcanoGuiInfo",1);
    Twist_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel",1);
    
    /******** 基础设置 ********/
    setWindowIcon(QIcon("/home/mckros/catkin_ws/src/librviz-master/robomap/resources/images/icon1.png"));
    QApplication::setStyle("GTK");
    ui.gBox_book->hide();
    ui.gBox_location->hide();
    ui.gBox_robot->hide();
    /******** 座位选择界面 ********/
    QObject::connect(ui.checkBox_1, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_1,1);});
    QObject::connect(ui.checkBox_2, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_2,2);});
    QObject::connect(ui.checkBox_3, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_3,3);});
    QObject::connect(ui.checkBox_4, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_4,4);});
    QObject::connect(ui.checkBox_5, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_5,5);});
    QObject::connect(ui.checkBox_6, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_6,6);});
    QObject::connect(ui.checkBox_7, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_7,7);});
    QObject::connect(ui.checkBox_8, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_8,8);});
    QObject::connect(ui.checkBox_9, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_9,9);});
    QObject::connect(ui.checkBox_10, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_10,10);});
    QObject::connect(ui.checkBox_11, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_11,11);});
    QObject::connect(ui.checkBox_12, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_12,12);});
    QObject::connect(ui.checkBox_13, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_13,13);});
    QObject::connect(ui.checkBox_14, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_14,14);});
    QObject::connect(ui.checkBox_15, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_15,15);});
    QObject::connect(ui.checkBox_16, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_16,16);});
    QObject::connect(ui.checkBox_17, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_17,17);});
    QObject::connect(ui.checkBox_18, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_18,18);});
    QObject::connect(ui.checkBox_19, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_19,19);});
    QObject::connect(ui.checkBox_20, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_20,20);});
    QObject::connect(ui.checkBox_21, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_21,21);});
    QObject::connect(ui.checkBox_22, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_22,22);});
    QObject::connect(ui.checkBox_23, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_23,23);});
    QObject::connect(ui.checkBox_24, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_24,24);});
    QObject::connect(ui.checkBox_25, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_25,25);});
    QObject::connect(ui.checkBox_26, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_26,26);});
    QObject::connect(ui.checkBox_27, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_27,27);});
    QObject::connect(ui.checkBox_28, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_28,28);});
    QObject::connect(ui.checkBox_29, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_29,29);});
    QObject::connect(ui.checkBox_30, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_30,30);});
    QObject::connect(ui.checkBox_31, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_31,31);});
    QObject::connect(ui.checkBox_32, &QAbstractButton::clicked, ui.gBox_location, [ = ] () {location_state_changed_foo(ui.checkBox_32,32);});
    /******** 查找书籍界面 ********/
    /******** 显示机器人状态界面 ********/
    QObject::connect(ui.btn_control_qj, &QPushButton::clicked, ui.gBox_robot, [ = ] () {Control_robot_foo(1);});
    QObject::connect(ui.btn_control_zz, &QPushButton::clicked, ui.gBox_robot, [ = ] () {Control_robot_foo(2);});
    QObject::connect(ui.btn_control_yz, &QPushButton::clicked, ui.gBox_robot, [ = ] () {Control_robot_foo(3);});
    QObject::connect(ui.btn_control_ht, &QPushButton::clicked, ui.gBox_robot, [ = ] () {Control_robot_foo(4);});
    QObject::connect(ui.btn_control_tz, &QPushButton::clicked, ui.gBox_robot, [ = ] () {Control_robot_foo(5);});
}   

    MainWindow::~MainWindow() {}
   
    
    /* 设置座位状态 */
    void MainWindow::location_state_changed_foo(QCheckBox *cbox,int num){
        if(cbox->isChecked()){
            if(check_nums >= 2){
                QMessageBox::warning(this,tr("注意"),tr("最多可选择两个座位！"));
                cbox->setCheckState(Qt::Unchecked);
            }
            else{
                check_nums++;
                check_boxs[check_nums-1] = num;
            }
        }
        else{
            check_boxs[check_nums-1] = 0;
            check_nums--;
        }
    }
    /* 控制机器人运动按钮函数 */
    void MainWindow::Control_robot_foo(int state){
        geometry_msgs::Twist Twist_msg;
        switch (state){
            case 1:
                Twist_msg.angular.z = 0;
                Twist_msg.linear.x = robomap::MainWindow::linear_temp;
                break;
            case 2:
                Twist_msg.angular.z = -(robomap::MainWindow::angular_temp);
                Twist_msg.linear.x = 0;
                break;
            case 3:
                Twist_msg.angular.z = robomap::MainWindow::angular_temp;
                Twist_msg.linear.x = 0;
                break;
            case 4:
                Twist_msg.angular.z = 0;
                Twist_msg.linear.x = -(robomap::MainWindow::linear_temp);
                break;
            case 5:
                Twist_msg.angular.z = 0;
                Twist_msg.linear.x = 0;
                break;
        }
        robomap::MainWindow::Twist_pub.publish(Twist_msg);
    }

}
/* 显示选座位选择界面 */
void robomap::MainWindow::on_btn_select_clicked()
{
    ui.gBox_location->show();
    ui.gBox_book->hide();
    ui.gBox_robot->hide();
}

/* 显示查找书籍界面 */
void robomap::MainWindow::on_btn_book_clicked()
{
    ui.gBox_location->hide();
    ui.gBox_book->show();
    ui.gBox_robot->hide();
}
/* 显示机器人状态界面 */
void robomap::MainWindow::on_btn_robot_state_clicked()
{
    ui.gBox_location->hide();
    ui.gBox_book->hide();
    ui.gBox_robot->show();
}

/* 座位选择界面：选择好座位，发送到ROS */
void robomap::MainWindow::on_btn_select_ok_clicked()
{
    if (check_nums == 0)
        QMessageBox::warning(this,tr("注意"),tr("至少选择一个位置！"));
    else{
        robomap::VolcanoGuiInfo VolcanoGuiInfo_msg;
        for (int i = 0; i < 2; i++)
        {
            VolcanoGuiInfo_msg.seat_number_on = robomap::MainWindow::check_boxs[i];
            VolcanoGuiInfo_msg.seat_number_off = 0;
            usleep(500000); // 延时500ms
            robomap::MainWindow::VolcanoGuiInfo_pub.publish(VolcanoGuiInfo_msg);
        }
    }    
    
}
/* 查找书籍界面:使用机器人引导 */
void robomap::MainWindow::on_btn_robot_clicked()
{
    QString book_number = ui.lineEdit_book->text();
    if (book_number.length() <= 0)
        QMessageBox::warning(this,tr("注意"),tr("请确认内容是否正确！"));
    else {
        robomap::VolcanoGuiInfo VolcanoGuiInfo_msg;
        VolcanoGuiInfo_msg.book_number = book_number.toStdString().c_str();
        VolcanoGuiInfo_msg.is_follow = 1;
        robomap::MainWindow::VolcanoGuiInfo_pub.publish(VolcanoGuiInfo_msg);

        ui.textBrowser->setText(book_number);    
    }

}
/* 机器人状态界面：设定角速度值改变 */
void robomap::MainWindow::on_h_slider_angular_valueChanged(int value)
{
    robomap::MainWindow::angular_temp = value/100.0;
    ui.label_angular_val->setText(QString::fromStdString(to_string(value/100.0)));
}
/* 机器人状态界面：设定线速度值改变 */
void robomap::MainWindow::on_h_slider_linear_valueChanged(int value)
{
    robomap::MainWindow::linear_temp = value/100.0;
    ui.label_linear_val->setText(QString::fromStdString(to_string(value/100.0)));
}
/* 机器人状态界面：显示Mapping */
void robomap::MainWindow::on_btn_map_clicked()
{
    render_panel_=new rviz::RenderPanel;
    ui.verticalLayout_map->addWidget(render_panel_);
    manager_=new rviz::VisualizationManager(render_panel_);
    render_panel_->initialize(manager_->getSceneManager(),manager_);
    manager_->initialize();
    manager_->startUpdate();

    manager_->removeAllDisplays();
    // Rviz显示地图
    rviz::Display *map_=manager_->createDisplay("rviz/Map","adjustable map",true);
    ROS_ASSERT(map_!=NULL);
    map_->subProp("Topic")->setValue("/map");
    // Rviz显示机器人模型
    rviz::Display *robot_=manager_->createDisplay("rviz/RobotModel","adjustable robot",true);
    ROS_ASSERT(robot_!=NULL);
    robot_->subProp("Robot Description")->setValue("robot_description");
    // Rviz显示TF坐标系
    rviz::Display *tf_ = manager_->createDisplay("rviz/TF","adjustable tf",true);
    ROS_ASSERT(robot_!=NULL);
    // Rviz显示导航路径
    rviz::Display *path_ = manager_->createDisplay("rviz/Path","adjustable tf",true);
    ROS_ASSERT(robot_!=NULL);
    // Rviz显示激光雷达数据
    rviz::Display *laser_=manager_->createDisplay("rviz/LaserScan","adjustable scan",true);
    ROS_ASSERT(laser_!=NULL);
    laser_->subProp("Topic")->setValue("/volcano/Sick_LMS_291/laser_scan/layer0");
    laser_->subProp("Size (m)")->setValue("0.1");
}
