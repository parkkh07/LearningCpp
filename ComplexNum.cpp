#include <iostream>
using namespace std;

class Complex{
private:
    double re, im;

public:

    Complex(const double n1, const double z1) : re(n1), im(z1){}

    void show()const{
        cout << "Real : " << re << ", Imag : " << im << '\n'; 
    }


    Complex& operator+(const Complex& ref){
        re += ref.re ; im += ref.im;
        return *this;
    }
    Complex& operator-(const Complex& ref ){
        re -= ref.re ; im -= ref.im;
        return *this;
    }
    Complex& operator*(const Complex& ref ){
        re = re * ref.re - im * ref.im; im = re * ref.im + im * ref.im;
        return *this;
    }
    Complex& operator/(const Complex& ref){
        re /= ref.re ; im /= ref.im;
        return *this;
    }

};



int main(){
    Complex a(2.3, 3.4);
    a.show();
    Complex b(1.1, 2.2);
    b.show();

    Complex c= a+b; c.show();
    c = a-b; c.show();
    c = a*b; c.show();
    c = a/b; c.show();
    return 0;
}