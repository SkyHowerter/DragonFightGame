// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-18-2017
// Assignment 8
#ifndef DRAGON_H
#define DRAGON_H
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
// this just sets up the dragon class
// more information can be found
// in the comments of the dragon.cpp file

class dragon{
    public:
    dragon();
    dragon(int);
    void setxfactor();
    int getxfactor();
    int getAttack();
    int getStrength();
    int getHealth();
    void setStrength(int);
    void setHealth(int);
    void getHint();

    private:
    string name;
    int encounter;
    int dstrength;
    int dhealth;
    int turn;
    int xfactor;
};
#endif
