#ifndef TRUCK_H
#define TRUCK_H

#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int towCapacity;

public:
	Truck();
	Truck(int);
	~Truck();
	int getTowCapacity();
	void setTowCapacity(int);
	virtual void print();
};

Truck::Truck() {

}

Truck::Truck(int towCapacity) {
this->towCapacity = towCapacity;
}

Truck::~Truck() {

}

int Truck::getTowCapacity() {
	return this->towCapacity;
}

void Truck::setTowCapacity(int towCapacity) {
	this->towCapacity = towCapacity;
}

void Truck::print() {
	Vehicle::print();
	cout << "Tow Capacity: " << this->towCapacity << endl;
}

#endif // !TRUCK_H

