// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-19-2017
// Assignment 8
#include "game.h"
#include "dragon.h"
#include "player.h"
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
using namespace std;
// this function sets up the player, then
// uses a for loop to run through up to 10 different dragons
// creating a new one each time.
// this function also runs the turns that are taken for each
// dragon until either the dragon or the player dies.
int main(){
    int delayspeed;
    cout << "set delay speed in milliseconds" << endl;
    cin >> delayspeed;
    delayspeed=delayspeed*1000;
    string type;
    string weapon;
    string patk;
    int phit;
    int pstealth;
    int dhit;
    game newgame();
    string line;
    ifstream newfile;
    newfile.open("game.txt");
    while(!newfile.eof()){
        newfile >> line;
        cout << line << endl;
    }
    while (type!= "Knight" && type!= "Lancer" && type!= "Archer" && type!= "Medic"){
    cout << "choose your type" << endl;
    cin >> type;
    }
    while (weapon!= "Sword" && weapon!= "Mace" && weapon!= "Bow"){
    cout << "choose your weapon" << endl;
    cin >> weapon;
    }
    player playera(type, weapon);
    cout << "this is your strength" << endl;
    cout << playera.getStrength() << endl;
    usleep(delayspeed);
    cout << "this is your speed" << endl;
    cout << playera.getSpeed() << endl;
    usleep(delayspeed);
        for(int i=0; i<10; i++){
            cout << "here comes a dragon" << endl;
            usleep(delayspeed);
            dragon dragona(i);
            while(playera.getHealth()>0 && dragona.getHealth()>0){
                cout << "this is your health" << endl;
                cout << playera.getHealth() << endl;
                usleep(delayspeed);
                cout << "this is their health" << endl;
                cout << dragona.getHealth() << endl;
                usleep(delayspeed);
                dragona.getHint();
                usleep(delayspeed);
                if (weapon == "Sword"){
                    while (patk!="swipe" && patk!="perry"){
                        cout << "what's your move?" << endl;
                        cin >> patk;
                        if (patk=="suicide"){
                            return 0;
                        }
                    }
                }
                if (weapon == "Mace"){
                    while (patk!="swing" && patk!="block"){
                        cout << "what's your move?" << endl;
                        cin >> patk;
                        if (patk=="suicide"){
                            return 0;
                        }
                    }
                }
                if (weapon == "Bow"){
                    while (patk!="singleshot" && patk!="doubleshot"){
                        cout << "what's your move?" << endl;
                        cin >> patk;
                        if (patk=="suicide"){
                            return 0;
                        }
                    }
                }
                playera.setAttack(patk);
                dragona.setHealth(playera.getDamage());
                patk="";
                dhit = rand() % 20;
                if(dhit - playera.getStealth() > 5){
                    playera.setHealth(dragona.getAttack()/2);
                    cout << "YOU GOT HIT!!!" << endl;
                    usleep(delayspeed);
                }
                else{
                    cout << "THE DRAGON MISSED!!!" << endl;
                    usleep(delayspeed);
                }
            }
            if(playera.getHealth()<=0){
                cout << "YOU DIED D':" << endl;
                usleep(delayspeed);
                cout << "but you managed to beat " << i << " dragons!" << endl;
                return 0;
            }
            if(dragona.getHealth()<=0){
                cout << "YOU BEAT DRAGON #"<< i+1 << "!" << endl;
                usleep(delayspeed);
                //newgame.popds(i);
            }
        }
    cout << "you beat all 10 dragons!" << endl;
    //newgame.disds();
    return 0;
}
