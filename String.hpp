#ifndef STRING_HPP
#define STRING_HPP

#include "Vector.hpp"
#include <cstring>
/////////////////////////////////////////////////////

class String : Vector<char>
{
public:
	String(const char* c_str)
		: Vector< char >() //Super important to memory
	{
		size_t sizeOfString = m_counter;
		for (size_t i = 0; i < sizeOfString; i++)
			AddElement(c_str[i]);
	}

	//String(const String& rhs)
	//{

	//}
	//String()
	    // : Vector< char >()
	//{

	//}
	//Vector< String > Split(const char* pattern)
	
	void FindFirstOccurence()
	{
		//int FindFirstOccurence(char letter)
		
	
		//git@github.com
		
		for (int i = 0; i = m_counter; i++)
		{
			if (i == m_counter)
				continue;
		}
		
		{
			//const char * strchr(const char * str, int character);
			//char * strchr(char * str, int character);
				
			
			
			
				int pattern_count = 0;
			}
	}
		



	~String()
	{
		//delete[] a;
	}
	 
	 
	
	//Vector operator+()
	
	static void Unit_Test(void)
	{
		String s1("a");
		//Vector< String > VecOfStrings = s1.Split("");

		//int FirstOccurrence =  "FindFirstOccurrence" ("James");

	}
typedef Vector< char > VectorC; 

}
#endif
