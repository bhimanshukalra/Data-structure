#include <iostream>
using namespace std;

int main()
{
   int size, num;
   cout<<"Enter size: ";
   cin>>size;
   int arr[size];
   cout<<"Enter elements of array: ";
   for(int i=0;i<size;i++)
       cin>>arr[i];
   cout<<"Enter number to search: ";
   cin>>num;
   for(int i=0;i<size;i++)
   {
       if(arr[i]==num)
       {
           cout<<num<<" is present at index "<<i<<".\n";
           return 0;
       }
   }
   cout<<num<<" is not present in the array.\n";
   return 0;
}
