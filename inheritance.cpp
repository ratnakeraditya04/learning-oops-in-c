#include <bits/stdc++.h>
using namespace std ; 

class Human 
{
    public:
        int age ; 
        int weight ;
    public:
        void setAge(int age)
        {
            this->age = age ; 
        }
        int getWeight()
        {
            return this-> weight ;
        }
};



class Male: public Human {
    public :
    string color ; 

    void sleep()
    {
        cout << "This men is sleeping." << endl ;
    }
} ;


int main()
{
    
    return 0 ; 
}