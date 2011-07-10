import QtQuick 1.0
import com.nokia.symbian 1.0

Window {
    id: window

    StatusBar {
        id: statusBar
        anchors.top: window.top
    }

    Rectangle {
        id:contenedorPrincipal
        anchors.top: statusBar.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: toolBar.top

        Rectangle{
            id: barraSuperior
            anchors.top: contenedorPrincipal.top
            anchors.left: contenedorPrincipal.left
            anchors.right: contenedorPrincipal.right

            height: 50
            color: "red"

            Rectangle
            {
                id:fecha
                anchors.left: parent.left
                height: parent.height
                width: 30

                Text {
                    id: tFecha
                    anchors.verticalCenter: parent.verticalCenter
                    text: "09"
                }
            }

            Rectangle{
                id:controlCalendario
                anchors.right: parent.right

                Text{
                    height: parent.height
                    anchors.right: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                    width: 30

                    id:bAdelante
                    text: "->"
                }
                Text{
                    height: parent.height
                    anchors.right: bAdelante.left
                    anchors.verticalCenter: parent.verticalCenter
                    width: 30

                    id:bAtras
                    text: "<-"
                }
            }

        }

        Rectangle{
            id: contenedorInformacionGastos
            height: 100
            anchors.top: barraSuperior.bottom
            anchors.left: contenedorPrincipal.left
            anchors.right: contenedorPrincipal.right

            color:"blue"

            Text {
                id: lDineroActual;
                anchors.top: parent.top
                anchors.left: parent.left
                text: "Presupuesto de este Mes:"
            }

            TextInput {
                id: tDineroActual;
                anchors.top: parent.top
                anchors.right: parent.right
                text: "$12,600.0"
            }

            Text {
                id: lPresupuesto;
                anchors.left: parent.left
                anchors.top: lDineroActual.bottom
                text: "Presupuesto de Hoy:"
            }

            TextInput {
                id: tPresupuesto;
                anchors.right: parent.right
                anchors.top: tDineroActual.bottom
                text: "$429.0"
            }

            Text {
                id: lGastoTotal;
                anchors.left: parent.left
                anchors.top: lPresupuesto.bottom
                text: "Gasto de este Mes:"
            }
            TextInput {
                id: tGastoTotal;
                anchors.right: parent.right
                anchors.top: tPresupuesto.bottom
                text: "$1,000.0"
            }
        }

        Rectangle{
            id: contenedorTablaIngresos
            anchors.top: contenedorInformacionGastos.bottom
            anchors.bottom: contenedorPrincipal.bottom
            anchors.left: contenedorPrincipal.left
            anchors.right: contenedorPrincipal.right

            color: "cyan"
        }
    }

    ToolBar {
        id: toolBar
        anchors.bottom: window.bottom
        tools: ToolBarLayout {
            id: toolBarLayout
            ToolButton {
                flat: true
                iconSource: "toolbar-back"
                onClicked: Qt.quit()
            }
        }
    }
}

