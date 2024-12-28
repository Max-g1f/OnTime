#include <string>
#include <iostream>


class Person
{
	std::string name;
	int age;

public:
	Person(std::string n, int a) : name{ n }, age{ a } {}

	~Person() {}

	std::string getName() { return name; }

	int getAge() { return age; }

	void incAge() { age++; }
	
	friend std::ostream& operator<<(std::ostream& os, Person& p)
	{
		os << p.name << " " << p.age;
	}
};