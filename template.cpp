#include <iostream>
#include <cstring>
using namespace std;

template<typename T, typename T2>
T Add(T num1, T2 num2) { 
    return num1 + num2; 
}

int main(){
    cout << Add(1,2)<< '\n';
    cout << Add(1.4,25)<< '\n';
}