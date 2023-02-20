//Creating Simple Linked List
#include<iostream>
#include "Node.h"
using namespace std;

class SimpleLinkedList
{
    public:
        Node* head;
        SimpleLinkedList()
        {
            head=NULL;
        }
        SimpleLinkedList(Node *n)
        {
            head=n;
        }

        //Check if Node Exixts using Key value
        Node* nodeExists(int k)
        {
            Node* temp= NULL;
            Node* ptr= head;

            while(ptr!=NULL)
            {
                if(ptr->key=k)
                {
                    temp=ptr;
                }
                ptr = ptr->next;

            }

            return temp;

        }

        //Append a node to the list
        void appendNode(Node *n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout<<"Node Alrady exists with key value:"<<n->key<<". Append another node with different key value"<<endl;
            }
            else
            {
                if(head==NULL)
                {
                    head=n;
                    cout<<"Node Appended"<<endl;
                }
                else
                {
                    Node* ptr= head;
                    while(ptr->next!=NULL)
                    {
                        ptr=ptr->next;
                    }
                    ptr->next=n;
                    cout<<"Node Appended"<<endl;
                }
            }
        }

        //Prepend Node: attach a node in front
        void prependNode(Node *n)
        {
            if(nodeExists(n->key)!=NULL)
            {
                cout<<"Node Alrady Exists with key value:"<<n->key<<". Append Node with different Key value"<<endl;
            }
            else
            {
                n->next = head;
                head = n;
                cout<<"Node Prepended"<<endl;  
            }
        }

        //Insert a Node after a particular node in the list
        void insertNodeAfter(int k,Node *n)
        {
            Node* ptr = nodeExists(k);
            if(ptr==NULL)
            {
                cout<<"No node Exists with key value:"<<k<<endl;
            }
            else
            {
                if(nodeExists(n->key)!=NULL)
                {
                    cout<<"Node Alrady Exists with key value:"<<n->key<<". Append Node with different Key value"<<endl;
                }
                else
                {
                    n->next = ptr->next;
                    ptr->next=n;
                    cout<<"NODE INSERTED"<<endl;
                }
            }
        }
        
        //Delete node by unique key
        void deleteNodeByKey(int k)
        {
            if(head == NULL)
            {
                cout<<"Singly Linked List alrady empty, Cant Delete"<<endl;
            }
            else if (head != NULL)
            {
                if(head->key == k)
                {
                    head = head->next;
                    cout<<"Node UNLINKED with key value: "<<k<<endl;
                }
                else
                {
                    Node* temp = NULL;
                    Node* prevprt = head;
                    Node* currentptr = head-> next;
                    while(currentptr != NULL)
                    {
                        if(currentptr->key == k)
                        {
                            temp = currentptr;
                            currentptr = NULL;
                        }
                        else
                        {
                            prevprt = prevprt->next;
                            currentptr = currentptr->next;
                        }
                    }
                    if(temp!=NULL)
                    {
                        prevprt->next=temp->next;
                        cout<<"Node UNLINKED with keys value:"<<k<<endl;
                    }
                    else
                    {
                        cout<<"Node Doesn't exist with key value:"<<k<<endl;
                    }
                }
            }
        }

        //Update Node by Key
        void UpdateNodeBykey(int k,int d)
        {
            Node* ptr = nodeExists(k);
            if(ptr!=NULL)
            {
                ptr->data=d;
                cout<<"Node Data update Sucessfull"<<endl;
            }
            else
            {
                cout<<"Node Does not exists with key value:"<<k<<endl;
            }
        }

        //Printing
        void printLinkedList()
        {
            if(head == NULL)
            {
                cout<<"No Node is Singly linked List"<<endl;
            }
            else
            {
                cout<<endl<<"Singly Linked list value :";
                Node* temp = head;
                while(temp!=NULL)
                {
                    cout<<"("<<temp->key<<","<<temp->data<<") -->"<<endl;
                    temp = temp->next;
                }
            }
        }
};