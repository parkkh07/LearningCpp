#include <iostream>
using namespace std;

class Person{
    char* name;
    int age;
public:
    Person(const char* myname, int myage){
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void show()const {
        cout << "Name: " << name<< ' ' << "Age: " << age << endl;
    }

    Person& operator=(const Person& ref){ // DeepCopy
        delete[] name;
        int len = strlen(ref.name) + 1;
        name = new char[len];
        age = ref.age;
        return *this;
    }

    void Show(){
        cout << name << " " << age << endl;
    }
    ~Person(){
        delete[] name;
        cout << "해제" << endl;
    }
};

int main(){
    Person man1("lee", 29);
    Person man2("kim", 49);
    
    man2 = man1;
    man1.show();
    man2.show();
    
}

