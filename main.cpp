//
// Created by Logan Scholfield on 2/4/2021 for CS120 Multiple classes open ended project
//Style One using _ in variable decloration and  braces that start on the same line
//Main.cpp file
//
using namespace std;
#include <iostream>
#include "Glip.h"
#include <stdlib.h>
#include "Brain.h"
#include <string>
//test


//compataility function that tests the similarity between two Glip objects
string compatibility(Glip &glip_one, Glip &glip_two){
    Brain one = glip_one.get_brain();
    Brain two = glip_two.get_brain();
    string g_one_name = glip_two.get_name();
    string g_two_name = glip_one.get_name();
    int neg_compatibility = 0;
    int pos_compatibility = 0;
    string message;
    //function creates a number for similarity

    neg_compatibility = (glip_one == glip_two);
    neg_compatibility = neg_compatibility;

    int comp_happiness = two.get_happiness() - one.get_happiness();
    int comp_intelligence = two.get_intelligence() - one.get_intelligence();
    int comp_charisma = two.get_charisma() - one.get_charisma();

    comp_happiness = abs(comp_happiness);
    comp_intelligence = abs(comp_intelligence);
    comp_charisma = abs(comp_charisma);

    pos_compatibility = comp_happiness + comp_intelligence + comp_charisma;

    int compatibility = pos_compatibility - neg_compatibility;

    //function outputs a string based on the determined integer value
    if(compatibility < 10){
        message = g_one_name + " and " + g_two_name + " are compatible.";
    }
    else if (compatibility < 5){
        message = g_one_name + " and " + g_two_name + " are very compatible";
    }
    else if(compatibility < 15){
        message = g_one_name + " and " + g_two_name + " are neither compatible or non compatible";
    }
    else if(compatibility < 20){
        message = g_one_name + " and " + g_two_name + " are not compatible";
    }
    else{
        message = g_one_name + " and " + g_two_name + " are polar opposites and should not be in the same room";
    }


    return message;
}

int main(){
    //welcomes and informs user of program
    cout << "Welcome to the virtual Glip simulator" << endl;
    cout << "Here you can create a community of creatures and see how well they would interact with each other" << endl;
    cout << "Below are example Creatures and Brains, feel free to create more!" << endl;
    cout << "Once you create the creatures put them into the compatibility tester and find out if your creatures are similar" << endl;
    cout << "Reminder, its whats on the inside that matters \n \n \n" << endl;


    //creation of Brain objects
    Brain b_one(1,1,1);
    Brain b_two(1,1,1);
    Brain b_three(10,10,10);

    //creation of Glip objects
    Glip g_one("Fred",5,9,yellow,true, b_one);
    Glip g_two("Sally",4,7,orange,false, b_two);
    Glip g_three("Gary", 4, 7,orange,false, b_three);


    //compatibility functions
    cout << compatibility(g_one, g_two) << endl;
    cout << compatibility(g_one, g_three) << endl;


    return 0;
}




