#include <iostream>
#include "Helicopter.h" //include the head file for the Helicopter class

//Default constructor
AirVehicle::Helicopter() : w(0), name(name) {}

//constructor with parameters
AirVehicle:: Helicopter(int w, string n) : w(w), n(name) {}

//getter for the name
string Helicopter::get_name() const { return n }

//setter for the name
void Helicopter::set_name(string new_name) { n = new_name }


//getter for the headwind, in km/h
int get_headwind() const {return headwind}

//setter for the headwind
void set_headwind(int new_headwind) { headwind = new_headwind}

//getter for the minute
int get_minutes() const {return minutes}

//setter for the minutes
void set_minutes(int new_minutes) {minutes = new_minutes}




