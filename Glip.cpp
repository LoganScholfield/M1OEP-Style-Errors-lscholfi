//
// Created by lls3 on 2/17/2021.
//



//include statements
#include <iostream>
#include <iomanip>
#include "Brain.h"
#include <stdlib.h>
#include "Glip.h"

using namespace std;



//initialization of the Glip class. Glip's are alien creatures with many physical attributes similar to humans

    //private variable declarations

    //public variable and function declarations


    //default Glip cnstructor
    Glip::Glip(){
        string name = "";
        height = 0.0;
        weight = 0.0;
        color = grey;
        horn = false;
        brain = brain;
    }
    //Glip constructor taking in variables except the Brain variable and sets default variables for it
    Glip::Glip(string name, int height, int weight, Color color, bool horn){
        this->name = name;
        set_height(height);
        set_weight(weight);
        this->color = color;
        set_horn(horn);
        brain = brain;

    }

    //Glip constructor taking in all variables
    Glip::Glip(string name, int height, int weight, Color color, bool horn, Brain &brain){
        this->name = name;
        set_height(height);
        set_weight(weight);
        this->color = color;
        set_horn(horn);
        set_brain(brain);

    }

    //setName function allowing Glip's name to be changed
    void Glip::set_name(string name){
        this->name = name;
    }

    //setHeight function allowing Glip's height to be changed
    void Glip::set_height(int height){
        this->height = height;
    }

    //setWeight function allowing Glip's height to be changed
    void Glip::set_weight(int weight){
        this->weight = weight;
    }

    //setColor function allowing Glip's color to be changed
    void Glip::set_color(Color color){
        this->color = color;
    }

    //setHorn function allowing Gip's horn value to be changed
    void Glip::set_horn(bool horn){
        this->horn = horn;
    }

    //setBrain function allowing Glip's Brain value to be changed
    void Glip::set_brain(Brain brain){
        this->brain = brain;
    }

    //getName function allowing access to Glip's name
    string Glip::get_name() const{
        return name;
    }

    //getHeight function allowing access to Glip's height
    int Glip::get_height() const{
        return height;
    }

    //getWeight function allowing access to Glip's weight
    int Glip::get_weight() const{
        return weight;
    }

    //getColor function allowing access to Glip's color
    Color Glip::get_color() const{
        return color;
    }

    //getHorn function allowing access to Glip's horn value
    bool Glip::get_horn() const{
        return horn;
    }

    //getBrain function allowing access to Glip's Brain function
    Brain Glip::get_brain() const{
        return brain;
    }

    //int getHappiness() const
    //{
    //return brain.getHappiness();
    //}



    //printGlip function is a function that allowes for a visual veiw of the created Glip. This function
    //can be a little glitchy
    void Glip::print_glip(Glip& glip) const
    {
        Color col = glip.get_color();
        int width = 12;
        width = width + glip.get_weight();

        //function sets text color to Glip's color
        if (col == red)
        {
            system("Color 04");
        }
        if (col == orange)
        {
            system("Color 0C");
        }
        if (col == yellow)
        {
            system("Color 06");
        }
        if (col == green)
        {
            system("Color 02");
        }
        if (col == blue)
        {
            system("Color 01");
        }
        if (col == purple)
        {
            system("Color 05");
        }
        if (col == grey)
        {
            system("Color 08");
        }

        //prints horn
        if(glip.get_horn())
        {
            cout << setw(width) << " |" << endl;
            cout << setw(width) << " |" << endl;
            cout << setw(width) << " |" << endl;
        }

        //makes head
        cout << right << setw(width) << "#####" << endl;
        cout << setw(width) << "#-#-#" << endl;
        cout << setw(width) <<  "##0##" << endl;

        //for loops make body
        for (int i = 0; i<glip.get_height(); i++)
        {
            cout << setw(15);
            for(int n = 0; n<glip.get_weight(); n++)
            {
                cout <<"#";
            }
            cout << "\n" << setw(15);
        }
        for (int i = 0; i < glip.get_height(); i++)
        {
            cout << setw(width) << "# #" << endl;
        }
        cout << "\n" << endl;

        //sets text color back to normal
        system("Color 07");
    }




    //friend overloaded operator to change output while couting the Glip object. This function takes use of the
    //Brain's overloaded cout function
    ostream &operator<<(ostream &outs, const Glip &glip)
    {

        outs << std::right << setw(10) << glip.name << "\n";
        outs << "----------------- \n";
        outs << "Height: " << right << setw(1) << glip.height << "\n";
        outs << "Weight: " << setw(1) << glip.weight << "\n";
        outs << "Color: " << setw(1) << glip.color << "\n";
        if(glip.horn == true) {
            outs << left << setw(4) << "Horn \n";
        }
        else
            outs << setw(4) << "No Horn \n";

        outs << "----------------- \n" << glip.brain;

        return outs;
    }


    //friend == operator overload function to change outcome when comparing two Glip objects
    //this function instead of returning a bool now returns and int referring to how many brain variables are the same in each object
    int operator == (const Glip& Glip_one, const Glip& Glip_two)
    {
        int num = Glip_one.get_brain() == Glip_two.get_brain();
        if(Glip_one.get_weight() == Glip_two.get_weight())
        {
            num++;
        }
        if(Glip_one.get_height() == Glip_two.get_height())
        {
            num++;
        }
        if(Glip_one.get_color() == Glip_two.get_color())
        {
            num++;
        }
        if(Glip_one.get_name() == Glip_two.get_name())
        {
            num++;
        }
        if(Glip_one.get_horn() == Glip_two.get_horn())
        {
            num++;
        }
        return num;
    }



