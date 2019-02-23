// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-19-2017
// Assignment 7
#include "dragon.h"
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
// this is a basic constructor that does nothing but create a dragon
dragon::dragon(){
}
//this constructor creates a dragon and assignes them a health based off
// of a random factor and how long the user has been playing the game
dragon::dragon(int ncounter){
    setxfactor();
    dhealth=10+ncounter+getxfactor();
    setStrength(10+ncounter-getxfactor());
}
// this function generates a random value to modulate the power of the dragon
// so that every game played will be less predictable
void dragon::setxfactor(){
    xfactor=rand() % 10 +1;
        if (xfactor>5){
        xfactor=xfactor-5;
        xfactor=-xfactor;
        }
}
// this function is a basic setter to set the dragon's health in the event of an attack
void dragon::setHealth(int dam){
    dhealth=dhealth-dam;
}
// this function is a basic setter to set the dragon's strength in their inception
void dragon::setStrength(int st){
    dstrength=st;
}
// this function is a basic getter to get the dragon's strength for use in attack power calculations
int dragon::getStrength(){
    return dstrength;
}
// this basic getter returns the dragons current health value
// it's used both to supply the user with information and to
// make sure the dragon is still alive
int dragon::getHealth(){
    return dhealth;
}
// this function is a basic getter for the randomizing variable
int dragon::getxfactor(){
return xfactor;
}
// this function determines the dragon's attack value on a given turn
// based on the attack kind and the dragon's strength
int dragon::getAttack(){
    if (turn<=3 && turn>0){
        return dstrength/2;
    }
    if (turn>3){
        return dstrength;
    }
    if(turn==0){
        return 0;
    }
}
// this function randomizes what attack the dragon will use
// and tells the user a hint.
// if the user memorizes what hints mean what the user
// will have an advantage over the dragon.
void dragon::getHint(){
    turn=rand() % 7;
    if (turn==0){
        cout << "the dragon looks tired" << endl;
    }
    if (turn==1){
        cout << "the dragon begins to move toward you" << endl;
    }
    if (turn==2){
        cout << "the dragon raises their wings" << endl;
    }
    if(turn==3){
        cout<< "the dragon shifts their weight to one side" << endl;
    }
    if (turn==4){
        cout<< "the dragon lunges forward" << endl;
    }
    if (turn==5){
        cout << "the dragon rears up" << endl;
    }
    if (turn==6){
        cout << "the dragon takes a deep breath in" << endl;
    }
}
