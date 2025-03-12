#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    int year;
    string make;
    string model;
    int speed;

public:
    // Constructor
    Car(int yr, string mk, string mdl);

    // Accessors
    int getYear() const;
    string getMake() const;
    string getModel() const;
    int getSpeed() const;

    // Mutators
    void accelerate();
    void brake();
};

#endif
