#include <iostream>

#include <iomanip>

main()
{
    using namespace std;

    float number1{1.12345678901234567890f};       // precision : 7
    double number2{1.12345678901234567890};       // precision : 16
    long double number3{1.12345678901234567890L}; // precision : 20+

    cout << "sizeof float : " << sizeof(float) << endl;
    cout << "sizeof double : " << sizeof(double) << endl;
    cout << "sizeof long double : " << sizeof(long double) << endl;

    cout << setprecision(20);
    cout << "number1 is : " << number1 << endl;
    cout << "number2 is : " << number2 << endl;
    cout << "number3 is : " << number3 << endl;

    // float problems : The precision is usually too limited
    // for a lot of applications
    double number4{192400023.0f}; // Error : narrowing conversion // remember even when you type double or long double at start and you don't change the 'f' in the end of the number it is going to still be a float (f) (btw it dosen't chage if you use the '=' symbol and () or anything like that )

    cout << "number4 : " << number4 << endl;

    // correct way :
    double number5{192400023.0};

    cout << "number5 : " << number5 << endl;

    return 0;
}