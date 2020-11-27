#ifndef CAR_H
#define CAR_H

#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
	int numOfDoors;

public:
	Car();
	Car(int);
	~Car();
	int getNumOfDoors();
	void setNumOfDoors(int);
	virtual void print();
};

Car::Car() {

}

Car::Car(int doors) {
	this->numOfDoors = doors;
}

Car::~Car() {

}

int Car::getNumOfDoors() {
	return this->numOfDoors;
}

void Car::setNumOfDoors(int doors) {
	this->numOfDoors = doors;
}

void Car::print() {
	Vehicle::print();
	cout << "Doors: " << this->numOfDoors << endl;
}

#endif // !CAR_H

