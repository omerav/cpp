#include <iostream>



main() {
    using namespace std;


   bool red_light{true};
   bool green_light{false};

   if(red_light == true){
    cout << "Stop!" << endl;
   } else{
    cout << "Go through!" << endl;
   }

    // you don't need to write green_light == true all the time you can use this insted
   if (green_light){
       cout << "The light is green!" << endl;
   }
   else
   {
       cout << "The light is not green!" << endl;
   }

    // sizeof
    cout << "sizeof(bool) : " << sizeof(bool) << endl;

    
    // Printing out a bool
    // 1 --> true
    // 0 --> false
    cout << endl;
    cout << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;

    cout << boolalpha;
    cout << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;

    
    return 0;
}