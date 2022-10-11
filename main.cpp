#include <iostream>
#include <string>

// this is some functions i created and wanted to have just in case i im gonna need it.

int addNumbers(int first_param, int second_param)
{
  int result = first_param + second_param;
  return result;
}

int subtractNumbers(int first_param, int second_param)
{
  int result = first_param - second_param;
  return result;
}

int multiplyNumbers(int first_param, int second_param)
{
  int result = first_param * second_param;
  return result;
}

int divideNumbers(int first_param, int second_param)
{
  int result = first_param / second_param;
  return result;
}

int squareNumbers(int first_param)
{
  int result = first_param * first_param;
  return result;
}

int main()
{

  using namespace std; // if used there will be no need to the "std::" first at the line

  string full_name;
  int age;

  cout << "Please type your full name " << endl;
  getline(cin, full_name);

  cout << "Please type your age " << endl;
  cin >> age;

  cout << "Hello " << full_name << " you are " << age << " years old" << endl;

  // this section down here is just a training i use to use the funcations i created to train :D
  cout << "This is your age plus your age : " << addNumbers(age, age) << endl;
  cout << "This is your age minus your age : " << subtractNumbers(age, age) << endl;
  cout << "This is your age multiply by your age : " << multiplyNumbers(age, age) << endl;
  cout << "This is your age devided by your age : " << subtractNumbers(age, age) << endl;
  cout << "This is your age squared : " << squareNumbers(age) << endl;

  return 1;
}
