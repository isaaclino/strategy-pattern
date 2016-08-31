#include <iostream>
#include "Composite.h"
#include "Container.h"
#include "VectorContainer.h"
// #include "ListContainer.h"
// #include "Sort.h"
// #include "BubbleSort.h"
//#include "SelectionSort.h"

using namespace std;

int main() {
    // Testing the composite pattern
    Op* op1 = new Op(7);
    Op* op2 = new Op(4);
    Op* op3 = new Op(3);
    Op* op4 = new Op(2);
    //cout << "op4: " <<  op4->evaluate() << endl;
    Mult* A = new Mult(op1, op2);
    //cout << "A: "<< A->evaluate() << endl; 
    Add* B = new Add(op3, op4);
    //cout << "B: " << B->evaluate() << endl; 
    Sub* C = new Sub(A, B);
    //cout << "C: " << C->evaluate() << endl; 
    Sqr* D = new Sqr(C);
     cout << "final result: " << D->evaluate() << endl;
     
    // // Testing the strategy pattern
    VectorContainer* container = new VectorContainer();
    container->add_element(A);
    //cout << "A: " << A->evaluate() << endl; 
    container->add_element(B);
    //cout << "B: " << B->evaluate() << endl; 
    container->add_element(C);
    //cout << "C: " << C->evaluate() << endl; 
    container->add_element(D);
    //cout << "D: " << D->evaluate() << endl; 

    cout << "Container Before Sort: " << endl;
    container->print();
    
    cout << "Testing swap: " << endl; 
    container->swap(0, 10); 
    container->print(); 
    // cout << "Container After Sort: " << endl;
    // container->set_sort_function(new SelectionSort());
    //container->set_sort_function(new BubbleSort());
    // container->sort();
    //container->print();
};
