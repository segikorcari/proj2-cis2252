#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car myCar(2022, "Toyota", "Corolla");

    cout << "Initial Speed: " << myCar.getSpeed() << " mph" << endl;

    // Accelerate 5 times
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Speed after acceleration: " << myCar.getSpeed() << " mph" << endl;
    }

    // Brake 5 times
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Speed after braking: " << myCar.getSpeed() << " mph" << endl;
    }

    // Test out-of-range scenarios
    myCar.brake(); // Speed should be 0, so this should give a warning
    for (int i = 0; i < 35; i++) {
        myCar.accelerate(); // This will exceed 150 mph and should give a warning
    }

    return 0;
}
