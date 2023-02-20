#include<iostream>
using namespace std;

void Optimized_Bubble_short(int a[])
{
    for(int i=0;i<5;i++)
    {
        bool flag = false;
        for(int j=0; j< 5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag = true;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
}

int main()
{
    int array[5];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<5;i++)
    {
        int n;
        cout<<"Enter "<<i<<" element :";
        cin>>array[i];
    }
    
    cout<<"Unshorted array :";
    for(int j=0;j<5;j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;

    Optimized_Bubble_short(array);
    cout<<"Shorted array :";
    for(int j=0;j<5;j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;

    return 0;
}