#include <iostream>
using namespace std;


// defintion of Node
struct Node {
    int data;
    Node* next;
};

struct Node* head;  // will point to Node and store the address of the first node in the linked list (the head node). head points to Node

void Insert(int x);
void Print();

int main()
{
    head = NULL;  //empy list

    printf("Enter desired number of numbers for linked list: \n");
    int n,x;
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
    


}

