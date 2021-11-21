#include <iostream>

using namespace std;

class MyFriend{
private:
    char* name;
    int age;
public:
    MyFriend(const char* myname, int myage) : age(myage){
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }
    void ShowMyFriendInfo() const{
        cout << name <<endl;
        cout << age << endl;
    }

    ~MyFriend() {
        delete[]name;
    }

};

class MyFriendDetailInfo : public MyFriend {
private:
    char* addr;
    char* phone;
public:
    MyFriendDetailInfo(const char* myname , int myage, const char* myaddr, const char* myphone): MyFriend(myname, myage){
        addr = new char[strlen(myaddr) + 1];
        phone = new char[strlen(myphone) + 1];
        strcpy(addr, myaddr);
        strcpy(phone, myphone);
    }
    void Show()const{
        ShowMyFriendInfo();
        cout << addr << endl;
        cout << phone << endl;
    }
    ~MyFriendDetailInfo(){
        delete[]addr;
        delete[]phone;
    }

};

int main(){
    MyFriendDetailInfo MFI("Park",15,"1380ABC", "01038132012");
    MFI.Show();
}