#include "Mutantstack.hpp"

template <typename T>
typename Mutantstack<T>::iterator	Mutantstack<T>::begin() {
	return this->c.begin();
}	

template <typename T>
typename Mutantstack<T>::iterator	Mutantstack<T>::end() {
	return this->c.end();
}
