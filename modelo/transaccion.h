#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <QObject>

class Transaccion : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int idElemento READ idElemento WRITE setIdElemento NOTIFY idElementoChanged)
    Q_PROPERTY(QString categoria READ categoria WRITE setCategoria NOTIFY categoriaChanged)
    Q_PROPERTY(int monto READ monto WRITE setMonto NOTIFY montoChanged)
public:
    explicit Transaccion(int idElemento, QString categoria, int monto, QObject *parent = 0);

    QString categoria();
    void setCategoria(QString categoria);

    int monto();
    void setMonto(int monto);

    int idElemento();
    void setIdElemento(int idElemento);

signals:
    void categoriaChanged();
    void montoChanged();
    void idElementoChanged();

public slots:

private:
    int m_idElemento;
    QString m_categoria;
    int m_monto;
};

#endif // TRANSACCION_H
