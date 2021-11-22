#include <iostream>
#include <cstring>

using namespace std;

class first{
private:
    int num, num2;
public:
    first(int n1 = 0 , int n2 = 0) : num(n1), num2(n2) {

    }
    void ShowData()const{
        cout << num << ' ' << num2 << endl;
    }
};

class second{
private:
    int num3, num4;
public:
    second(int n3 = 0 , int n4 = 0) : num3(n3), num4(n4) {

    }
    void ShowData()const{
        cout << num3 << ' ' << num4 << endl;
    }
    second& operator=(const second& ref){ // defalt 대입 연산
        cout << "second!" << endl;
        num3 = ref.num3;
        num4 = ref.num4;
        return*this;
    }
};


int main() { // 얕은 복사 => 오류 발생
    first a(111,222);
    first b(111,222);
    b = a;
    second c(333,444);
    second d;
    d = c;


}