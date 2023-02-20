//Simple Linked List

#include<iostream>
#include "SimpleLinkedList.h"
using namespace std;

int main()
{
    SimpleLinkedList a;
    int option;
    int key1,k1,data1;
    do
    {
        cout<<"1. AppendNode()"<<endl;
        cout<<"2. PrependNode()"<<endl;
        cout<<"3. insertNodeAfter()"<<endl;
        cout<<"4. DeleteNodeByKey()"<<endl;
        cout<<"5. UpdateNodeByKey()"<<endl;
        cout<<"6. Print()"<<endl;
        cout<<"7. Clear Screen"<<endl;
        cout<<"8. exit"<<endl;
        cout<<"Enter Your choice:";
        cin>>option;
        Node* n1 = new Node();
        if (option == 8)
        {
            break;
        }

        switch(option)
        {
            case 8:
                break;

            case 1:
                cout<<"Append Node Opperation"<<endl;
                cout<<"Enter key:"<<endl;
                cin>>key1;
                cout<<"Enter data:"<<endl;
                cin>>data1;
                n1->key = key1;
                n1->data = data1;
                a.appendNode(n1);
                break;

            case 2:
                cout<<"Prepend Node Operation"<<endl;
                cout<<"Enter key:";
                cin>>key1;
                cout<<"Enter data:";
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                a.insertNodeAfter(k1,n1);
                break;

            case 3:
                cout<<"Insert Node after Operation"<<endl;
                cout<<"Enter the key of existing node after which you want to insert this new node:";
                cin>>k1;
                cout<<"Enter key of the new node:";
                cin>>key1;
                cout<<"Enter data of the new node:";
                cin>>data1;
                n1->key=key1;
                n1->data=data1;
                a.insertNodeAfter(k1,n1);
                break;
            
            case 4:
                cout<<"Delete Node by key Operation -"<<endl;
                cout<<"Enter key of node to be deleted"<<endl;
                cin>>k1;
                a.deleteNodeByKey(k1);
                break;

            case 5:
                cout<<"Update Node by key operation -"<<endl;
                cout<<"Enter key to be updated";
                cin>>key1;
                cout<<"Enter New data to be updated";
                cin>>data1;
                a.UpdateNodeBykey(key1,data1);
                break;

            case 6:
                a.printLinkedList();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"Worong Choice!!"<<endl<<"Try again"<<endl;
        }
    }while (option!=0);

    return 0;
}