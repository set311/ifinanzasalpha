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
    ControladorTablaIngresos controlador;

    QmlApplicationViewer viewer;
    viewer.engine()->rootContext()->setContextProperty("delegadoTablaIngresos", &controlador);
    viewer.engine()->rootContext()->setContextProperty("modeloTablaIngresos", QVariant::fromValue(controlador.obtenLista()));

    viewer.setMainQmlFile(QLatin1String("qml/iFinanzasAlpha/main.qml"));

    viewer.showExpanded();

    return app.exec();
}
