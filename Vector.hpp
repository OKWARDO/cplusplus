#ifndef VECTOR_HPP
#define VECTOR_HPP
#define VECTOR_DEFAULT_CAPACITY 30
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

typedef unsigned long int count_t;

template <typename T> class Vector
{
protected:
	count_t            m_capacity;
	T*                 m_buffer;
	count_t            m_counter;
	


public:
	Vector(void)
	{
		m_capacity = VECTOR_DEFAULT_CAPACITY;
		m_counter = 0;
		m_buffer = new T[m_capacity];
		
		
		
	}

	virtual ~Vector(void)
	{
		delete[] m_buffer;
		
	};

	
	
	void AddElement(T element)
	{

		m_counter++;
		//if need Extend array
		if (m_counter > m_capacity)
		//{
			//ExtendArray<T>(&m_buffer, m_capacity, 2 * m_capacity);
			//m_capacity += 10;
		//}
		m_buffer[m_counter-1] = element;

	}
	void debug(void)
	{
		cout << "First letter grade = " << m_counter << endl;
		for (int i = 0; i = m_counter; i++)
			cout << "grade = " << m_buffer[i] << endl;

	}

};

#endif
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            