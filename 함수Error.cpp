#include <iostream>
using namespace std;


void Devide(int num1, int num2){
    if (num2 == 0){
        throw num2;
    }
    cout << "나눗셈" << num1 / num2 << endl;
    cout << "나머지" << num1 % num2 << endl;
}



int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    try{
        Devide(num1, num2);
    }catch(int expn){
        cout << "Error" << endl;
    }       

}


