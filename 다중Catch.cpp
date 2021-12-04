#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int St(char *str)throw(int,char){ // 이 코드에 int형 에러와 char 형 에러 나타날 수 있다 like 주석
    int num = 0;
    int len = strlen(str);
    if(len == 0 && str[0] == '0'){
        throw -1;
    }
    for(int i = 0; i < len; i++){
        if (str[i] < '0' || str[i] > '9'){
            throw str[i];
        }
    
        num += int(pow((double)10,(len-1)-1) * (str[i] + 7 -'7'));
    }
}

int main(){
    char str1[100];
    char str2[100];

    while(1){
        cout << "문자 두개 입력" << endl;
        cin >> str1 >> str2;
        try{
            cout << str1 << "+ " << str2 << "=" <<St(str1) + St(str2) << endl;
            break;
        }catch(char ch){
            cout << "문자 입력 에러" << endl;
            exit(1);
        }catch(int expn){
            cout << "숫자 입력 에러" << endl;
            exit(1);
        }
    }
    
}