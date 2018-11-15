#include <iostream>
using namespace std;
#define MAX 10

int arr[MAX], size;

void insert(){
   int data, pos;
   cout<<"Enter index and data for insertion: ";
   cin>>pos>>data;
   if(pos>size)
       size=pos;
   arr[pos]=data;
}

void deleteElement(){
   int option;
   cout<<"Delete according to:\n1. Value\n2. Position";
   cin>>option;
   if(option==1)
   {
       int i, value;
       cin>>value;
       for(i=0;i<size;i++)
       {
           if(arr[i]==value)
               break;
       }
       if(i==size+1)
           cout<<"Not found";
       else{
           for(;i<size-1;i++)
           {
               arr[i]=arr[i+1];
           }
           size--;
       }
   }else{
       int pos;
       cin>>pos;
       for(int i=pos;i<size;i++)
       {
           arr[i]=arr[i+1];
       }
       size--;
   }
}

void search(){
   int value;
   cout<<"Enter value to search: ";
   cin>>value;
   for(int i=0;i<=size;i++){
       if(arr[i]==value){
           cout<<value<<" is found at index "<<i<<".\n";
           return;
       }
   }
   cout<<value<<" doesn't exist in the array.\n";
}

void printArray(){
   cout<<"Array elements: ";
   for(int i=0;i<=size;i++)
       cout<<arr[i]<<" ";
   cout<<endl;
}

int main()
{
   arr[0]=0;arr[1]=1;arr[2]=2;arr[3]=3;arr[4]=4;
   size=4;
   int option;
   while(true){
       cout<<"MENU\n1. Insert\n2. Delete element\n3. Search\n4. print array\nChoose one to continue:";
       cin>>option;
       switch(option){
           case 0:
               return 0;
           case 1:
               insert();
               break;
           case 2:
               deleteElement();
               break;
           case 3:
               search();
               break;
           case 4:
               printArray();
               break;
       }
   }
   return 0;
}
