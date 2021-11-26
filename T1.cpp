#include <iostream>
using namespace std;



class point{
private:
    int xpos, ypos;
public:
    point(int x= 0 , int y = 0) : xpos(x), ypos(y){}
    void show() const{
        cout << xpos << " " << ypos << endl;
    }

};

template<typename SW>

void Swap(SW &num1, SW &num2) {
    SW temp = num1;
    num1 = num2;
    num2 = temp;
}

void Swap(int num1, int &num2) {
    cout << "hi" << endl;
}

int main(){
    point pos1(3,4);
    point pos2(13,14);
    Swap(pos2,pos1);
    pos1.show();
    pos2.show();

}