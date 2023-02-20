#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;     // Starting index for left sub-array
    int j = m + 1; // Starting index for right sub-array
    int k = l;     // Strating index for temporary

    int size = (r - l) + 1;

    int temp[size]; // Temporary array
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i]; // copying all elements from left subarray to temp as it is
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = arr[j]; // copying all elements from right subarray to temp as it is
        j++;
        k++;
    }

    for (int s = l; s <= r; s++)
    {
        arr[s] = temp[s];
    }
}

void merge_short(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        merge_short(arr, l, m);
        merge_short(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int m;
    cout << "Enter size of array :";
    cin >> m;
    int arr[m];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        int a;
        cout << "Enter " << i << " Element :";
        cin >> a;
        arr[i] = a;
    }

    cout << "Array wethout Shorting :" << endl;
    for (int j = 0; j < m; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    merge_short(arr, 0, m - 1);

    cout << "Array with Shorting :" << endl;
    for (int k = 0; k < m; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}