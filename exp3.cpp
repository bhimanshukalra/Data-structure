////
////  exp3 arrayBubbleSortBinarySearch.cpp
////  linnkedList
////
////  Created by Bhimanshu Kalra on 10/11/18.
////  Copyright © 2018 Bhimanshu Kalra. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//void swap(int *a, int *b)
//{
//    int temp=*a;
//    *a=*b;
//    *b=temp;
//}
//
//void bubbleSort(int *arr, int size)
//{
//    for(int i=0;i<size-1;i++)
//    {
//        bool swapped=false;
//        for(int j=0;j<size-i-1;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                swap(&arr[j],&arr[j+1]);
//                swapped=true;
//            }
//        }
//        if(swapped==false)
//            break;
//    }
//}
//
//int binarySearch(int arr[], int l, int r, int x)
//{
//    if(l<=r)
//    {
//        int mid=l+(r-l)/2;
//        if(arr[mid]==x)
//            return mid;
//        else if(x<arr[mid])
//            return binarySearch(arr, l, mid-1, x);
//        return binarySearch(arr, mid+1, r, x);
//    }
//    return -1;
//}
//
//void printArray(int arr[], int size)
//{
//    for(int i=0;i<size;i++)
//        cout<<arr[i]<<" ";
//}
//
//int main()
//{
//    int size, num;
//    size=5;
////    cout<<"Enter size of array: ";
////    cin>>size;
//    int arr[size];
////    cout<<"Enter elements of array: ";
////    for(int i=0;i<size;i++)
////        cin>>arr[i];
//    arr[0]=1212;
//    arr[1]=66;
//    arr[2]=4;
//    arr[3]=34;
//    arr[4]=6;
//    bubbleSort(arr, size);
//    printArray(arr, size);cout<<endl;
//    num=1111;
//    int result=binarySearch(arr, 0, size, num);
//    result!=-1?cout<<num<<" is at index "<<result<<".\n":cout<<num<<" is not present in the array.\n";
//
//}
