// Driver.cpp
// Emily Lukshin
// September 21 2017

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Collection.h"

int main()
{
	int array[5] = { 1,2,3,4,5 };
	Collection<int> collection(5);
	collection.set(array);
	collection.print();
	
	collection.insert(6); //tests the insert function
	collection.print();

	if (collection.notContained(6)) {
		cout << "Insert Failed" << endl << endl; //Tests the notContained function and makes sure that value was inserted
	}
	else
	{
		cout << "6 inserted" << endl << endl;
	}

	collection.remove(6); //Tests the remove function
	collection.print();
	if (collection.notContained(6)) {
		cout << "6 removed" << endl << endl; //Tests to make sure that value was removed
	}
	
	collection.print();
	
	collection.removeRandom(); //Tests the removeRandom function
	collection.print();

	//Following if statements find which value was removed
	if (collection.notContained(1)){
		cout << "1 was removed randomly" << endl << endl;
	}

	if (collection.notContained(2)){
		cout << "2 was removed randomly" << endl << endl;
	}

	if (collection.notContained(3)){
		cout << "3 was removed randomly" << endl << endl;
	}
	if (collection.notContained(4)) {
		cout << "4 was removed randomly" << endl << endl;
	}
	if (collection.notContained(5)) {
		cout << "5 was removed randomly" << endl << endl;
	}
	
	collection.makeEmpty(); //Tests the makeEmpty function

	if (collection.isEmpty()) { //Tests to see if the array is empty, following the makeEmpty function
		cout << "The array is empty: All objects were removed" << endl << endl;
	}
	else {
		cout << "The array is not empty: All objects were not removed" << endl << endl;
	}
	
	return 0;
}