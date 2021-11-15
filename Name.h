#ifndef NAME_H
#define NAME_H

#include <iostream>
using namespace std;

class Name
{
	public:
		virtual void setName(string){};
		virtual void Print() const=0;
};

#endif
