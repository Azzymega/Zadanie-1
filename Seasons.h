#pragma once
#include <iostream>
using namespace std;
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
    case 0: return "� ����� �����";
    case 1: return "� ����� ����";
    case 2: return "� ����� �����";
    case 3: return "� ����� ����";
    }
}
string returnString(Seasons season, Seasons temperature) {
    switch (season) {
    case 0: return "� ����� �����";
    case 1: return "� ����� ����";
    case 2: return "� ����� �����";
    case 3: return "� ����� ����";
    }
}
string getDescription(Seasons season) {
    switch (season)
    {
    case spring: return "���������� �������� ���� � ������� ������������ � 10 ��������. �������� �������� ������� ����� ����.";
    case summer: return "���������� ������ ���� � ������� ������������ � 30 ��������. ������ ������ ����� � ����������� �������.";
    case autumn: return "���������� ������� ���� � ������� ������������ � 5 ��������. �������� ���������� ������, ������������� ���������� ������� � �������� ��������.";
    case winter: return "���������� ������ ���� � ������� ������������ � -30 ��������. �������� ������� ������ ������� �� ������, ����� �������.";
    }
}