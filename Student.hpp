
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#define DEFAULT_BUFFER_CAPACITY 30
#include <cstdio>
#include "Vector.hpp"
using namespace std;

class Student
{
	protected: 
		int m_id;
	    std::string m_FirstName;
	    std::string m_LastName;
	    Vector<int> m_grades;
	    

public:
		void AddGrade(int grade);
		void Debug();
	
	
	//Student(void);
		Student();
		~Student();
	//default destructor
	

};


#endif


