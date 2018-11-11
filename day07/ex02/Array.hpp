#include <stdexcept>
#include <iostream>

template <class T>
class Array 
{

private:
	T *	arr;
	int _size;

public:
	Array<T>() : _size(0) {
		this->arr = NULL;
		return ;
	}

	Array<T>(int n) : _size(n) {
		this->arr = new T[n]();
		return ;
	}

	~Array<T>() {
		delete [] arr;
		return;
	}

	Array<T>(Array<T> const & other) {
		if (this != &other)
		{
			delete [] this->arr;
			this->_size = other._size;
			this->arr = new T[other._size];
			for (int i = 0; i < other._size; i++)
				this->arr[i] = other.arr[i];
		}
	}

	Array<T> &	operator=( Array<T> const & rhs ) {
		if (this != &rhs)
		{
			delete [] this->arr;
			this->_size = rhs._size;
			this->arr = new T[rhs._size];
			for (int i = 0; i < rhs._size; i++)
				this->arr[i] = rhs.arr[i];
		}
		return (*this);
	}

	T &operator[](int number) {
		if (number <= this->_size)
			return (this->arr[number]);
		else
			throw std::range_error("No such element in array");
	}

	int	size()
	{
		return (this->_size);
	}
};