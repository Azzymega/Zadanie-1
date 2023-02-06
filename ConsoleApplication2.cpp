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
        cout << " двигается";
    }
    void talk() {
        cout << fullName;
        cout << " говорит";
    }
};

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
    void sendMessage(int numberOfArguments, string number, ...)
    {
        string* num = &number;
        cout << "\nСообщение отправлено на данные номер(а) телефона(ов): ";
        while (numberOfArguments > 0)
        {
            cout << num;
            cout << " ";
            num++;
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
    Phone* firstPhone = new Phone();
    Phone* secondPhone = new Phone();
    Phone* otherPhone = new Phone();
    cout << firstPhone->getNumber();
    firstPhone->recieveCall("\nSanya");
    firstPhone->sendMessage(2, "8800553535", "88007773737");
    cout << secondPhone->getNumber();
    secondPhone->recieveCall("\nSanya");
    secondPhone->sendMessage(2, "8800553535", "88007773737");
    cout << otherPhone->getNumber();
    otherPhone->recieveCall("\nSanya");
    otherPhone->sendMessage(2, "8800553535", "88007773737");
    firstPhone->printArgs();
    secondPhone->printArgs();
    otherPhone->printArgs();
    firstPhone->recieveCall("Sanya", 412423);
    Person* firstPeople = new Person();
    Person* secondPeople = new Person(21, "Vasya");
    firstPeople->move();
    firstPeople->talk();
    secondPeople->move();
    secondPeople->talk();
    return 0;
}
