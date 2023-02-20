//Using Queue Data Structure
#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{   
    int n;
    int option,value;
    Queue q;
    while(true)
    {
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeque"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Count"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. Clear"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter Your choice:";
        cin>> n;
        if(n==8)
        {
            break;
        }
        else
        {
            switch(n)
            {
                case 1:
                    cout<<"Enter Value:";
                    cin>>value;
                    q.enqueue(value);
                    break;
                case 2:
                    cout<<"Value Dequeued:"<<q.dequeue()<<endl;
                    break;                    
                case 3:
                    if(q.isEmpty())
                    {
                        cout<<"Queue is Empty"<<endl;
                    }
                    else
                    {
                        cout<<"Queue is not Empty"<<endl;
                    }
                    break;
                case 4:
                    if(q.isFull())
                    {
                        cout<<"The Queue is Full"<<endl;
                    }
                    else
                    {
                        cout<<"The Queue is not Full"<<endl;
                    }
                    break;
                case 5:
                    cout<<"No. Of elements:"<<q.count()<<endl;
                    break;
                case 6:
                    q.display();
                    break;
                case 7:
                    system("cls");
                    break;    
                default:
                    cout<<"Wrong Choice. Try again:"<<endl;
            }
        }

    }
    
    return 0;

}