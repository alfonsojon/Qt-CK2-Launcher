#include <QtGui/QApplication>
#include "mainwindow.h"
// Move window in center of screen
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
    // Used by QSettings
    QCoreApplication::setOrganizationName   ("qteu4launcher");
    QCoreApplication::setApplicationName    ("qteu4launcher");
    QCoreApplication::setApplicationVersion ("15-03-2014 release 1");

    QApplication a(argc, argv);

    MainWindow w;

    // Open window in center of screen
    QRect r = w.geometry();
    r.moveCenter(QApplication::desktop()->availableGeometry().center());
    w.setGeometry(r);
    w.show();

    return a.exec();
}

