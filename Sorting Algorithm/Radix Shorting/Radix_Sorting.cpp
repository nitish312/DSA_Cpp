#include<iostream>
using namespace std;

// Only for digits 0 to 9

int GetMax(int arr[],int size)
{
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max; 
}

void counting_sort(int arr[],int size,int div)
{
    int output_array[size];
    int count_array[10]={0}; // {0} makes all elements 0

    // to take a count of all elemnts in the input arry
    for(int j=0;j<size;j++)
    {
        count_array[(arr[j]/div)%10]++;
    }

    //Cummulative count of count array to get the position of elemnts to be stored in the output array
    for(int k=1;k<10;k++)
    {
        count_array[k] = count_array[k]+count_array[k-1];
    }

    // Placing input array elemnts into output array in proper positions such that the result is a sorted array in aSC order
    for(int l=size -1;l>=0;l--)
    {
        output_array[count_array[(arr[l]/div)%10]-1] = arr[l];
        count_array[(arr[l]/div)%10]--;
    }

    // copying output array elemnts to input array

    for(int i=0;i<size;i++)
    {
        arr[i] = output_array[i];
    }
}  

void RadixSort(int arr[],int size)
{
    int m= GetMax(arr,size);
    for(int div=1;m/div>0;div*=10)
    {
        counting_sort(arr,size,div);
    }
}


int main()
{
    int n;
    cout<<"Enter no. of elements :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i<<" :";
        cin>>arr[i];
    }

    cout<<"Before Sorting :"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    RadixSort(arr,n);

    cout<<"After Sorting :"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    return 0;
}