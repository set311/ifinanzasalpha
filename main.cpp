#include <QtGui/QApplication>
#include <QList>
#include <QVariant>
#include <QDeclarativeEngine>
#include <QDeclarativeContext>

#include "qmlapplicationviewer.h"
#include "modelo/transaccion.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QList<QObject*> mockModeloTablaIngresos;

    mockModeloTablaIngresos << new Transaccion("Comida", 555.5)
                            << new Transaccion("Transporte", 1000)
                            << new Transaccion("Entretenimiento", 2000);

    QmlApplicationViewer viewer;
    viewer.engine()->rootContext()->setContextProperty("modeloTablaIngresos", QVariant::fromValue(mockModeloTablaIngresos));
    viewer.setMainQmlFile(QLatin1String("qml/iFinanzasAlpha/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
