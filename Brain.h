//
// Created by lls3 on 2/16/2021.
//

#ifndef M1OEP_STYLE_ERRORS_LSCHOLFI_BRAIN_H
#define M1OEP_STYLE_ERRORS_LSCHOLFI_BRAIN_H

//include statements
#include <iostream>
#include <iomanip>
using namespace std;



//Initialization of Brain object class. This class is used as a private variable in the Glip class as the Glip's Brains.
class Brain{

    //private variables
private:
    int intelligence;
    int charisma;
    int happiness;




    //public variables
public:

    //default constructor
    Brain();


    //constructor with variables
    Brain(int intelligence, int charisma, int happiness);


    //set Intelligence function to allow user to change the intelligence variable
    void setIntelligence(int intelligence);

    //set Charisma function to allow user to change the charisma variable
    void setCharisma(int charisma);

    //set Happiness function to allow user to change the happiness variable
    void setHappiness(int happiness);

    //get intelligence function to allow user to get the intelligence variable
    int getIntelligence() const;

    //get charisma function to allow user to get the charisma variable
    int getCharisma() const;

    //get happiness function to allow user to get the intelligence variable
    int getHappiness() const;



    //friend cout overload function to change the output when printing Brain objects
    friend ostream &operator<<(ostream &outs, const Brain &bra);


    //friend == operator overload function to change outcome when comparing two brain objects
    //this function instead of returning a bool now returns and int referring to how many brain variables are the same in each object
    friend int operator ==(const Brain& braOne, const Brain& braTwo);










};

#endif //M1OEP_STYLE_ERRORS_LSCHOLFI_BRAIN_H
