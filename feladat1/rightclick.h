#ifndef RIGHTCLICK_H
#define RIGHTCLICK_H


#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>

class RightClick : public QPushButton
{
    Q_OBJECT

public :
    RightClick ();


private slots:
    void mousePressEvent(QMouseEvent *e) override;


signals:
    void rightClicked();

};

#endif // RIGHTCLICK_H
