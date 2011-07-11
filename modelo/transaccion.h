#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <QObject>

class Transaccion : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString categoria READ categoria WRITE setCategoria NOTIFY categoriaChanged)
    Q_PROPERTY(int monto READ monto WRITE setMonto NOTIFY montoChanged)
public:
    explicit Transaccion(QString categoria, int monto, QObject *parent = 0);

    QString categoria();
    void setCategoria(QString categoria);

    int monto();
    void setMonto(int monto);

signals:
    void categoriaChanged();
    void montoChanged();

public slots:

private:
    QString m_categoria;
    int m_monto;
};

#endif // TRANSACCION_H
