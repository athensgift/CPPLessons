#include <string>
using std::string;

#ifndef Animal_h
#define Animal_h
class Animal
{
private:
	string name;
	int age;
public:
	Animal();
	Animal(string name, int age);
	~Animal();

	string GetName();
	void SetName(string name);
};
#endif