#include "Car.h"
#include <iostream>
using namespace std;

// Constructor
Car::Car(int yr, string mk, string mdl) {
    year = yr;
    make = mk;
    model = mdl;
    speed = 0;
}

// Accessors
int Car::getYear() const { return year; }
string Car::getMake() const { return make; }
string Car::getModel() const { return model; }
int Car::getSpeed() const { return speed; }

// Accelerate
void Car::accelerate() {
    if (speed + 5 > 150) {
        cout << "Speed cannot exceed 150 mph!" << endl;
    } else {
        speed += 5;
    }
}

// Brake
void Car::brake() {
    if (speed - 5 < 0) {
        cout << "Speed cannot go below 0 mph!" << endl;
    } else {
        speed -= 5;
    }
}
