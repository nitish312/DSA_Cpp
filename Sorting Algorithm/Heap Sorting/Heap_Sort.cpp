#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}   

class MinHeap
{
    public:
        int *harr;
        int capacity;
        int heap_size;

        MinHeap(int cap)
        {
            // Change then Heap data structure for heap sort
            heap_size = cap;
            capacity = cap;
            harr = new int[cap];
        }

        void linearSearch(int val)
        {
            for(int i=0;i<heap_size;i++)
            {
                if(harr[i]==val)
                {
                    cout<<"Value Found"<<endl;
                    return;
                }
            }
            cout<<"value Not Found"<<endl;
        }

        void printArray()
        {
            for(int i=0;i<heap_size;i++)
            {
                cout<<harr[i]<<" ";
            }
            cout<<endl;
        }

        int hight()
        {
            return(ceil(log2(heap_size+1))-1); // Formula to get hight of a heap // Works with <math.h>
        }

        int parent(int i)
        {
            return((i-1)/2);
        }
        int left(int i)
        {
            return(2*i + 1);
        }
        int right(int i)
        {
            return(2*i + 2);
        }
        int getMin()
        {
            return harr[0];
        }
        void insertKey(int k)
        {
            if(heap_size == capacity)
            {
                cout<<"\n Overflow : Could not insert key \n";
                return;
            }
            heap_size++;
            int i = heap_size - 1;
            harr[i] = k;

            while(i != 0 && harr[parent(i)] > harr[i])
            {
                swap(harr[i],harr[parent(i)]);
                i = parent(i);
            }
        }

        void MinHeapify(int i)
        {
            int l = left(i);
            int r = right(i);
            int smallest = i;
            if(l<heap_size && harr[l]<harr[i])
            {
                smallest = l;
            }
            if(r < heap_size && harr[r]<harr[smallest])
            {
                smallest = r;
            }
            if(smallest != i)
            {
                swap(harr[i], harr[smallest]);
                MinHeapify(smallest);   
            }
        }

        int extractMin()
        {
            if (heap_size<=0)
            {
                return INT_MAX;
            }
            if(heap_size == 1)
            {
                heap_size--;
                return harr[0];
            }

            int root = harr[0];
            harr[0] = harr[heap_size-1];
            heap_size--;
            MinHeapify(0);

            return root;
        }

        void decreaseKey(int i,int new_val)
        {
            harr[i]=new_val;
            while(i != 0 && harr[parent(i)]>harr[i])
            {
                swap(harr[i],harr[parent(i)]);
                i = parent(i);
            }
        }

        void deleteKey(int i)
        {
            decreaseKey(i,INT_MIN);
            extractMin();
            cout<<"Deleat Sucessful\n";
        }

        // Heap SORT

        void getUnsortedArray()
        {
            cout<<"Enter "<<capacity<<" no. of elemnts to sort using HEAPSORT"<<endl;
            for(int i=0;i<capacity;i++)
            {
                cin>>harr[i];
            }
        }

        void heapSort()
        {
            int temp[capacity];
            for(int j=0;j<capacity;j++)
            {
                //cout<<extractMin()<<" ";
                temp[j] = extractMin();
                cout<<temp[j]<<" ";
            }
        }
};

int main()
{
    int s;
    cout<<"Enter Size of min heap :"<<endl;
    cin>>s;
    MinHeap obj(s);
    obj.getUnsortedArray();

    cout<<"Unsorted array :"<<endl;
    obj.printArray();
    for(int i=s/2-1;i>=0;i--)
    {
        obj.MinHeapify(i);
    }

    cout<<"Heap Sorted Array :"<<endl;
    obj.heapSort();
    
    return 0;
}