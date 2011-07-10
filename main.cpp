#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QmlApplicationViewer viewer;
    viewer.setMainQmlFile(QLatin1String("qml/iFinanzasAlpha/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
