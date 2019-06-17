import QtQuick 2.0

Item {
    id: element
    width: 50
    height: 65
    Rectangle {
        id: rectangle
        width: parent
        height: parent.height - 10
        anchors.horizontalCenter: parent.horizontalCenter
        border.color: black
        border.width: 3

        Image {
            id: icon_img
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            source: "qrc:/icons/resources/icons/drawer.png"
        }
        Text{
            text: "Drawer"
            anchors.horizontalCenter: parent.horizontalCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.top: icon_img.bottom
        }
    }
}
