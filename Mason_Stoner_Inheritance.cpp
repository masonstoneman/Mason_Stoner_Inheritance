// Mason Stoner
// CIS 1202
// 11/24/2020

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

void getVehicle(Vehicle&);
void getCar(Car&);
void getTruck(Truck&);

int main()
{
	Vehicle v1, v2, v3;

	cout << "Vehicle Program" << endl << endl;

	cout << "Vehicle: " << endl;
	getVehicle(v1);
	v1.print();

	cout << "Car: " << endl;
	Car car;
	getVehicle(v2);
	getCar(car);
	v2.print();
	car.print();

	cout << "Truck: " << endl;
	Truck truck;
	getVehicle(v3);
	getTruck(truck);
	v3.print();
	truck.print();

	system("pause");
	return 0;
}

void getVehicle(Vehicle& vehicle) {
	string manufacturer;
	int year;

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	
	cout << endl;

	cout << "Enter the year built: ";
	cin >> year;

	vehicle.setManufacturer(manufacturer);
	vehicle.setYear(year);
}

void getCar(Car& car) {
	int doors;

	cout << "Enter the number of doors: ";
	cin >> doors;

	car.setNumOfDoors(doors);
}

void getTruck(Truck& truck) {
	int towCapacity;

	cout << "Towing capacity: ";
	cin >> towCapacity;

	truck.setTowCapacity(towCapacity);
}


