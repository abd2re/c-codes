#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int id;
};

int main(){

    student stud1;  
    stud1.name = "John";
    stud1.id = 140;
    
    student stud2; 
    stud2.name = "Jack";
    stud2.id = 00;

    student stud3; 
    stud3.name = "Jim";
    stud3.id = 605;
    
    cout << stud1.name << stud1.id;
    
    return 0;
}