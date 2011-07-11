import QtQuick 1.0

ListView {
    Component {
        id: delegadoLista

        Row {
            property int anchoCategoria : 200
            property int desfase : 10

            Text {
                width: anchoCategoria
                text: categoria
            }

            Rectangle {
                color: "transparent"
                width: desfase
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
