#pragma once
#include <iostream>
using namespace std;
class Phone
{
private:
    int number;
    string model;
    int weight;
public:
    void printArgs()
    {
        cout << number;
        cout << model;
        cout << weight;
    }
    void sendMessage(int numberOfArguments, string numbers[])
    {
        cout << "\nСообщение отправлено на данные номер(а) телефона(ов): ";
        while (numberOfArguments >= 0)
        {
            cout << numbers[numberOfArguments];
            numberOfArguments--;
        }
    }
    int getNumber() {
        return number;
    }
    void recieveCall(string name) {
        cout << "\nЗвонит ";
        cout << name;
    }
    void recieveCall(string name, int number) {
        cout << "\nЗвонит ";
        cout << name;
        cout << number;
    }
    Phone(int n, string m, int w) : Phone(n, m)
    {
        weight = w;
    }
    Phone(int n, string m)
    {
        number = n;
        model = m;
        weight = 0;
    }
    Phone()
    {
        number = 0;
        model = "";
        weight = 0;
    }
};