#include "Person.h"

using namespace std;

class Student : public Person
{
	int course;
public:

	Student(string n, int a) : Person(n, a), course{ 1 } {}

	void incCourse() { course++; }
};