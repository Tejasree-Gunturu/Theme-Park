#include <iostream>
using namespace std;

class ride
{
    public:
    string Name;
    int Age_max;
    int Age_min;
    int Price;
    ride* next;
    
    ride (string name, int age_min, int age_max, int price)
    {
        Name = name;
        Age_min = age_min;
        Age_max = age_max;
        Price = price;
        next = NULL;
    }
};

void makeList (ride* &head, string name, int age_min, int age_max, int price )
{
    ride* new_ride = new ride(name, age_min, age_max, price);

    if ( head == NULL)
    {
       head = new_ride;
       return;
    }

    ride* temp = head;

    while( temp -> next !=NULL)    // Creating a Linked List to store the details of different rides
    {
        temp = temp -> next;
    }

    temp -> next = new_ride;
   
}

void result (ride* head, int age)
{
    ride* temp = head;
    int total;
    
    cout<<"List of rides that you can enjoy :"<<endl;
    while ( temp != NULL)
    {
        if ( age >= temp->Age_min && age <= temp->Age_max )
        {
            cout<<temp->Name<<"  :  "<<temp->Price<<"/-"<<endl;
            total = total + temp->Price;
        }

        temp = temp->next;
    }
    cout<< "****************************** "<<endl;
    cout<<"Total Price = "<<" "<<total<<"/-"<<endl;
    cout<< "****************************** "<<endl;
}

int main()
{
    int age;
    ride* head=NULL;

    makeList (head,"Rain Dance",18,100,500);
    makeList (head,"Alpine slide",12,50,500);
    makeList (head,"Balloon Race",0,12,100);
    makeList (head,"Carousel",5,60,200);
    makeList (head,"Double Shot",18,30,600);
    makeList (head,"Enterprise",0,40,400);
    makeList (head,"Ferris wheel",0,70,300);
    makeList (head,"Gyro tower",18,30,200);
    makeList (head,"Hurricane",12,30,600);
    makeList (head,"Infinity",0,70,100);
    makeList (head,"Jump and Smile",0,70,100);
    makeList (head,"Kamikaze",18,30,900);
    makeList (head,"Mechanical bull",8,30,250);
    makeList (head,"Pirate Ship",0,70,150);
    makeList (head,"Reverse bungee",6,60,250);

    cout<<"Enter your age : ";
    cin>>age;

    result(head, age);
    cout<<"Enjoy the rides at THRILLERS' THRILLS !!"<<endl;
    cout<<"Have a safe and memorable experience at our theme park!"<<endl;
    return 0;
}
