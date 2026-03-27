#include "RabbitMQConfigDialog.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/resources/icon.png"));
    app.setApplicationName("NeTrainSim");
    app.setOrganizationName("NeTrainSim");

    RabbitMQConfigDialog dialog;
    dialog.show();

    return app.exec();
}
