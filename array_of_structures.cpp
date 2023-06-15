#include <iostream>
#include <string>

using namespace std;

struct Person {

   string name;
   int age;
   double height;
};
Person people[3];

int main() {
   for (int i = 0; i < 3; i++) {
      cout << "Enter name, age, and height for person " << i+1 << ": ";
      cin >> people[i].name >> people[i].age >> people[i].height;

   }

   for (int i = 0; i < 3; i++) {

      cout << endl;
      cout << "Person " << i+1 << ":" << endl;
      cout << "Name: " << people[i].name << endl;
      cout << "Age: " << people[i].age << endl;
      cout << "Height: " << people[i].height << endl;

   }

   return 0;
}