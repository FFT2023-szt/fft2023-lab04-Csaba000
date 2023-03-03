#include "rightclick.h"
#include <QMessageBox>
#include <QMouseEvent>

RightClick::RightClick()
{

}

void RightClick::mousePressEvent(QMouseEvent *e){
    if(e->button()==Qt::RightButton){
        emit rightClicked();
        QMessageBox :: warning(this,"Right click","Right click");
    }
}
