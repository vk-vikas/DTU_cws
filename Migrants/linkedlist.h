#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include<string>
using namespace std;

class Node
{
    public:
    int age;
    int standard;
    Node *next; // self referential
};

class linkedlist
{
public:
    linkedlist();
    ~linkedlist();

private:
    Node *head,*last; // last always points to the last node in the linked list

    public:

    void add_node(int age_val)
    {
        Node *temp_node= new Node; // our new node which we will add in our linked list
        switch (age_val)
        {
        case 6: temp_node->standard=1;
                temp_node->next=NULL;
            break;
        case 7: temp_node->standard=2;
                temp_node->next=NULL;
            break;
        case 8: temp_node->standard=3;
                temp_node->next=NULL;
            break;
        case 9: temp_node->standard=4;
                temp_node->next=NULL;
            break;
        case 10: temp_node->standard=5;
                temp_node->next=NULL;
            break;
        case 11: temp_node->standard=6;
                temp_node->next=NULL;
            break;
        case 12: temp_node->standard=7;
                temp_node->next=NULL;
            break;
        case 13: temp_node->standard=8;
                temp_node->next=NULL;
            break;
        case 14: temp_node->standard=9;
                temp_node->next=NULL;
            break;
        case 15: temp_node->standard=10;
                temp_node->next=NULL;
            break;
        case 16: temp_node->standard=11;
                temp_node->next=NULL;
            break;
        case 17: temp_node->standard=12;
                temp_node->next=NULL;
            break;
        default: temp_node->standard=0;
                temp_node->next=NULL;
            break;
        }


        //temp_node->standard=val;
        //temp_node->next=NULL;

        if(head==NULL)
        {
            head = temp_node;
            last = temp_node;
        }
        else
        {
            last->next = temp_node;
            last = last->next; // general trasversing method in liked list
        }
    }

    int length()
    {
        int count{0};
        Node *p=head;
        while (p)
        {
            count++;
            p=p->next;
        }
        return count;
    }


    void delete_node(int pos)
    {
        Node *p=head,*q=NULL;
        if (pos==1) // case of removoing the first node
        {
            head=head->next;
            delete p;
        }
        else if(pos>1 && pos<this->length())
        {
            for(int i=0;i<pos-1;i++)
            {
                q=p; // q becomes p and then p jumps a node
                p=p->next;
            }
            q->next=p->next;
            delete p;
        }
        else if(pos==this->length()) // condition of removing last node as last pointer needs to be modified now
        {
            last=head; // we reset the last pointer ans go to second last and that is our last now
            for(int i=0;i<pos-2;i++)
            {
                last=last->next;
            }
            for(int i=0;i<pos-1;i++)
            {
                q=p; // q becomes p and then p jumps a node
                p=p->next;
            }
            q->next=p->next;
            delete p;
        }
    }

};

extern linkedlist l1;

#endif // LINKEDLIST_H
