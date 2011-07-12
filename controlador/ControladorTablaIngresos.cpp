#include "ControladorTablaIngresos.h"

#include "modelo/transaccion.h"

ControladorTablaIngresos::ControladorTablaIngresos(QDeclarativeContext * ctx, QObject *parent)
    : QObject(parent), ctx(ctx)
{
    listaElementos << new Transaccion(1, "Comida", 555.5)
                   << new Transaccion(2, "Transporte", 1000)
                   << new Transaccion(3, "Entretenimiento", 2000);

    ctx->setContextProperty("delegadoTablaIngresos", this);
    ctx->setContextProperty("modeloTablaIngresos", QVariant::fromValue(listaElementos));
}

void ControladorTablaIngresos::eliminaElemento(int idElemento)
{
    listaElementos.removeAt(idElemento - 1);
    ctx->setContextProperty("modeloTablaIngresos", QVariant::fromValue(listaElementos));
}

QList<QObject *> ControladorTablaIngresos::obtenLista()
{
    return listaElementos;
}

