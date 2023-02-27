#include <iostream>
#include "Person.h"
#include "Phone.h"
#include "Seasons.h"
using namespace std;

int main()
{
    Phone* firstPhone = new Phone();
    Phone* secondPhone = new Phone();
    Phone* otherPhone = new Phone();

    cout << firstPhone->getNumber();
    cout << secondPhone->getNumber();
    cout << otherPhone->getNumber();

    firstPhone->recieveCall("\nSanya");
    secondPhone->recieveCall("\nSanya");
    otherPhone->recieveCall("\nSanya");
    firstPhone->recieveCall("Sanya", 412423);

    string numbers[] = {" 8800553535"," 88007773737"," 444444"};
    firstPhone->sendMessage(2, numbers);
    secondPhone->sendMessage(2, numbers);
    otherPhone->sendMessage(2, numbers);

    firstPhone->printArgs();
    secondPhone->printArgs();
    otherPhone->printArgs();

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
