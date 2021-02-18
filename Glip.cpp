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
    Glip::Glip()
    {
        string name = "";
        height = 0.0;
        weight = 0.0;
        color = grey;
        horn = false;
        brain = brain;
    }
    //Glip constructor taking in variables except the Brain variable and sets default variables for it
    Glip::Glip(string name, int height, int weight, Color color, bool horn)
    {
        this->name = name;
        setHeight(height);
        setWeight(weight);
        this->color = color;
        setHorn(horn);
        brain = brain;

    }

    //Glip constructor taking in all variables
    Glip::Glip(string name, int height, int weight, Color color, bool horn, Brain &brain)
    {
        this->name = name;
        setHeight(height);
        setWeight(weight);
        this->color = color;
        setHorn(horn);
        setBrain(brain);

    }

    //setName function allowing Glip's name to be changed
    void Glip::setName(string name)
    {
        this->name = name;
    }

    //setHeight function allowing Glip's height to be changed
    void Glip::setHeight(int height)
    {
        this->height = height;
    }

    //setWeight function allowing Glip's height to be changed
    void Glip::setWeight(int weight)
    {
        this->weight = weight;
    }

    //setColor function allowing Glip's color to be changed
    void Glip::setColor(Color color)
    {
        this->color = color;
    }

    //setHorn function allowing Gip's horn value to be changed
    void Glip::setHorn(bool horn)
    {
        this->horn = horn;
    }

    //setBrain function allowing Glip's Brain value to be changed
    void Glip::setBrain(Brain brain)
    {
        this->brain = brain;
    }

    //getName function allowing access to Glip's name
    string Glip::getName() const
    {
        return name;
    }

    //getHeight function allowing access to Glip's height
    int Glip::getHeight() const
    {
        return height;
    }

    //getWeight function allowing access to Glip's weight
    int Glip::getWeight() const
    {
        return weight;
    }

    //getColor function allowing access to Glip's color
    Color Glip::getColor() const
    {
        return color;
    }

    //getHorn function allowing access to Glip's horn value
    bool Glip::getHorn() const
    {
        return horn;
    }

    //getBrain function allowing access to Glip's Brain function
    Brain Glip::getBrain() const
    {
        return brain;
    }

    //int getHappiness() const
    //{
    //return brain.getHappiness();
    //}



    //printGlip function is a function that allowes for a visual veiw of the created Glip. This function
    //can be a little glitchy
    void Glip::printGlip(Glip& glip) const
    {
        Color col = glip.getColor();
        int width = 12;
        width = width + glip.getWeight();

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
        if(glip.getHorn())
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
        for (int i = 0; i<glip.getHeight(); i++)
        {
            cout << setw(15);
            for(int n = 0; n<glip.getWeight(); n++)
            {
                cout <<"#";
            }
            cout << "\n" << setw(15);
        }
        for (int i = 0; i < glip.getHeight(); i++)
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
    int operator == (const Glip& GlipOne, const Glip& GlipTwo)
    {
        int num = GlipOne.getBrain() == GlipTwo.getBrain();
        if(GlipOne.getWeight() == GlipTwo.getWeight())
        {
            num++;
        }
        if(GlipOne.getHeight() == GlipTwo.getHeight())
        {
            num++;
        }
        if(GlipOne.getColor() == GlipTwo.getColor())
        {
            num++;
        }
        if(GlipOne.getName() == GlipTwo.getName())
        {
            num++;
        }
        if(GlipOne.getHorn() == GlipTwo.getHorn())
        {
            num++;
        }
        return num;
    }



