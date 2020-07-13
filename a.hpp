#ifndef CLASS_A
#define CLASS_A
class A
{
public:
	A();
	~A();
	void AddNumber(int n);
	void Debug(void);//Default constructor





private:
	// The notation <TYPE*> means we
	// are declaring a pointer to a variable
	// of type int
	int* array;
	int m_counter;
};

#endif//A.hpp
