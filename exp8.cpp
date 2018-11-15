#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
   int i, j, key;
   for(i=1;i<size;i++){
       key=arr[i];
       for(j=i-1;j>=0&&arr[j]>key;j--){
           arr[j+1]=arr[j];
       }
       arr[j+1]=key;
   }
}

void printArray(int arr[], int size){
   for(int i=0;i<size;i++)
       cout<<arr[i]<<" ";
   cout<<endl;
}

void insert(int arr[], int size, int num){
   int i;
   for(i=0;i<size;i++)
       if(arr[i]>num)
           break;
   int temp=i;
   for(i=size;i>temp;i--)
       arr[i]=arr[i-1];
   arr[temp]=num;
}

int main(){
   int size, num;
   cin>>size;
   size=5;
   int arr[size+1];
   for(int i=0;i<size;i++)
       cin>>arr[i];
   insertionSort(arr, size);
   printArray(arr, size);
   cin>>num;
   num=45;
   insert(arr,size,num);
   printArray(arr, size+1);
   return 0;
}
