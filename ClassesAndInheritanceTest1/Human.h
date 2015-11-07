
#ifndef Human_h
#define Human_h

#include "Animal.h"
#include "Gender.h"
#include <string>
using std::string;

class Human :
	public Animal
{
private:
	int iq;
	Gender gender;
public:
	Human();
	Human(string name, int age, int iq, Gender gender);
	~Human();
};
#endif
