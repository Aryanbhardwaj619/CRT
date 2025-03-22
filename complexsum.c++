#include <iostream>
#include <stdlib.h>
#include <complex>

using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
   void set_data(int r, int i) {
        real = r;
        imag = i;
    }
    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void multiply(Complex c1, Complex c2) {
        real = c1.real * c2.real - c1.imag * c2.imag;
        imag = c1.real * c2.imag + c1.imag * c2.real;
    }
    void display() {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
        cout << real << " + " << imag << "i" << endl;
        
    }
};

int main() {
    system("cls");
    Complex c1,c2;
    c1.set_data(3, 4);
    c1.display();
    c2.set_data(5, -10);
    c2.display();
    Complex c3;
    c3.add(c1, c2);
    c3.display();
    Complex c4;
    c4.multiply(c1, c2);
    c4.display();
    return 0;
}
