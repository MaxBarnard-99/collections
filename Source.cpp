#include <iostream>
#include<sstream>
#include "Collection.h"
using namespace std;

int main() {
	Collection ctest;
	ctest.add(1);
	ctest.addFront(2);
	ctest.getCapacity();
	std::cout << ctest << std::endl;
	
	Collection cInit(1);
	cInit.add(1);
	cInit.add(2);

	return 1;

}

int main();
