#include "mainwindow.h"
#include "rightclick.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;

        QVBoxLayout *layout = new QVBoxLayout;
        QWidget *window = new QWidget();
        RightClick *button=new RightClick();
        layout->addWidget(button);

        window->setLayout(layout);
        w.setCentralWidget(window);
        w.show();
        return a.exec();
}
