/**
 * @file /src/main.cpp
 *
 * @brief Qt based gui.
 *
 * @date November 2010
 **/
/*****************************************************************************
** Includes
*****************************************************************************/
#include "ros/ros.h"
#include <QtGui>
#include <QApplication>
#include "../include/robomap/mainwindow.hpp"

/*****************************************************************************
** Main
*****************************************************************************/

int main(int argc, char **argv) {

    ros::init(argc, argv, "volcano_gui_node");
    QApplication app(argc, argv);
    robomap::MainWindow w(argc,argv);
    w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();
    ros::spin();
	return result;
}
