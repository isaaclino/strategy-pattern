#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__


using namespace std;

class Base {
    protected:
        Base* left;
        Base* right;
        Base* val;
      
    public:
        double value; 
        /* Constructors */
        Base() {}

        
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class Op: public Base {
    public:
        double value;
        
        Op(double v) {
            value = v;
        }
        
        double evaluate() {
            return value;
        }
        
};

class Mult: public Base {
    public:
        Mult(Base* l, Base* r) {
            left = l;
            right = r;
        }
        
        double evaluate() {
            //return (*left).evaluate() * (*right).evaluate();
            value = (*left).evaluate() * (*right).evaluate(); 
            return value; 
        }
};

class Sub: public Base {
    public:
        Sub(Base* l, Base* r) {
            left = l;
            right = r;
        }
        
        double evaluate() {
            //return (*right).evaluate() - (*left).evaluate(); 
            // value = (*right).evaluate() - (*left).evaluate(); 
            value = (*left).evaluate() - (*right).evaluate(); 
            return value; 
        }
};

class Add: public Base {
    public:
        Add(Base* l, Base* r) {
            left = l;
            right = r;
        }
        
        double evaluate() {
            //return (*left).evaluate() + (*right).evaluate();
            value = (*left).evaluate() + (*right).evaluate();
            return value; 
        }
};


class Sqr: public Base {
    public:
        Sqr(Base* l) {
            val = l;
        }
            double evaluate() {
                //return (*val).evaluate() * (*val).evaluate();
                value = (*val).evaluate() * (*val).evaluate(); 
                return value; 
        }
};
#endif // __COMPOSITE_H__