#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <iostream>
using namespace std;

class ListContainer : public Container {
    protected:
        Sort* sort_function;
        list<Base*>; 
        
    public:
	   /* Constructors */
        Container() : sort_function(NULL){};
        Container(Sort* function) : sort_function(function) {};
	
        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function); // set the type of sorting algorithm

	  // push the top pointer of the tree into container
        void add_element(Base* element) = 0; 
        // iterate through trees and output values
        void print() = 0; 
        // calls on the previously set sorting-algorithm. Checks if                   sort_function is not null, throw exception if otherwise
        void sort() = 0; 

        /* Essentially the only functions needed to sort */
        //switch tree locations
        void swap(int i, int j) = 0; 
        // get top ptr of tree at index i
        Base* at(int i) = 0; 
        // return container size
        int size() = 0; 
};

#endif