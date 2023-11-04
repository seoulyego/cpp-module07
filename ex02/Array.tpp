#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array()
: _size(0) {
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n)
: _size(n) {
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array<T>& obj)
: _size(obj.size()) {
	_array = NULL;
	*this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj) {
	if (this != &obj) {
		if (_array) {
			delete [] _array;
		}
		_size = obj.size();
		_array = new T[_size];
		for (std::size_t i = 0; i < _size; i++) {
			_array[i] = obj[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	if (_array)
		delete [] _array;
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template <typename T>
T&	Array<T>::operator[](unsigned int index) {
	if (index < 0 || index >= _size)
		throw std::exception();
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index < 0 || index >= _size)
		throw std::exception();
	return _array[index];
}

#endif  // ARRAY_TPP
