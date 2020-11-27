#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#pragma once

class Vehicle {
private:
	string manufacturer;
	int year;

public:
	Vehicle();
	Vehicle(string, int);
	~Vehicle();
	string getManufacturer();
	int getYear();
	void setManufacturer(string);
	void setYear(int);
	virtual void print();
};

Vehicle::Vehicle() {

}

Vehicle::Vehicle(string vehicleMan, int yearBuilt) {
	manufacturer = vehicleMan;
	year = yearBuilt;
}

Vehicle::~Vehicle() {

}

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYear() {
	return year;
}

void Vehicle::setManufacturer(string vehicleMan) {
	this->manufacturer = vehicleMan;
}

void Vehicle::setYear(int yearBuilt) {
	this->year = yearBuilt;
}

void Vehicle::print() {
	cout << "Vehicle Information:" << endl;
	cout << "Vehicle Manufaturer: " << this->manufacturer << endl;
	cout << "Year Built: " << this->year << endl;
}

#endif // !VEHICLE_H
