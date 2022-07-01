#include <iostream>
using namespace std;

class ride
{
   public:
   int data;
   ride* next;

   ride(int val)
   {
    data = val;
    next = NULL;
   }
   
};

void insert(ride* &head, int val)
{
    ride* new_ride = new ride(val);

    if ( head == NULL)
    {
       head =  new_ride;
       return;
    }

    ride* temp = head;

    while( temp -> next !=NULL)
    {
        temp = temp -> next;
    }

    temp -> next = new_ride;
   
}

void display( ride* head)
{
    ride* temp = head;
    while( temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}



int main()
{
    ride* head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    display(head);
    return 0;
  
}

