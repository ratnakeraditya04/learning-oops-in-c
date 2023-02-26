#include <bits/stdc++.h>
using namespace std ; 


class Hero 
{
    // properties 

    int name ;
    // string type ; 
    int health ; 
    bool check ; 


public: 
    void setHealth(int h)
    {
        health = h ; 
    }

    int getHealth(int h ) 
    {
        return health ;
    }
}; 

int main() 
{
    Hero h1 ;
    cout << sizeof(h1) << endl ;

    h1.setHealth(70) ;
    return 0 ; 
}