#include "a.hpp"
#include "Student.hpp"
#include "Vector.hpp"
#include "String.hpp"
#include "test.hpp"
#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>


using namespace std;



int main(int argc, char* argv[])
{
	Student s;
	for (int i = 0; i < 60; i++)
	{
		s.AddGrade(i);
	
		//ExtendArray(ptr*, int old, int new_c)
	}
//char const* pchar = c_str();

	{
		A a;
		a.AddNumber(1);
		a.AddNumber(2);
		a.AddNumber(3);
		 char str[] = "This is a sample string";
		//char str[] = "s";
  char * pch;
  printf("Looking for the 's' character in \"%s\"...\n", str);
  pch = strchr(str,'s');
  while (pch != NULL)
  {
    printf ("found at %d\n",pch-str+1);
    pch=strchr(pch+1,'s');
  }
  return 0;a.Debug();
		printf("a\r\n");
		char c;

		char str[] = "a";
		char * pch;
		printf("Looking for the 'a' character in \"%s\"...\n", str);
		pch = strchr(str, 'a');
		while (pch != NULL)
		{
			printf("found at %d\n", pch - str + 1);
			pch = strchr(pch + 1, 'a');
		}
		return 0;

	//	int myarray[10];


	//	int size = sizeof(myarray);
	//	printf("The size of an int is = %i", size);
	//	//scanf("%c", &c);
	//	//return 0;
	////}//main.cpp
	//	s.Debug();
	//	//char c = 0;
	//	scanf("%c", &c);
	//	system("pause");
	//	return 0;
	}
};
