//
// Created by Logan Scholfield on 2/4/2021 for CS120 Multiple classes open ended project
//Style 1 using camel case for variable names and Allman style braces
//Main.cpp file
//
using namespace std;
#include <iostream>
#include "Glip.h"
#include <stdlib.h>
#include "Brain.h"
#include <string>



//compataility function that tests the similarity between two Glip objects
string compatibility(Glip &glipOne, Glip &glipTwo)
{
    Brain one = glipOne.getBrain();
    Brain two = glipTwo.getBrain();
    string gOneName = glipTwo.getName();
    string gTwoName = glipOne.getName();
    int negCompatibility = 0;
    int posCompatibility = 0;
    string message;
    //function creates a number for similarity

    negCompatibility = (glipOne == glipTwo);
    negCompatibility = negCompatibility;

    int compHappiness = two.getHappiness() - one.getHappiness();
    int compIntelligence = two.getIntelligence() - one.getIntelligence();
    int compCharisma = two.getCharisma() - one.getCharisma();

    compHappiness = abs(compHappiness);
    compIntelligence = abs(compIntelligence);
    compCharisma = abs(compCharisma);

    posCompatibility = compHappiness + compIntelligence + compCharisma;

    int compatibility = posCompatibility - negCompatibility;

    //function outputs a string based on the determined integer value
    if(compatibility < 10)
    {
        message = gOneName + " and " + gTwoName + " are compatible.";
    }
    else if (compatibility < 5)
    {
        message = gOneName + " and " + gTwoName + " are very compatible";
    }
    else if(compatibility < 15)
    {
        message = gOneName + " and " + gTwoName + " are neither compatible or non compatible";
    }
    else if(compatibility < 20)
    {
        message = gOneName + " and " + gTwoName + " are not compatible";
    }
    else{
        message = gOneName + " and " + gTwoName + " are polar opposites and should not be in the same room";
    }


    return message;
}

int main()
{
    //welcomes and informs user of program
    cout << "Welcome to the virtual Glip simulator" << endl;
    cout << "Here you can create a community of creatures and see how well they would interact with each other" << endl;
    cout << "Below are example Creatures and Brains, feel free to create more!" << endl;
    cout << "Once you create the creatures put them into the compatibility tester and find out if your creatures are similar" << endl;\
    cout << "Reminder, its whats on the inside that matters \n \n \n" << endl;


    //creation of Brain objects
    Brain bOne(1,1,1);
    Brain bTwo(1,1,1);
    Brain bThree(10,10,10);

    //creation of Glip objects
    Glip gOne("Fred",5,9,yellow,true, bOne);
    Glip gTwo("Sally",4,7,orange,false, bTwo);
    Glip gThree("Gary", 4, 7,orange,false, bThree);


    //compatibility functions
    cout << compatibility(gOne, gTwo) << endl;
    cout << compatibility(gOne, gThree) << endl;


    return 0;
}




