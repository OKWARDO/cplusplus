#include "Student.hpp"
#include "Utilities.hpp"
#include "test.hpp"

//A.hpp needed
#include <cstdio>
#include <iostream>
#include <cstring>
#include "a.hpp"

using namespace std;

//void test01(void)
//{
//	Student s;
//	for (int i = 0; i < DEFAULT_BUFFER_CAPACITY; i++)
//	{
//		s.AddGrade(i);
//
//	}
//	s.Debug();
//	char c;
//	scanf("%", &c);
//}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Test_02(void)
{
	int old = DEFAULT_BUFFER_CAPACITY;
	int new_c = 2 * DEFAULT_BUFFER_CAPACITY;
	int* ar = new int[DEFAULT_BUFFER_CAPACITY];
	for (int i = 0; i < DEFAULT_BUFFER_CAPACITY; i++)
	{
		ar[i] = i;
	}
	ExtendArrayInt(&ar, old, new_c);
	for (int i = DEFAULT_BUFFER_CAPACITY; i < 2 * DEFAULT_BUFFER_CAPACITY; i++)
	{
		ar[i] = i; 
	}
	for(int i = 0; i < new_c; i++)

	std::cout << i << std::endl;
	delete[] ar;
	
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Test_Alloc_Array_Ints(void)
{
	int old = DEFAULT_BUFFER_CAPACITY;
	int new_c = 2 * DEFAULT_BUFFER_CAPACITY;

	int* ar = new int[DEFAULT_BUFFER_CAPACITY];
	for (int i = 0; i < DEFAULT_BUFFER_CAPACITY; i++)
	{
		ar[i] = i;
	}
	ExtendArray< int >(&ar, old, new_c);
	//for (int i = DEFAULT_BUFFER_CAPACITY; i++);
		for (int i = 0; i < new_c; i++)	std::cout << i << std::endl;

	delete[] ar;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Test_Alloc_Array_Floats(void)
{
	float* ar = new float[DEFAULT_BUFFER_CAPACITY];
	int new_c = 2 * DEFAULT_BUFFER_CAPACITY;

	for (int i = 0; i < DEFAULT_BUFFER_CAPACITY; i++)
	{
		ar[i] = i *1.2f;
	}
	for (int i = 0; i < new_c; i++)
	std::cout << i << std::endl;

	
	delete[] ar;
	

}

	
	
void test03(void)
{
	A a; //creating an object of type A
	a.AddNumber(1);
	a.AddNumber(2);
	a.AddNumber(6);
	//a.debug();
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Test_04(void)
{
	int* myarray = new int[10];
	int cap = 10;
	int n_cap = 20;
	
	for (int i = 0; i < cap; i++)
		myarray[i] = i;
	ExtendArrayInt(&myarray, cap, n_cap);

	for (int i = cap; i < n_cap; i++)
		myarray[i] = i;
	for (int i = 0; i < n_cap; i++)
		cout << "value at location" << i << "is :" << myarray[i] << endl;

	delete[] myarray;

}

//

//void test06(void)
//{
//	Student s;
//
//	for (int i = 0; i < 30; i++)
//	{
//		s.AddGrade(i);
//	}
//	s.Debug();
//}
//#end

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

