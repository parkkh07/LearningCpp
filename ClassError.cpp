#include <iostream>
using namespace std;

class Deposit{
private:
    int reqDep;
public:
    Deposit(int money) : reqDep(money) {}

    void Show(){
        cout << "입금 된" << reqDep << "는 잘못된 입금액 입니다." << endl;
    }
};


int main(){

}