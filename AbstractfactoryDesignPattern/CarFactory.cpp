#include "Car.cpp"

class CarFactory
{
private:
	Car* car;
protected:
	virtual Tire* buildTire() = 0;
	virtual Body* buildBody() = 0;
	//can add more parts here

public:
	virtual Car* buildWholeCar() = 0;
};

class SimpleCarFactory : public CarFactory
{
	Tire* buildTire()
	{
		return new SimpleTire();
	}

	Body* buildBody()
	{
		return new SimpleBody();
	}

	Car* buildWholeCar()
	{
		Car* c = new Car("SimpleCar");
		c->setTire(buildTire());
		c->setBody(buildBody());
		return c;
	}
};

class LuxuryCarFactory : public CarFactory
{
	Tire* buildTire()
	{
		return new LuxuryTire();
	}

	Body* buildBody()
	{
		return new LuxuryBody();
	}

	Car* buildWholeCar()
	{
		Car* c = new Car("LuxuryCar");
		c->setTire(buildTire());
		c->setBody(buildBody());
		return c;
	}
};