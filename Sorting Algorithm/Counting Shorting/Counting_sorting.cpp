#include<iostream>
using namespace std;

// Only works under 0-9 range

void counting_sort(int arr[],int size,int range)
{
    int output_array[size];
    int count_array[range];

    // initializing all elements to 0 in count array
    for(int i=0;i<range;i++)
    {
        count_array[i] = 0;
    }

    // to take a count of all elemnts in the input arry
    for(int j=0;j<size;j++)
    {
        ++count_array[arr[j]];
    }

    //Cummulative count of count array to get the position of elemnts to be stored in the output array
    for(int k=1;k<range;k++)
    {
        count_array[k] = count_array[k]+count_array[k-1];
    }

    // Placing input array elemnts into output array in proper positions such that the result is a sorted array in aSC order
    for(int l=0;l<size;l++)
    {
        output_array[--count_array[arr[l]]] = arr[l];
    }

    // copying output array elemnts to input array

    for(int i=0;i<size;i++)
    {
        arr[i] = output_array[i];
    }
}   



int main()
{
    int size = 0;
    int range = 10;

    cout<<"Enter size of array :"<<endl;
    cin>>size;
    int myarray[size];

    cout<<"Enter "<<size<<" integers in any order range of 0-9: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i<<" :";
        cin>>myarray[i];
    }

    cout<<"Before Sorting"<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<myarray[j]<<" ";
    }
    cout<<endl;

    counting_sort(myarray,size,range);

    cout<<"After Sorting"<<endl;
    for(int k=0;k<size;k++)
    {
        cout<<myarray[k]<<" ";
    }
    return 0;
}