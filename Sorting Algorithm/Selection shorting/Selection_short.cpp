#include <iostream>
using namespace std;

void selctionShort(int arr[])
{
    for(int i=0; i<10; i++)
    {
        int min = i;
        for (int j = i+1; j < 11; j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

    }
}

int main()
{
    int array[10];
    cout << "Enter Ten Intigers :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    cout << "Unshorted array :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout<<endl;

    selctionShort(array);

    cout << "Shorted array :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}