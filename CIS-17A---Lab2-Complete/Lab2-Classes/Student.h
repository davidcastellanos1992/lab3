#pragma once
#include <string>
class Student
{
private:
	std::string _name;	
public:
	Student();
	Student(std::string name);
	~Student();

	std::string GetName();
	
};

