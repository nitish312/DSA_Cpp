//Creating Circular Queue Data Structure
#include<iostream>
using namespace std;

class CircularQueue
{
    private:
        int front;
        int rear;
        int arr[5];
        // int itemCount; ----> for Circular Queue data structure
        int itemCount;

    public:
        //Constructor(by Default Values)
        CircularQueue()
        {
            front = -1;
            rear = -1;
            itemCount=0;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }

        bool isEmpty()
        {
            if(front == -1 & rear == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        bool isFull()
        {
            // if(rear == 4)----> for Queue data structure
            // if((rear+1)%N==front)[here N is size of array]----> for Circular Queue data structure

            if((rear+1)%5==front)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void enqueue(int val)
        {
            if(isFull())
            {
                cout<<"Queue is Full"<<endl;
                return;
            }
            else if(isEmpty())
            {
                rear=0;
                front=0;
                arr[rear]=val;
                // itemCount++; ----> for Circular Queue data structure
                itemCount++;
            }
            else
            {
                // rear++;----> for Queue data structure
                // rear=(rear+1)%N; ----> for Circular Queue data structure

                rear=(rear+1)%5;
                arr[rear]=val;

                // itemCount++; ----> for Circular Queue data structure
                itemCount++;
            }

        }

        int dequeue()
        {
            int x;
            if(isEmpty())
            {
                cout<<"Queue is Empty";
                return 0;    
            }
            else if(front == rear)
            {
                x=arr[front];
                arr[front]=0;
                rear=-1;
                front=-1;
                // itemCount--; ----> for Circular Queue data structure
                itemCount--;
                return x;
            }
            else
            {
                x=arr[front];
                arr[front]=0;
                // front++; ----> for Queue data structure
                // front= (front+1)%N; ----> for Circular Queue data structure

                front= (front+1)%5;

                // itemCount--; ----> for Circular Queue data structure
                itemCount--;

                return x;
            }
        }

        int count()
        {
            // return((rear-front)+1); ----> for Queue data structure
            // return(itemCount); ----> for Circular Queue data structure
            return(itemCount);
        }

        void display()
        {
            cout<<"ALL THE VALUES IN QUEUE ARE:"<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;    
        }
};