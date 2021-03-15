#include<iostream>
#include"ToyFactory.cpp"

using namespace std;

int main()
{
	int type;
	while (1)
	{
		cout << "1. Car " << endl;
		cout << "2. Bike " << endl;
		cout << "3. Plane " << endl;
		cout << "Enter the type or zero to exit" << endl;
		cin >> type;
		if (!type)
			break;
		Toy* v = ToyFactory :: createToy(type);
		if (v)
		{
			v->showProduct();
			delete(v);
		}
			
	}
	cout << "Exit..." << endl;
	return 0;
}