#include<iostream>
using namespace std;

void insertion_short(int arr[])
{
    int j = 0;
    int key = 0;

    for(int i=1;i<5;i++)
    {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j - 1;  
        }
        arr[j+1] = key;

    }
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        int n;
        cout<<"Enter Element "<<i<<":";
        cin>>n;
        arr[i] = n;
    }
    cout<<"Unshorted array :"<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<arr[j];
    }
    cout<<endl;

    insertion_short(arr);

    cout<<"Shorted array :"<<endl;
    for(int k=0;k<5;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;
    
    return 0;   
}

