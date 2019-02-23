// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-19-2017
// Assignment 8
#include "player.h"
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
// this constructor sets up the player with their stats
// based on their character type as well as lets the user
// choose their weapon.
player::player(string typ, string weap){
    type=typ;
    weapon=weap;
    if(typ=="Knight"){
        pstrength=8;
        phealth=18;
        pspeed=8;
    }
    if(typ=="Lancer"){
        pstrength=10;
        phealth=18;
        pspeed=6;
    }
    if(typ=="Archer"){
        pstrength=8;
        phealth=16;
        pspeed=10;
    }
    if(typ=="Medic"){
        pstrength= 6;
        phealth= 20;
        pspeed= 8;
    }
}
// this getter retrieves the user's strength stat.
int player::getStrength(){
return pstrength;
}
// this getter retrieves the user's health stat.
int player::getHealth(){
return phealth;
}
//this setter let's the user pick an attack,
// and assigns a damage value and stealth value based on that attack
void player::setAttack(string atk){
    if(weapon=="Sword"){
        if(atk=="swipe"){
            damage=2+pstrength;
            stealth=pspeed-1;
        }
        if(atk=="perry"){
            damage=0;
            stealth=pspeed+4;
        }
    }
    if(weapon=="Mace"){
        if(atk=="swing"){
            damage=3+pstrength;
            stealth=pspeed-1;
        }
        if(atk=="block"){
            damage=0;
            stealth=pspeed+3;
        }
    }
    if(weapon=="Bow"){
        if(atk=="singleshot"){
            damage=2+pstrength;
            stealth=pspeed+2;
        }
        if(atk=="doubleshot"){
            damage=3+pstrength;
            stealth=pspeed+1;
        }
    }
}
// this setter sets the health with the input of a damage amount
void player::setHealth(int dam){
    phealth=phealth-dam;
}
// this getter takes the users speed for use in stealth calculations
int player::getSpeed(){
    return pspeed;
}
// this getter takes the user's stealth
int player::getStealth(){
    return stealth;
}
// this getter takes the damage the user is dealing to the dragon in the chosen turn.
int player::getDamage(){
    return damage;
}
