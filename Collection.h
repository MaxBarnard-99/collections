#ifndef COLLECTION_
#define COLLECTION_ 

#include <iostream>

class Collection
{
private:
	double* dubs_{ nullptr };
	int capacity_;
	int size_;
	
public:
	//constructors
	Collection();
	Collection(int capacity);
	~Collection() { delete &dubs_; }
	//getters
	int getSize();

	int getCapacity() {return capacity_; };

	//setters 
	void setCapacity(int capacity) { capacity_ = capacity; };

	//other methods
	void add(double value);
	void addFront(double value); //throws error
	double get(int ndx);
	double getFront();
	double getEnd();
	int find(double needle); //return -1 if not found 
	friend std::ostream& operator<<
		(std::ostream& out, const Collection& c)
	{
		double element;
		int size = c.size_;

		for (int i = 0; i < size; i++)
		{
			element = c.dubs_[i];
			out << element << " ";
		}
		return out;
	}



};

#endif /* !COLLECTION_ */ 