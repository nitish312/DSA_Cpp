// 1> Sequential Search :
// 2> Interval Search

// Sequential Search : In this list of array is triversed sequentially and even element is checked.
// E.g. : Linear Search

// Interval Search : These algorithms are specially designed for searching in sorted data-structure. This type of searching algorithms are much more efficient than linear search as they repetedly targets the center of the search structure and devides the search space into half.
// E.g. : Binary Search


// Linear search Algorithm
// 1. Teake input array
// 2. Take element to search
// 3. Start from 1st elemt to last
// 4. If found print

#include<iostream>
using namespace std;

void linearSearch(int a[] , int n)
{
    int c = 0;
    for(int i = 0; i < 5;i++)
    {
        if(a[i]==n)
        {
            cout<<"Found at location :"<<i;
            c=1;
        }   
    }
    if(c==0)
    {
        cout<<"Notfound";
    }
}

int main()
{
    int array[5];
    for(int i = 0; i < 5; i++)
    {
        int a;
        cin>>a;
        array[i] = a;
    }
    for(int j=0; j<5; j++)
    {
        cout<<"Array Is:"<<array[j]<<endl;
    }
    int n;
    cout<<"Enter the Element to search :";
    cin>>n;
    linearSearch(array,n);
    return 0;
}