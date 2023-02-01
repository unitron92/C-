#include <iostream>
using namespace std;

int main() {
  char char_var = 'a';
  int int_var;

  // Explicitly converting a character variable to an integer variable.
  int_var = int (char_var); // Using cast notation.

  cout << "The value of char_var is: " << char_var << endl;
  cout << "The value of int_var is: " << int_var << endl;

  return 0;
}