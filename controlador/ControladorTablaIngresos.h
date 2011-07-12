#ifndef CONTROLADORTABLAINGRESOS_H
#define CONTROLADORTABLAINGRESOS_H

#include <QObject>
#include <QList>
#include <QDeclarativeContext>

class ControladorTablaIngresos : public QObject
{
    Q_OBJECT
public:
    explicit ControladorTablaIngresos(QDeclarativeContext * ctx, QObject * parent = 0);

    Q_INVOKABLE void eliminaElemento(int idElemento);
    Q_INVOKABLE QList<QObject*> obtenLista();

private:
    QDeclarativeContext * ctx;
    QList<QObject *> listaElementos;
};

#endif // CONTROLADORTABLAINGRESOS_H
