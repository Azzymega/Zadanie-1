#include <iostream>
using namespace std;

class Person
{
private:
    string fullName;
    int age;
public:
    Person() {
        fullName = "Undefined";
        age = 0;
    }
    Person(int a, string n) {
        fullName = n;
        age = a;
    }
    void move() {
        cout << fullName;
        cout << "двигается";
    }
    void talk() {
        cout << fullName;
        cout << "говорит";
    }
};

class Phone
{
private:
    int number;
    string model;
    int weight;
public:
    void sendMessage(string number, ...)
    {
        string* num = &number;
        cout << "Сообщение отправлено на номер(а)";
        cout << num;
    }
    int getNumber() {
        return number;
    }
    void recieveCall(string name) {
        cout << "Звонит";
        cout << name;
    }
    void recieveCall(string name, int number) {
        cout << "Звонит";
        cout << name;
        cout << number;
    }
    Phone(int n, string m, int w) : Phone(n, m)
    {
        number = n;
        model = m;
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

int main()
{
    return 0;
}
