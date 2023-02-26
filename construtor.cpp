#include <bits/stdc++.h>

using namespace std ; 

class Zoo{
    int animal ; 
    char type ; 
    string food ; 


public:
    Zoo(int animal , char type , string food)
    {
        this->animal = animal ;
        this->type = type ;
        this->food = "VEG" ;
    }

}; 


int main() 
{
    Zoo elephant(1 , 'a' , "VEG"); 

    Zoo bird(elephant); 
}