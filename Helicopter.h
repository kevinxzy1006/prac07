#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"

class Helicopter : public AirVehicle {
    private:
    string name; //define the name;

    public:
    //constructor
    Helicopter();
    Helicopter(int w, string n) //create a Helicopter wigh weight w and name n

    //getter for the name
    string get_name() const;
    //setter for the name
    void set_name();

    //override function fly
    void fly(int headwind, int minutes) override {
            //getter for the headwind, in km/h
            int get_headwind() const;
            //setter for the headwind
            void set_headwind();

            //getter for the minutes
            int get_minute() const;
            //setter for the minute
            void set_minute();

            if(w > 5670) {
                w = w - 5670
                if(headwind < 40) {
                    fuel = fuel - (0.18 * w * minutes);
                }
                fuel = fuel - (0.4 * w * minutes);
            }
            if(headwind < 40) {
                fuel = fuel - (0.4 * w * minutes);
            }
        fuel = fuel - (0.18 * w * minutes);
    };
}

#endif; //HELICOPTER_H