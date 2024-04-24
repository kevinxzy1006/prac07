#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
    private:
    int w; 
    float fuel; 
    int numberOfFlights; 

    public:
    AirVehicle(); //Default constructor
    AirVehicle(int w, float fuel, int numberOfFlights); //constuctor with parameters
    //Getter
    int get_w() const;
    float get_fuel() const;
    int get_numberOfFlights() const;
    //Setter
    void set_w();
    void set_fuel();
    void set_numberOfFlights();

    void refuel(); 

    void fly(int headwind, int minutes);
};

#endif //AIRVEHICLE_H