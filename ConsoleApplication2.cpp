#include <iostream>
using namespace std;

class Person
{
private:
    string fullName;
    int age;
public:
    Person() {
        fullName = "Неопределено";
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
    void sendMessage(int numberOfArguments,string numbers[])
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

enum Seasons {
    spring = 0,
    summer = 1,
    autumn = 2,
    winter = 3,
    springTemperature = 10,
    summerTemperature = 30,
    autumnTemperature = 5,
    winterTemperature = -30
};
void middleTemperature(Seasons temp) {
    switch (temp) {
    case Seasons::autumnTemperature: cout << 5;
    case Seasons::winterTemperature: cout << -30;
    case Seasons::springTemperature: cout << 10;
    case Seasons::summerTemperature: cout << 30;
    }
}
string returnString(Seasons season) {
    switch (season) {
    case 0: return "Я люблю весну";
    case 1: return "Я люблю лето";
    case 2: return "Я люблю осень";
    case 3: return "Я люблю зиму";
    }
}
string returnString(Seasons season, Seasons temperature) {
    switch (season) {
    case 0: return "Я люблю весну";
    case 1: return "Я люблю лето";
    case 2: return "Я люблю осень";
    case 3: return "Я люблю зиму";
    }
}
string getDescription(Seasons season) {
    switch (season)
    {   
    case spring:
        return "Прекрасная весенная пора с средней температурой в 10 градусов. Растения начинают оживать после зимы.";
        break;
    case summer:
        return "Прекрасная летняя пора с средней температурой в 30 градусов. Солнце обычно зноит и температура высокая.";
        break;
    case autumn:
        return "Прекрасная осенняя пора с средней температурой в 5 градусов. Растения сбрасывают листву, увеличивается количество осадков и начинает холодать.";
        break;
    case winter:
        return "Прекрасная зимняя пора с средней температурой в -30 градусов. Красивые снежные хлопья усыпают всё вокруг, очень холодно.";
        break;
    default:
        break;
    }
}
int main()
{
    Phone* firstPhone = new Phone();
    Phone* secondPhone = new Phone();
    Phone* otherPhone = new Phone();
    cout << firstPhone->getNumber();
    firstPhone->recieveCall("\nSanya");
    string numbers[] = {" 8800553535"," 88007773737"," 444444"};
    firstPhone->sendMessage(2, numbers);
    cout << secondPhone->getNumber();
    secondPhone->recieveCall("\nSanya");
    secondPhone->sendMessage(2, numbers);
    cout << otherPhone->getNumber();
    otherPhone->recieveCall("\nSanya");
    otherPhone->sendMessage(2, numbers);
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
    Seasons summer = Seasons::summer;
    cout << "\n";
    cout << summer;
    cout << Seasons::autumn;
    cout << Seasons::autumnTemperature;
    cout << Seasons::spring;
    cout << Seasons::springTemperature;
    cout << Seasons::autumn;
    cout << Seasons::autumnTemperature;
    cout << Seasons::winter;
    cout << Seasons::winterTemperature;
    cout << getDescription(Seasons::spring);
    cout << getDescription(Seasons::summer);
    cout << getDescription(Seasons::autumn);
    cout << getDescription(Seasons::winter);
    return 0;
}
