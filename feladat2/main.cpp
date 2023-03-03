#include <QCoreApplication>
#include "bank.h"
#include "anaf.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Bank b(10000);
    ANAF anaf;
    int N=10;
    QObject::connect(&b,SIGNAL(overBalance()), &anaf, SLOT(limitEvent()));

    for(int i=0; i<N; ++i)
    {
        srand(time(NULL));
        int r=rand()%2;
        int osszeg=rand()%1000000;
        if(r==1)
        {
            b.addMoney(osszeg);
        }
        if(r==0)
        {
            b.takeMoney(osszeg);
        }
        cout<<b.getBalance()<<endl;
    }

    return a.exec();
}
