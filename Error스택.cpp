#include <iostream>

using namespace std;

void One();
void Two();
void Three();

int main(){
    try {
        One();
    }
    catch(int expn){
        cout << "Error" << endl;
    }
    // try 없을시 return 끝나며 종료  terminate
}



void One(){
    cout << "One" << endl;
    Two();
}
void Two(){
    cout << "Two" << endl;
    Three();
}
void Three(){
    cout << "Three" << endl;
    throw -1;
}