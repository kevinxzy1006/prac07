#include <iostream>
#include "AirVehicle.h"

//default constructor
AirVehicle::AirVehicle() : w(weight), fuel(100%), numberOfFlights(0) {}

//constructor with parameters
AirVehicle::AirVehicle(int w, float fuel, int numberOfFlights) : w(weight), fuel(100%), numberOfFlight(0) {}

//Getter for the weight
int AirVehicle::get_w() const { return w }

//Setter for the weight
void AirVehicle::set_w(int newWeight) { w = newWeight }

//Getter for the fuel
float AirVehicle::get_fuel() const { return fuel }

//Setter for the fuel
void AirVehicle::set_fuel(int newFuel) { fuel = newFuel }

//Getter for the numberOfFlight
int AirVehicle::get_numberOfFlights() const { return numberOfFlights };

//Setter for the numberOfFlight
void AirVehicle::set_numberOfFlights(int newNumberOfFlights) { numberOfFlights = newNumberOfFlights}

//difine refuel method for the fuel to be 100%
void AirVehicle::refuel() {fuel = 100%}

//define fly method as a virtual function
void AirVehicle::fly() { numberOfFlights++ } //headwind in km/h and minutes(time flying)