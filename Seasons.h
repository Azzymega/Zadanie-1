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
    case spring: return "Прекрасная весенная пора с средней температурой в 10 градусов. Растения начинают оживать после зимы.";
    case summer: return "Прекрасная летняя пора с средней температурой в 30 градусов. Солнце обычно зноит и температура высокая.";
    case autumn: return "Прекрасная осенняя пора с средней температурой в 5 градусов. Растения сбрасывают листву, увеличивается количество осадков и начинает холодать.";
    case winter: return "Прекрасная зимняя пора с средней температурой в -30 градусов. Красивые снежные хлопья усыпают всё вокруг, очень холодно.";
    }
}