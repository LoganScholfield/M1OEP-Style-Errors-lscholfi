//
// Created by lls3 on 2/16/2021.
//

#ifndef M1OEP_STYLE_ERRORS_LSCHOLFI_GLIP_H
#define M1OEP_STYLE_ERRORS_LSCHOLFI_GLIP_H

//include statements
#include <iostream>
#include <iomanip>
#include "Brain.h"
#include <stdlib.h>
using namespace std;


//creation of color emus used as a variable in Glip objects
enum Color{
    red, orange, yellow, green, blue, purple, grey
        };

//initialization of the Glip class. Glip's are alien creatures with many physical attributes similar to humans
class Glip{


    //private variable declarations
private:
    string name;
    float height;
    float weight;
    Color color;
    bool horn;
    Brain brain;


    //public variable and function declarations
public:

    //default Glip cnstructor
    Glip();

    //Glip constructor taking in variables except the Brain variable and sets default variables for it
    Glip(string name, int height, int weight, Color color, bool horn);


    //Glip constructor taking in all variables
    Glip(string name, int height, int weight, Color color, bool horn, Brain &brain);


    //setName function allowing Glip's name to be changed
    void set_name(string name);


    //setHeight function allowing Glip's height to be changed
    void set_height(int height);


    //setWeight function allowing Glip's height to be changed
    void set_weight(int weight);


    //setColor function allowing Glip's color to be changed
    void set_color(Color color);


    //setHorn function allowing Gip's horn value to be changed
    void set_horn(bool horn);


    //setBrain function allowing Glip's Brain value to be changed
    void set_brain(Brain brain);


    //getName function allowing access to Glip's name
    string get_name() const;


    //getHeight function allowing access to Glip's height
    int get_height() const;


    //getWeight function allowing access to Glip's weight
    int get_weight() const;


    //getColor function allowing access to Glip's color
    Color get_color() const;


    //getHorn function allowing access to Glip's horn value
    bool get_horn() const;


    //getBrain function allowing access to Glip's Brain function
    Brain get_brain() const;

    //printGlip function is a function that allowes for a visual veiw of the created Glip. This function
    //can be a little glitchy
    void print_glip(Glip& glip) const;





    //friend overloaded operator to change output while couting the Glip object. This function takes use of the
    //Brain's overloaded cout function
    friend ostream &operator<<(ostream &outs, const Glip &glip);



    //friend == operator overload function to change outcome when comparing two Glip objects
    //this function instead of returning a bool now returns and int referring to how many brain variables are the same in each object
    friend int operator == (const Glip& Glip_one, const Glip& Glip_two);









    };

#endif //M1OEP_STYLE_ERRORS_LSCHOLFI_GLIP_H
