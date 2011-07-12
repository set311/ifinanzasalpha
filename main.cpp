#include <QtGui/QApplication>
#include <QList>
#include <QVariant>
#include <QDeclarativeEngine>
#include <QDeclarativeContext>

#include "qmlapplicationviewer.h"
#include "modelo/transaccion.h"
#include "controlador/ControladorTablaIngresos.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QmlApplicationViewer viewer;
    ControladorTablaIngresos controlador(viewer.engine()->rootContext());
    viewer.setMainQmlFile(QLatin1String("qml/iFinanzasAlpha/main.qml"));

    viewer.showExpanded();

    return app.exec();
}
