#include "linkedlist.h"

linkedlist::linkedlist()
{
    head=NULL;
    last=NULL;
    //cout<<"constructor called";
}

linkedlist::~linkedlist()
{
    Node *p=head;
    while (head)
    {
        head=head->next;
        delete p;
        p=head;
    }
}
