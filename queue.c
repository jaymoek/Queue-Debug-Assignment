#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Enqueue Function
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        printf("The Queue is Full!!\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = x;
        printf("%d has been Queued!\n", x);
    }
}

// Dequeue Function
int dequeue()
{
    if (front == -1)
    {
        printf("The Queue is Empty!!\n");
        return -1;
    }

    int x = queue[front];
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }

    printf("%d has been dequeued!\n", x);
    return x;
}

// Display Function
void display()
{
    if (front == -1)
    {
        printf("The Queue is Empty!!\n");
        return;
    }

    printf("Queue Elements: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

// Main Function
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // Queue Full

    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Queue Empty

    display();

    return 0;
}