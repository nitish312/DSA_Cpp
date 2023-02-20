#include<iostream>
using namespace std;


int Partition(int arr[],int s,int e)
{
    int pivot = arr[e];
    int pIndex = s;
    for(int i=s;i<e;i++)
    {
        if(arr[i]<= pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp2 = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp2;

    return pIndex;
}

void quickShort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p = Partition(arr,s,e);
        quickShort(arr,s,(p-1));
        quickShort(arr,(p+1),e);
    }
}


int main()
{
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n];

    cout<<"Enter Values :"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cout<<"Enter Element "<<i<<" :";
        cin>>element;
        arr[i]=element;

    }

    cout<<"Array wethout Shorting :"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    quickShort(arr,0,n-1);

    cout<<"Array after Shorting :"<<endl;
    for(int k = 0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}