#include <bits/stdc++.h>
using namespace std; 

class Animal {
    int cnt ;
    string typeFood ;  
    int fdcode ; 


    public :
// Getter and Setter functions. 
    int getfdcode()
    {
        return fdcode ; 
    }
    void setfdcode(int fdcode )
    {
        this->fdcode = fdcode ;
    }



    int getcnt()
    {
        return cnt ; 
    }
    void setcnt(int cnt)
    {
        this -> cnt = cnt; 
    }

    
    void settype(string type)
    {
        this->typeFood = type ; 
    }
    string gettype()
    {
        return typeFood ; 
    }
} ;




class A: public Animal { 
    public:
        int check = 0 ; 
        void setcheck() 
        {
            check = 1 ; 
        }
        int getCheck()
        {
            return check ; 
        }
        
};



int main()
{
    A abc ; 
    abc.setfdcode(2) ; 
    abc.settype("Veg"); 

    cout << abc.getfdcode()  << " " << abc.gettype() << endl ;
    return 0 ; 
}