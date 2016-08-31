#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__

#include "Container.h"

class BubbleSort : public Sort {
	public:
           /* Constructors */
		Sort();
 
           /* Pure Virtual Functions */
		void sort(Container* container) {
	        vector<Base*> lol = container;
	        
	            
	       int temp;
	       for (int i = 0; i < container->size; i++) {
	            for (int j = 0; j < container->size - 1; ++j) {
	                if (lol.at(j) > lol.at(j+1)) {
	                    temp = lol.at[j];
	                    lol.at[j] = lol.at(j+1);
	                    lol.at(j+1) = temp;
	                }
	            }    
	       }
	    }
};

#endif