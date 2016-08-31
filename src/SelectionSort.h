#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "Container.h"
#include "Sort.h"

class SelectionSort : public Sort {
	public:
           /* Constructors */
		SelectionSort(): Sort() {}
 
           /* Pure Virtual Functions */
	    void sort(Container* container) {
		//how do you access a vector within your container???
	    
	       
	      //int temp;
	      //int min;
	      //int index;
			
		  Base* head = container.at(0)
	    //   for (curr = head; curr < container.size(); ++i) {
	    //   //      min = (*i).evaluate();
	    //   //      index = i;
	    //   //      for (int j = i + 1; j < vectorSize; ++j) {
	    //   //          if (min >  {
	    //   //              min = (*j).evaluate()
	    //   //              index = j;
	    //   //          }
	    //   //      }
	    //   //      temp = lol.at(i);
	    //   //      lol.at(i) = lol.at(index);
	    //   //      lol.at(index) = temp;
	    //   //}
	    // }
	    
};
#endif