// Stack DSA

#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
    Stack a;
    int m, position, value;
    while(true)
    {
        cout<<"1. Push"<<endl;     
        cout<<"2. pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. peek"<<endl;
        cout<<"6. count"<<endl;
        cout<<"7. change"<<endl;
        cout<<"8. Display"<<endl;
        cout<<"9. Clear Screen"<<endl;
        cout<<"10.Exit"<<endl;
        cout<<"Enter Your choice:";

        cin>>m;
        if(m==10){
            break;
        }
        switch(m)
        {
            case 1:
                cout<<"Enter value:";
                cin>>value;
                a.push(value);
                break;
            case 2:
                cout<<"Pop value:"<<a.pop()<<endl;
                break;
            case 3:
                if(a.isEmpty())
                {
                    cout<<"Stack is Empty"<<endl;
                }
                else
                {
                    cout<<"Stack is not Empty"<<endl;
                }
            case 4:
                if(a.isFull())
                {
                    cout<<"Stack is full"<<endl;
                }
                else
                {
                    cout<<"Stack is not full"<<endl;
                }
            case 5:
                cout<<"Enter the position you want to peek:";
                cin>>position;
                cout<<"Value in the position "<<position<<" is: "<<a.peek(position)<<endl;
                break;
            case 6:
                cout<<"No. Of elements are:"<<a.count()<<endl;
                break;
            case 7:
                cout<<"Enter Position to insert the value:";
                cin>>position;
                cout<<"Enter Value to insert:";
                cin>>value;
                a.change(position,value);
                cout<<"Done!";
                break;
            case 8:
                a.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"Invalid code try again"<<endl;

        }
    }

    return 0;
}
