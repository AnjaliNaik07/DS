#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


Node *front = NULL;
Node *rear = NULL;

void enqueue(int val)
{
    if(front==NULL || rear==NULL)
    {
        //create a new node
        Node *newNode;
        newNode = new Node;

        newNode->data = val;
        newNode->next = NULL;

        //as it is single node, both pointers
        //point to the same node
        front = newNode;
        rear = newNode;
    }
    else
    {
        Node *newNode;
        newNode = new Node;
        newNode->data = val;
        rear->next = newNode;
        
        newNode->next = front;
        rear = newNode;
    }
}
void dequeue()
{
    Node *n;
    n = front;
    front = front->next;
    delete(n);
}
void display()
{
    Node *ptr;
    ptr = front;
    do
    {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }while(ptr != rear->next);

    cout<<endl;
    cout<<endl;

}

int main(void)
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    display();

    return 0;
}
