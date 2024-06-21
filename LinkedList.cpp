#include <iostream>
using namespace std;


// Node definition
struct Node {
    int data;
    Node* next;
};

// Global Variables
struct Node* head;  // will point to Node and store the address of the first node in the linked list (the head node). head points to Node

// Function definitions
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

void Insert(int x) {
    // Node* temp = (Node*)malloc(sizeof(struct Node));
    Node* temp = new Node();    // create new node
    temp->data = x;             // set data of temp to the input value of x
    temp->next = NULL;          // set the next pointer of temp to NULL
    head = temp;                // update the head pointer to point to the newly created node temp
}