/**
 * @file /include/robomap/main_window.hpp
 *
 * @brief Qt based gui for robomap.
 *
 * @date November 2010
 **/
#ifndef robomap_MAIN_WINDOW_H
#define robomap_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/
#include "ros/ros.h"

#include <QMainWindow>
#include <QCheckBox>
#include "ui_mainwindow.h"
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
#include <rviz/tool_manager.h>
#include <geometry_msgs/PointStamped.h>

/*****************************************************************************
** Namespace
*****************************************************************************/
namespace robomap {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();
    
private slots:
    
    void location_state_changed_foo(QCheckBox *cbox,int num);
    void Control_robot_foo(int state);
    /* 主界面按钮操作 */
    void on_btn_select_clicked();

    void on_btn_book_clicked();

    void on_btn_robot_state_clicked();


    void on_btn_select_ok_clicked();

    void on_btn_robot_clicked();

    void on_h_slider_angular_valueChanged(int value);

    void on_h_slider_linear_valueChanged(int value);

    void on_btn_map_clicked();

private:
    Ui::MainWindow ui;
    rviz::VisualizationManager *manager_;
    rviz::RenderPanel *render_panel_;
    rviz::Display *map_;
    
    // ROS变量
    ros::Publisher VolcanoGuiInfo_pub,Twist_pub;
    
    // 被勾选的复选框数量
    int check_nums = 0;
    // 被勾选的复选框数组存放
    int check_boxs[2] = {0};
    // 角速度值
    double angular_temp = 0.0;
    // 线速度值
    double linear_temp = 0.0;
    
};

}  // namespace robomap

#endif // robomap_MAIN_WINDOW_H
