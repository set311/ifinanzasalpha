#include "ControladorTablaIngresos.h"
#include "modelo/transaccion.h"

#include <QDebug>

ControladorTablaIngresos::ControladorTablaIngresos(QObject *parent) : QObject(parent)
{
    listaElementos << new Transaccion(1, "Comida", 555.5)
                   << new Transaccion(2, "Transporte", 1000)
                   << new Transaccion(3, "Entretenimiento", 2000);
}

void ControladorTablaIngresos::eliminaElemento(int idElemento)
{
    qDebug() << "Eliminando: " << idElemento;
}

QList<QObject *> ControladorTablaIngresos::obtenLista()
{
    return listaElementos;
}

