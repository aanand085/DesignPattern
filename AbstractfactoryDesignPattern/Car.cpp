#include<iostream>

using namespace std;

class Tire
{
protected:
	string name;
	int pressure;
public:
	Tire(string n, int p) : name(n), pressure(p) {}
	string getName() { return name; }
	int getPressure() { return pressure; }

};

class SimpleTire : public Tire
{
public:
	SimpleTire() :Tire("SimpleTire", 75) {}
};

class LuxuryTire : public Tire
{
public:
	LuxuryTire() :Tire("LuxuryTire", 85) {}
};

class Body
{
protected:
	string name;
	int strength;
public:
	Body(string n, int p) : name(n), strength(p) {}
	string getName() { return name; }
	int getstrength() { return strength; }

};

class SimpleBody : public Body
{
public:
	SimpleBody() :Body("SimpleBody", 75) {}
};

class LuxuryBody : public Body
{
public:
	LuxuryBody() :Body("LuxuryBody", 85) {}
};


class Car
{
protected:
	string name;
	Tire* tire;
	Body* body;
public:
	Car(string n) : name(n) {}
	void setTire(Tire* t) { tire = t; }
	void setBody(Body* b) { body = b; }
	void printDetails()
	{
		cout << endl << "Car : " << name << endl;
		cout << "Tire: " << tire->getName() << " Pressure: " << tire->getPressure() << endl;
		cout << "Body: " << body->getName() << " Strength: " << body->getstrength() << endl;
	}
};
