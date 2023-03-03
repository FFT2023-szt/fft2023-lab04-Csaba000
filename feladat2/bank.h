#ifndef BANK_H
#define BANK_H

#include <QObject>
#include <QDebug>
#include <iostream>

class Bank : public QObject
{
    Q_OBJECT
public:

    Bank(double balance);
    void addMoney(double s);
    bool takeMoney(double s);
    double getBalance();

private:
    double balance;
public slots:

    void limitEvent(double amount);

signals:

    void overBalance();
};

#endif // BANK_H
