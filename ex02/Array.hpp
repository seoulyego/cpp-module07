#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <stdexcept>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T*				_array;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& obj);
		Array& operator=(const Array& obj);
		~Array();

		unsigned int size() const;
		T& 	operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
};

# include "Array.tpp"

#endif  // ARRAY_HPP
