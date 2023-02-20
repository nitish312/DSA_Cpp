#include<iostream>
#include "/node.h"
using namespace std;
class DoublyLinkedList
{
    public:
        Node* head;
        DoublyLinkedList()
        {
            head = NULL;
        }
        DoublyLinkedList(Node* n)
        {
            head = n;
        }

        //Check if node exists
        Node* checkIfNodeExists(int k)
        {
            Node* temp = NULL;
            Node* ptr = head;

            while(ptr!=NULL)
            {
                if(ptr->key==k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            return temp;
        }

        // Append a node to the list

        void appendNode(Node* n)
        {
            if(checkIfNodeExists(n->key)!=NULL)
            {
                cout<<"Node Alardy exists with key value:"<<n->key<<"Append another node with differenr key value"<<endl;
            }
            else
            {
                if(head == NULL)
                {
                    head = n;
                    cout<<"Node Appended as Head node"<<endl;
                }
                else
                {
                    ptr->next=n;
                    n->previous = ptr;
                    cout<<"Node Appended"<<endl;
                }
            }
        }

        // Prepend a node

        void prependNode(Node* n)
        {
            if(checkIfNodeExists(n->key)!=NULL)
            {
                cout<<"Node Alrady exists with key value:"<<n->key<<".Append another node with different key value"<<endl;
            }
            else
            {
                if(head == NULL)
                {
                    head = n;
                    cout<<"Node Prepended as Head node"<<endl;
                }
                else
                {
                    head->previous=n;
                    n->next=head;
                    head = n;
                    cout<<"Node Prepended"<<endl;
                }
                
            }
        }

        // Inserting node after a perticular node in the list
        void insertNodeAfter(int k,Node*n)
        {
            Node* ptr = checkIfNodeExists(k);
            if(ptr==NULL)
            {
                cout<<"No node exists with key value:"<<k<<endl;
            }
            else
            {
                if(checkIfNodeExists(n->key)!=NULL)
                {
                    cout<<"Node Alrady exists with key value:"<<n->key<<".Append another node with different key value"<<endl;
                }
                else
                {
                    Node* nextNode = ptr->next;
                    // Inserting at the end
                    if(nextNode == NULL)
                    {
                        ptr->next=n;
                        n->previous=ptr;
                        cout<<"Node Inserted at the END"<<endl;
                    }
                    // Inserting in between
                    else
                    {
                        n->next=nextNode;
                        nextNode->previous=n;
                        n->previous=ptr;
                        ptr->next=n;
                        cout<<"Node Inserted in Between"<<endl;
                    }
                }    
            }
        }

        // delete Node by key
        void deleteNodeByKey(int k)
        {
            Node* ptr = checkIfNodeExists(k);
            if(ptr==NULL)
            {
                cout<<"No node exixts with key value:"<<k<<endl;
            }
            else
            {
                if(head==NULL)
                {
                    cout<<"Doubly Linked list alrady Empty. cant Delete"<<endl;
                }
                else if(head!=NULL)
                {
                    if(head->key==k)
                    {
                        head = head->next;
                        cout<<"Node UNLINKED with key value:"<<k<<endl;
                    }
                    else
                    {
                        Node* nextNode = ptr->next;
                        Node* previousNode = ptr->previous;
                        // Deleating at the end
                        if(nextNode == NULL)
                        {
                            previousNode->next=NULL;
                            cout<<"Node Deleated at the END"<<endl;
                        }
                        // deleate in between
                        else
                        {
                            previousNode->next=nextNode;
                            nextNode->previous=previousNode;
                            cout<<"Node Deleted in Between"<<endl;
                        }
                    }
                }
            }
        }

        // Upadet Node
        void updateNodeByKey(int k,int d)
        {
            Node* ptr = checkIfNodeExists(k);
            if(ptr!=NULL)
            {
                ptr->data=d;
                cout<<"node data update Sucessfull"<<endl;
            }
            else
            {
                cout<<"node Dose not exists with key value:"<<k<<endl;
            }
        }
        // Printing
        void printList()
        {
            if(head==NULL)
            {
                cout<<"No Nodes is Doubly Linked List";
            }
            else
            {
                cout<<endl<<"Doubly Linked List Values:";
                Node* temp = head;
                while(temp!=NULL)
                {
                    cout<<"("<<temp->key<<","<<temp->data<<")<-->";
                    temp = temp->next;
                }
            }
        }
};