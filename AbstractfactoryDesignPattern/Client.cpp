#include "CarFactory.cpp"

#define SIMPLECAR 1
//#define LUXURYCAR 1

int main()
{
#ifdef SIMPLECAR
	CarFactory* cf = new SimpleCarFactory();

#elif LUXURYCAR
	CarFactory* cf = new LuxuryCarFactory();

#endif

	Car* car = cf->buildWholeCar();
	car->printDetails();


	return 0;
}