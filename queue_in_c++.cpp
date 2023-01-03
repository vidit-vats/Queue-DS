#include <iostream>
#include <cstdlib>
using namespace std;

int queue[100],front=-1,rear=-1,ele,size;

void set_size(){
    cout<<"Enter the max size of queue: ";
    cin>>size;
}

void enqueue(){
    cout<<"Enter the element: ";
    cin>>ele;
   cout<<endl;

    if (front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[rear]=ele;
    }

    else if (rear==size-1)
        cout<<"Queue is full\n";

    else{
        rear++;
        queue[rear]=ele;
    }
}

void dequeue(){
    if (front==-1)
    cout<<"Queue is underflow\n";

    else if (front==0 && rear==0)
    {
        int temp;
        temp=queue[front];
        front--;
        rear--;
    }

    else {
        front++;
    }
}

void display(){
    int i;
    

    if (front==-1 && rear==-1)
    cout<<"Queue is empty\n";

    else{
       cout<<"Queue: ";
         for (i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
        cout<<endl;
    }

}

int main(int argc, char const *argv[])
{
   int ch;
   set_size();
    
   while(1)
   {
   cout<<"Choose from following: -\n";
   cout<<"1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n";
   cout<<"Enter your choice: ";
   cin>>ch;

   switch(ch){
    case 1:
    enqueue();
    break;

    case 2:
    dequeue();
    break;

    case 3:
    display();
    break;

    case 4:
    exit(1);

    default:
    cout<<"Error!\n";
        }
    }
    return 0;
}