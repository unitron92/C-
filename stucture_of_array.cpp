#include<iostream>
using namespace std;

struct emp
{
   int id ;
   string name;
   long int houseno;
   string area;
   string city;
   string state;
};

int main()
{   
    int size = 0;
   emp e[size];

   int i, temp=0;
   long int x;
    cout<<"----Enter the data how many there are  no."<<size<<"----\n";
    cin>>size;
   for(i=0; i<size; i++)
   {
      cout<<"----Enter the data for the employee no."<<i+1<<"----\n";
      cout<<"Enter the ID: ";
      cin>>e[i].id;
      cout<<"Enter the Name: ";
      cin>>e[i].name;
      cout<<"Enter the House No.: ";
      cin>>e[i].houseno;
      cout<<"Enter the Area: ";
      cin>>e[i].area;
      cout<<"Enter the City: ";
      cin>>e[i].city;
      cout<<"Enter the State: ";
      cin>>e[i].state;
   }

   cout<<"\nEnter the employee ID to display the details: ";
   cin>>x;
   for(i=0; i<size; i++)
   {
      if(x == e[i].id)
      {
         cout<<"\nName: "<<e[i].name;
         cout<<"\nAddress: "<<e[i].houseno<<", "<<e[i].area<<", "<<e[i].city<<", "<<e[i].state;
         temp = 1;
         break;
      }
   }

   if(temp == 0)
      cout<<"\nThe employee identified by the given ID does not exist.";

   cout<<endl;
   return 0;
}