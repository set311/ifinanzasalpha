import QtQuick 1.0

Column {
    id: tablaIngresos
    property alias model: myRepeater.model

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

            Rectangle {
                color: "red"
                width: 30
                height: 30

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        delegadoTablaIngresos.eliminaElemento(idElemento)
                    }
                }
            }
        }
    }

    Repeater {
        id: myRepeater
        delegate: delegadoLista
    }

    move: Transition {
         NumberAnimation {
             properties: "y"
             easing.type: Easing.OutBounce
         }
     }
}
