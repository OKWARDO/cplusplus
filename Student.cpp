#include "Student.hpp"
#include "Utilities.hpp"
#include "test.hpp"
#include "Vector.hpp"
#include <iostream>
#include <cstring>

using namespace std;

void Student::Debug(void)
{
	m_grades.debug();

}

	
void Student::AddGrade(int g)
{
	
	m_grades.AddElement(g);


}

   

Student::Student()
{
	// new is a memory alocation operator	


	
	m_id = 0;
	//m_FirstName = "John";
	//m_LastName = "Doe";
	
		//cout << "Enter Grades " << &AddGrade << endl;
	cout << "Constructor called" << endl;
	

};
Student::~Student()
{
	

};





