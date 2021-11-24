#include <iostream>
using namespace std;

class first{
private:
    int num1, num2;
public:
    first(int n1= 0 ,int n2= 0) : num1(n1), num2(n2){}
    void show(){
        cout << num1 << " " << num2 << endl;
    }
    first& operator=(const first& ref){
        cout << "first 상속" << endl;
        num1 = ref.num1;
        num2 = ref.num2;
        return *this;
    }
};

class second : public first{
private:
    int num3, num4;
public:
    second(int n1, int n2, int n3= 0 ,int n4= 0) : first(n1,n2), num3(n3), num4(n4){}
    void show(){
        cout << num3 << " " << num4 << endl;
    }
    second& operator=(const second& ref){
        cout << "second 상속" << endl;
        num3 = ref.num3;
        num4 = ref.num4;
        return *this;
    }
};

int main(){
    second aa(11,22,33,44);
    second bb(0,0,0,0);
    bb = aa;
    bb.show();
}