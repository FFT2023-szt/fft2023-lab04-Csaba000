#ifndef ANAF_H
#define ANAF_H
#include <QObject>
#include <QDebug>

class ANAF:public QObject
{
public:
    ANAF();

public slots:
    void feliratkozBankszamla();
};

#endif // ANAF_H
