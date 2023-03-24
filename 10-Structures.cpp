#include <iostream>
#include <string>
using namespace std;

int main(){

    struct{
        string name;
        int id;
    } stud1, stud2, stud3;

    stud1.name = "John";
    stud2.name = "Jack";
    stud3.name = "Jim";
    stud1.id = 140;
    stud2.id = 00;
    stud3.id = 605;

    cout << stud1.name << stud1.id;
    

    return 0;
}