#include "transaccion.h"

Transaccion::Transaccion(QString categoria, int monto, QObject *parent)
    : QObject(parent), m_categoria(categoria), m_monto(monto)
{

}

QString Transaccion::categoria()
{
    return m_categoria;
}

void Transaccion::setCategoria(QString categoria)
{
    if(m_categoria != categoria)
    {
        m_categoria = categoria;
        emit categoriaChanged();
    }
}

int Transaccion::monto()
{
    return m_monto;
}

void Transaccion::setMonto(int monto)
{
    if(monto != m_monto)
    {
        m_monto = monto;
        emit montoChanged();
    }
}
