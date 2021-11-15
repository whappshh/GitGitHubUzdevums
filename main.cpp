#include <iostream>
#include "Name.h"
#include "Andrejs.h"
using namespace std;

int main()
{
	const int array_size = 1;
	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Names[0] = &a;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
