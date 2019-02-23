// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-18-2017
// Assignment 8
#ifndef PLAYER_H
#define PLAYER_H
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

// this file sets up the object class player
// which allows the user to have a character
// with set stats and a set weapon.
class player{
    public:
    player(string, string);
    int getStrength();
    int getHealth();
    void setAttack(string);
    void setHealth(int);
    int getSpeed();
    int getDamage();
    int getStealth();
    private:
    string type;
    string weapon;
    int pstrength;
    int phealth;
    int pspeed;
    int damage;
    int stealth;


};
#endif

