#include <iostream>
using namespace std;

class Person{
    int a;
public:
    void Sleep(){
        cout << "sleep " <<endl;
    }

};

class Student: public Person{

public:
    void Study(){
        cout << "study " << endl;
    }
};

class pStudent:public Student{
public:
    void Work(){
        cout << "Work" << endl;
    }
};

int main(){
    Person* ptr1 = new Student();
    Person* ptr2 = new pStudent();
    Student* ptr3 = new pStudent();
}