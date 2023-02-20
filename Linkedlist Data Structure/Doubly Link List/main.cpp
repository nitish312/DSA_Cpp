#include<iostream>
#include"node.h"
#include"DoublyLinkedList.h"
using namespace std;

int main()
{
    DoublyLinkedList obj;
    int option;
    int key1,k1,data1;
    while(true)
    {
        cout<<"1.AppendNode"<<endl;
        cout<<"2.PrependNode"<<endl;
        cout<<"3.InsertNodeAfter"<<endl;
        cout<<"4.DeleteNodebyKey"<<endl;
        cout<<"5.UpdateNodebyKey"<<endl;
        cout<<"6.Print"<<endl;
        cout<<"7.Clear Screen"<<endl;
        cout<<"8.exit"<<endl;
        cout<<"Enter your choice:";
        cin>>option;
        Node* n1 = new Node();
        if(option == 8)
        {
            break;
        }
        else
        {
            switch(option)
            {
                case 1:
                    cout<<"Append"<<endl;
                    cout<<"Enter key:";
                    cin>>key1;
                    cout<<"Enter data:";
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    obj.appendNode(n1);
                    break;
                case 2:
                    cout<<"Prepend Node Oparation"<<endl;
                    cout<<"Enter key:";
                    cin>>key1;
                    cout<<"Enter data:";
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    obj.prependNode(n1);
                    break;
                case 3:
                    cout<<"Insert Node after"<<endl;
                    cout<<"Enter key of existing node:";
                    cin>>k1;
                    cout<<"Enter New Node key:";
                    cin>>key1;
                    cout<<"Enter data:";
                    cin>>data1;
                    n1->key=key1;
                    n1->data=data1;
                    obj.insertNodeAfter(k1,n1);
                    break;
                case 4:
                    cout<<"Deleat by key"<<endl;
                    cout<<"Enter key:";
                    cin>>k1;
                    obj.deleteNodeByKey(k1);
                    break;
                case 5:
                    cout<<"Update Node By Key"<<endl;
                    cout<<"Enter key:";
                    cin>>key1;
                    cout<<"Enter new Data:";
                    cin>>data1;
                    obj.updateNodeByKey(key1,data1);
                    break;
                case 6:
                    obj.printList();
                    break;
                case 7:
                    system("cls");
                    break;
                default:
                    cout<<"Wrong option!! Try again!!"<<endl;
            }
        }

    }
    return 0;
}