//
//  main.cpp
//  Hr3, a sample student class implmentation
//
//  Created by Paul on 2024-06-27.
//

#include <iostream>
#include <string>
using namespace std;

// public variables and functions

class Students
{
public:
    // class constructor
    Students(int age, string Sex, string school){
        priAge = age;
    }
    
    //~Students();
    
    int Age;
    string Sex, School;
    
    void SetAge(int newAge);
    int GetAge();
    void SetSchool(string newSchool);
    string GetSchool();



private:
    int priAge;
    string priSex, priSchool;

};


// define the class constructor
//Students::Students(int age, string sex, string school);
//{
    // initialize some variables...
//    priAge = 25;
//}

// define the destructor
//Students::~Students()
//{
    //Even do nothing but needed
//}



// default
void Students::SetAge(int newAge)
{
    priAge = newAge;
}

// default
void Students::SetSchool(string newSchool)
{
    priSchool = newSchool;
}


int Students::GetAge(){
    return priAge;
}


string Students::GetSchool(){
    return priSchool;
}



int main() {
    // insert code here...
    Students StudentA(18,"F","UCLA");
    
    //StudentA.Age = 22;
    //StudentA.priAge = 23;

    
    //StudentA.SetAge(19);
    
    cout << "Student Age is : " ;
    cout <<  StudentA.GetAge() << "\n";
    cout <<  StudentA.Age << "\n";

    int k = 10;
    int *prt = &k;
    *prt = 20;
    int* aa;
    
    StudentA.SetSchool("UCLA");
    
    string prtSchool = StudentA.GetSchool();
    std::cout << "Student school is : " ;
    cout <<  prtSchool << "\n" << *prt  <<"n" <<aa <<"\n";
    
    
    return 0;
}
