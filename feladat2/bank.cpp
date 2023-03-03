#include "bank.h"

Bank::Bank(double b)
{
    balance=b;
}

void Bank::addMoney(double s)
{
    this->balance+=s;
    limitEvent(balance);
}

bool Bank::takeMoney(double s)
{
    if (this->balance-s<0)
    {
        return false;
    }
    else
    {
        this->balance-=s;
        return true;
    }
}

double Bank::getBalance()
{
    return this->balance;
}

void Bank::limitEvent(double amount)
{
    if(amount>=100000)
    {
        emit overBalance();
        qDebug()<<"Atlepte a hatart";
    }
}
