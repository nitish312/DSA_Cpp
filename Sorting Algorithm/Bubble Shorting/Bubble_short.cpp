#include<iostream>
using namespace std;

void Bubble_sort(int arr[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int array[5];
    cout<<"Enter Elements :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i<<" Element :";
        int a;
        cin>>a;
        array[i] = a;
    }
    cout<<"Unshorted array :";
    for(int j=0;j<5;j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;

    Bubble_sort(array);

    cout<<"Shorted Array :";
    for(int k = 0;k<5;k++)
    {
        cout<<array[k]<<" ";
    }
    return 0;

}