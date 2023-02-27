// 1.Write a program by creating an 'Employee' class having the following functions and print the final salary.
// 1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
// 2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
// 3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.

#include <bits/stdc++.h>
using namespace std ; 



class Employee {
    int salary ;
    int noOfHrs ; 

    public : 
        void getInfo(int _salary , int _noOfHrs)
        {
            this -> salary = _salary ;
            this -> noOfHrs = _noOfHrs ; 
        }

        int AddSal()
        {
            if(this -> salary < 500)
            {
                this -> salary += 10 ; 
            }
            return this -> salary ; 
        }

        int AddWork()
        {
            if(this -> noOfHrs > 6)
            {
                this -> salary += 5 ; 
            }
            return this -> salary ;
        }
}; 



int main()
{
    Employee e1 ; 
    e1.getInfo(467 , 5); 

    cout << e1.AddSal() << " " << e1.AddWork()  << endl ;
}