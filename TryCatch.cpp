#include <iostream>
using namespace std;

/* try{

  코드 에러  

}         */

/* throw{}

catch(에러 코드를 보고) {
 대응
}                     */


int main(){
    int num1 , num2;
    cout << "숫자 입력";
    cin >> num1 >> num2;

    /* if (num2 == 0){  기존 if 문
        cout << "Error" << endl;
    }else{}                      */

    try{ // 에러 발생 지역
        if (num2 == 0){
            throw num2;
        }
    }catch(int err){ // 에러 대응
        cout << "Error" << endl;
    }
    cout << "나눗셈" << num1 / num2 << endl;
    cout << "나머지" << num1 % num2 << endl;


}