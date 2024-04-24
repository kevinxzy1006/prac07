#include <iostream>
#include "AirVehicle.h"

int main() {
    //Example usage
    AirVehicle airvehicle(5000); //create an AirVehicle with a weight of 1000

    airvehicle refuel(); //use the function to refuel the airvehicle
    //check if the air vehicle is refueled
    std::cout << "How much is the fuel of the Air Vehicle? " << airvehicle.get_fuel() << std::endl;

    airvehicle numberOfFlights(); //use the function to add a new number of the airvehicle
    //check how many air vehicles are there
    std::cout << "How many air vehicles are there? " << airvehicle.get_numberOfFlights() << std::endl;

    return 0;
}