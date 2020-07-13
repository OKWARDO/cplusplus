#ifndef UTILITIES_HPP
#define UTILITIES_HPP

void ExtendArrayInt(int** ptr, int old_cap, int new_cap);

template <typename T> void ExtendArray(T** ptr, int old, int new_c)
{

		//int* derrefed_ptr = *ptr;
		T* temp = new T[old];
		//int* temp = new int[old];
		for (int i = 0; i < old; i++)
			temp[i] = (*ptr)[i];
		delete[] * ptr;
		*ptr = new T[new_c];

		for (int i = 0; i < old; i++)


			(*ptr)[i] = temp[i];
		


		delete[] temp;

	}


#endif


 
