#include <iostream>
using namespace std;

// Abstract base class
class Vehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting." << endl;
    }

    void stop() override {
        cout << "Car is stopping." << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike is starting." << endl;
    }

    void stop() override {
        cout << "Bike is stopping." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    Vehicle* v;

    v = &car;
    v->start();
    v->stop();

    v = &bike;
    v->start();
    v->stop();

    return 0;
}