#pragma once
#include <iostream>
using namespace std;
class Person
{
private:
    string fullName;
    int age;
public:
    Person() {
        fullName = "Unnamed";
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