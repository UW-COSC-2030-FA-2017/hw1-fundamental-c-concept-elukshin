// Collection.h
// Emily Lukshin
// September 21 2017

#ifndef COLLECTION_H
#define COLLECTION_H


#include <iostream>
#include<cstdlib>
#include<ctime>


template <class T> class Collection
{
public:
	Collection();

	~Collection();

	Collection(int x);

	void set(T array[]);

	void print();
	
	bool isEmpty();

	void makeEmpty();

	void insert(T x);

	void remove(T x);

	void removeRandom();

	bool notContained(T x);

private:
	int size;

	T *collection;


};

//Constructor
template <class T> Collection<T>::Collection()
{
	
}
 //Constructor given a size
template <class T> Collection<T>::Collection(int x)
{
	size = x;
	collection = new T[size];
}

//Destructor
template <class T> Collection<T>::~Collection()
{
	delete collection;
}

//Takes an array and copies it to the collection array
template <class T> void Collection<T>::set(T array[])
{
	for (int i = 0; i < size; i++) {
		collection[i] = array[i];
	}
}

//Prints the values in the array
template <class T> void Collection<T>::print()
{
	cout << "{ ";
	for (int i = 0; i < size; i++) {
		cout << collection[i] << ", ";
	}
	cout << "}" << endl;
}

//Tests if the array is empty
template <class T> bool Collection<T>::isEmpty()
{
	bool test = true;
	for (int i = 0; i < size; i++) {
		if (collection[i] != NULL) {
			test = false;
			return test;
		}
	}

	return test;
}

//Makes the array empty
template <class T> void Collection<T>::makeEmpty()
{
	for (int i = 0; i < size; i++) {
		collection[i] = NULL;
	}
	size = 0;
}

//Inserts a given value into the array
template <class T> void Collection<T>::insert(T x)
{
	T* temp = new T[size + 1];

	for (int i = 0; i < size; i++) {
		temp[i] = collection[i];
	}

	temp[size] = x;
	delete collection;
	size++;
	set(temp);
}

//Removes a given value from the array
template <class T> void Collection<T>::remove(T x)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (collection[i] == x) {
			for (int a = i; a < (size - 1); a++) {
				collection[a] = collection[a + 1];
			}
		}
		count++;
	}
	size--;
}

//Removes a random value from the array
template <class T> void Collection<T>::removeRandom()
{
	int r = rand() % size;
	for (int i = 0; i < size; i++) {
		if (i == r) {
			for (int a = 0; a < size; a++) {
				collection[a] = collection[a + 1];
			}
		}
	}
	size--;
}

//Tests if the collection contains a given value
template <class T> bool Collection<T>::notContained(T x)
{
	for (int i = 0; i < size; i++) {
		if (x == collection[i]) {
			return false;
		}
	}
	return true;
}

#endif