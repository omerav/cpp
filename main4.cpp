#include <iostream>


main() {
    using namespace std;


    double number10{-5.6};
    double number11{};
    double number12{};

    // infinity     if you devide posative numebr with zero you will get infinity and if you divide with a negative number you will get negative infinity.
    double result {number10 / number11};


    cout << number10 << "/" << number11 << " yields : " << result << endl;
    cout << result << " + " << number10 << " yields : " << result + number10 << endl;

    // NaN
    result = number11 / number12;



    cout << number11 << "/" << number12 << " = " << result << endl;



    return 0;
}