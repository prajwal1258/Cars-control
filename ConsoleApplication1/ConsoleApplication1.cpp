// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
class cars {
public:
	
	string a,b,c;
	int tank;
	void ENGINE_Start() {

		cout << "Starting Engine "<<a;
	}
	void Control_Doors() {
		cout << "Managed the Open and Close Doors "<<b;
	}
	void Check_Fuel() {
		cout << "Checking Fuel in Engine ";
		cin >> tank;
		switch(tank) {
		case 1:
			cout << "Fill the Tank"<<c;
		case 2:
			cout << "No Need to Fill the Tank"<<c;
		}
	}

};

int main() {
	cars obj1;
	
	obj1.b="Let's go \n";
	obj1.a="brmhh !! \n";
	obj1.c= "TANK FULL! \n";
	
	obj1.Control_Doors();
	obj1.Check_Fuel();
	obj1.ENGINE_Start();
	obj1.Control_Doors();
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
