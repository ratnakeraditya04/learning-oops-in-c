#include <bits/stdc++.h>

using namespace std ; 

//Our all exaples were of Compile Time Polymerisation 
class A {
    public : 
        int a ;
// Example of Function Overloading 
        void sayHello()
        {
            cout << "Hello " << endl ;
        }
        void sayHello(string name)
        {
            cout << "Hello" << " " << name <<  endl ;
        }

// Example of Operator Overloading 
// Here, example of '+' is taken 

    void operator+(A &obj)
    {
        int value1 = this->a ; 
        int value2 = obj.a ; 
        cout << value2 - value1 << endl ;
    }

    void operator() () {
        cout << "I am the Bracket you know. See the value from here - " << this->a << endl ; 
    }
};


int main() 
{
    A obj ; 
    obj.sayHello() ;
    obj.sayHello("aditya") ;


    A obj1 ; 


    obj.a = 5 ; 
    obj1.a = 7 ; 

    obj1 + obj ;
    obj1() ;

    return 0 ; 
}