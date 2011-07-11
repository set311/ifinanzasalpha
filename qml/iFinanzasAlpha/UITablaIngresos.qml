import QtQuick 1.0

ListView {
    Component {
        id: delegadoLista

        Row {
            Text {
                id: categoriaRenglon
                width: 200
                text: categoria
            }
            Rectangle {
                color: "transparent"
                width: 10
            }

            TextEdit {
                id: montoRenglon
                activeFocusOnPress: true
                text: monto
            }
        }
    }

    delegate: delegadoLista
}
