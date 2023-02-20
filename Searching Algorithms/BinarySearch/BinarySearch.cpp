// Binary Search ALgorith Working :
// 1. Search a sort array by repeatedly dividing the search interval in half.
// 2. Obtain with an Interval covering the whole array.
// 3. If the value of the search key is less than the item in the middle of the interval, narrow the interval into lower half.
// 4. Otherwise Narrow it to the uppar half.
// 5. R$apidly check until tyhe value is fond or the interval is empty. 



#include<iostream>
using namespace std;


int binarySearch(int arr[], int left, int right,int x)
{
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int num;
    int arr[10];
    cout<<"Enter Elements in Assending order: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        cout<<"Enter Element "<<i<<":";
        int c;
        cin>>c;
        arr[i] = c;
        
    }
    cout<<"ENTER No. to Search :";
    cin>>num;
    int output = binarySearch(arr,0,9,num);
        if(output==-1)
        {
            cout<<"No match Found"<<endl;
        }
        else
        {
            cout<<"Match found at index position :"<<output<<endl;
        }
    return 0;
}