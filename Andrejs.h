#include <iostream>
#include "Name.h"
using namespace std;

class Andrejs: public Name
{
	public:
		Andrejs(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
