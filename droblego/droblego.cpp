#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(0) {}

    Fraction(int num, int denom) : numerator(num), denominator(denom != 0 ? denom : 1) {}

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction frac1;
    cout << "Default lego: ";
    frac1.display();
    Fraction frac2(3, 4);
    cout << "Parameterized lego: ";
    frac2.display();

    return 0;
}
