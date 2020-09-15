#include "Collection.h"
#include <iostream>
#include <list>

//constructors
Collection::Collection() { setCapacity(15), dubs_[15], size_ = getSize(); }
Collection::Collection(int capacity)
	: dubs_(new double[capacity] {}), capacity_(capacity)
{}
//getters 
int Collection::getSize()
{	
	int size = sizeof(dubs_) / sizeof(double);
	size_ = size;
	return size;
}


//other methods 
void Collection::add(double value)
{
	int size = getSize();
	try {
		if (size < capacity_) {
			dubs_[size + 1] = value;
		}
	}
	catch (const std::exception& ex) {
		throw std::runtime_error("List Full");
	}
	getSize();
};
void Collection::addFront(double value) {
	int size = getSize();
	try {
		if (size < capacity_) {
			for (int i = size; i > 0; --i) {
				dubs_[i] = dubs_[i - 1];
			}
			dubs_[0] = value;
		}
	}
	catch (const std::exception& ex) {
		throw std::runtime_error("List Full");
	}
	getSize();
} //throws error
double Collection::get(int ndx) {
	int size = getSize();
	try {
		if (size >= ndx) {
			return dubs_[ndx];
		}
	}
	catch (const std::exception& ex) {
		throw std::out_of_range("List Full");
	} return -1;
}
double Collection::getFront() {
	double targetValue = dubs_[0];
	return targetValue;
}
double Collection::getEnd() {
	double targetValue = dubs_[-1];
	return targetValue;
}
int Collection::find(double needle) {
	int size = getSize();
	for (int i = 0; i <= size; i++) {
		if (dubs_[i] == needle) {
			return i;
		}
	}return -1;
} //return -1 if not found 



