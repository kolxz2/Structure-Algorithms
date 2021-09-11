#include <iostream>
#include <string>
#include "BookLib.h"

int createLib();

using namespace std;

int main()
{
	int choise;
	BookLib instanse[createLib()];
	switch (choise){
		case 1:
		case 2:
		case 3:
		case 4:
		default:
			cout << "Not correct enter ";
	}
	instanse[0].BookSet("Mark", "Even", 2001, 201);
	instanse[0].BookInLib();
	cout << "Found Book " << instanse[0].BookFoundByName("Mar") << endl;
	return 0;
}

int createLib(){
	int num;
	cout << "How many book in your library? ";
	cin >> num;
	return num - 1;
}

