
//include statements
#include <iostream>
#include <iomanip>
#include "Glip.h"
using namespace std;



//Initialization of Brain object class. This class is used as a private variable in the Glip class as the Glip's Brains.

    //default constructor
    Brain::Brain(){
        intelligence = 0;
        charisma = 0;
        happiness = 0;
    }

    //constructor with variables
    Brain::Brain(int intelligence, int charisma, int happiness){
        set_intelligence(intelligence);
        set_charisma(charisma);
        set_happiness(happiness);
    }

    //set Intelligence function to allow user to change the intelligence variable
    void Brain::set_intelligence(int intelligence){
        this->intelligence = intelligence;
    }
    //set Charisma function to allow user to change the charisma variable
    void Brain::set_charisma(int charisma){
        this->charisma = charisma;
    }
    //set Happiness function to allow user to change the happiness variable
    void Brain::set_happiness(int happiness){
        this->happiness = happiness;
    }
    //get intelligence function to allow user to get the intelligence variable
    int Brain::get_intelligence() const{
        return intelligence;
    }
    //get charisma function to allow user to get the charisma variable
    int Brain::get_charisma() const{
        return charisma;
    }
    //get happiness function to allow user to get the intelligence variable
    int Brain::get_happiness() const{
        return happiness;
    }


    //friend cout overload function to change the output when printing Brain objects
    ostream &operator<<(ostream &outs, const Brain &bra){

        outs << "| Intelligence: " << right << setw(1) << bra.intelligence  << " |\n";
        outs << "| Charisma: " << setw(1) << bra.charisma <<  "     |\n";
        outs << "| Happiness: " << setw(1) << bra.happiness << "    |\n";

        return outs;

    }

    //friend == operator overload function to change outcome when comparing two brain objects
    //this function instead of returning a bool now returns and int referring to how many brain variables are the same in each object
    int operator ==(const Brain& bra_one, const Brain& bra_two){
        int num = 0;
        if(bra_one.get_intelligence() == bra_two.get_intelligence()){
            num++;
        }
        if(bra_one.get_charisma() == bra_two.get_charisma()){
            num++;
        }
        if(bra_one.get_happiness() == bra_two.get_happiness()){
            num ++;
        }
        return num;
    }









