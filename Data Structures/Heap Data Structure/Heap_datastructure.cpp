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
            heap_size = 0;
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
};


int main()
{
    int s;
    cout<<"Enter Size of Min Heap"<<endl;
    cin>>s;
    MinHeap obj(s); // due to constructor : MinHeap(int cap)
    cout<<"Min Heap Created"<<endl;

    int val,option;
    do
    {
        cout<<endl;
        cout<<"What Opperation do you want to perform?"<<endl;
        cout<<endl;
        cout<<"1. Insert Key/Node/value"<<endl;
        cout<<"2. Search key/Node"<<endl;
        cout<<"3. Delete Key/Node"<<endl;
        cout<<"4. Get Min"<<endl;
        cout<<"5. Extract Min"<<endl;
        cout<<"6. Height of heap"<<endl;
        cout<<"7. Print/Traversal Heap values"<<endl;
        cout<<"8. Clear Screen"<<endl;
        cout<<"9. Exit Program"<<endl;
        cout<<"Enter Your choice :";
        cin>>option;

        switch(option)
        {
            case 9:
                break;
            case 1:
                cout<<"INSERT OPERATION :\n";
                cout<<"ENTER VALUE to INSERT in HEAP :";
                cin>>val;
                // INSERT FUNCTION
                obj.insertKey(val);
                cout<<"\n";
                break;            
            case 2:
                cout<<"SEARCH OPERATION :\n";
                cout<<"ENTER VALUE TO SEARCH IN HEAP:\n";
                cin>>val;
                // SEARCH FUNCTION
                obj.linearSearch(val);
                break;
            case 3:
                cout<<"DELETE OPERATION :\n";
                cout<<"ENTER INDEX OF HEAP ARRAY TO DELETE:\n";
                cin>>val;
                // DELETE FUNCTION
                obj.deleteKey(val); 
                break;
            case 4:
                cout<<"GET MIN VALUE :\n";
                //  GET MIN FUNCTION
                cout<<obj.getMin()<<endl;
                break;
            case 5:
                cout<<"EXTRACT MIN VALUE :\n";
                // EXTRACT MIN FUNCTION
                cout<<obj.extractMin()<<endl;
                break;
            case 6:
                cout<<"HEAP TREE HIGHT :\n";
                // HEAP TREE HIGHT FUNCTION
                obj.hight();
                break;
            case 7:
                cout<<"PRINT HEAP ARRAY :\n";
                // PRINT ARRAY
                obj.printArray();
                break;
            case 8:
                system("clear");
                break;
            default:
                cout<<"Wrong Choice!! Try again:\n";            
        }

    }while(option!=9);

    return 0;
}