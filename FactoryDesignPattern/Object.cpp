#include<iostream>

using namespace std;

class Toy
{
protected:
	string name;
	float price;
public:
	virtual void prepareParts()  = 0;
	virtual void combineParts()  = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel()    = 0;
	virtual void showProduct()   = 0;

};

class Car : public Toy
{
public:
	void prepareParts() { cout << "Preparing car parts" << endl; }
	 void combineParts() { cout << "Combining car parts" << endl; }
	 void assembleParts() { cout << "Asssembling car parts" << endl; }
	 void applyLabel() { cout << "Applying car label" << endl; name = "Car"; price = 10000; }
	 void showProduct() { cout << "Name : " << name << endl << "Price : " << price << endl; }
};

class Plane : public Toy
{
public:
	void prepareParts() { cout << "Preparing Plane parts" << endl; }
	void combineParts() { cout << "Combining Plane parts" << endl; }
	void assembleParts() { cout << "Asssembling Plane parts" << endl; }
	void applyLabel() { cout << "Applying Plane label" << endl; name = "Plane"; price = 1000000; }
	void showProduct() { cout << "Name : " << name << endl << "Price : " << price << endl; }

};

class Bike : public Toy
{
public:
	void prepareParts() { cout << "Preparing Bike parts" << endl; }
	void combineParts() { cout << "Combining Bike parts" << endl; }
	void assembleParts() { cout << "Asssembling Bike parts" << endl; }
	void applyLabel() { cout << "Applying Plane label" << endl; name = "Bike"; price = 1000; }
	void showProduct() { cout << "Name : " << name << endl << "Price : " << price << endl; }

};