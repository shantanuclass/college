#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Size of the array

int arr[SIZE];
int front1 = -1, rear1 = -1;  
int front2 = SIZE, rear2 = SIZE;  

int FullCheck1() {
    return rear1 + 1 == rear2;  
}

int EmptyCheck1() {
    return front1 == -1;
}

int FullCheck2() {
    return rear2 - 1 == rear1;  
}

int EmptyCheck2() {
    return front2 == SIZE;
}

void enqueue1(int value) {
    if (FullCheck1()) {
        printf("Queue 1 Overflow\n");
        return;
    }
    if (front1 == -1) front1 = 0;  
    arr[++rear1] = value;
    printf("Enqueued %d to Queue 1\n", value);
}


void enqueue2(int value) {
    if (FullCheck2()) {
        printf("Queue 2 Overflow\n");
        return;
    }
    if (front2 == SIZE) front2 = SIZE - 1;  
    arr[--rear2] = value;
    printf("Enqueued %d to Queue 2\n", value);
}

void dequeue1() {
    if (EmptyCheck1()) {
        printf("Queue 1 is Empty\n");
        return;
    }
    printf("Dequeued %d from Queue 1\n", arr[front1]);
    if (front1 == rear1) {
        front1 = rear1 = -1;  
    } else {
        front1++;
    }
}

void dequeue2() {
    if (EmptyCheck2()) {
        printf("Queue 2 Underflow\n");
        return;
    }
    printf("Dequeued %d from Queue 2\n", arr[front2]);
    if (front2 == rear2) {
        front2 = rear2 = SIZE; 
    } else {
        front2--;
    }
}

void display1() {
    if (EmptyCheck1()) {
        printf("Queue 1 is empty\n");
        return;
    }
    printf("Queue 1: ");
    for (int i = front1; i <= rear1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void display2() {
    if (EmptyCheck2()) {
        printf("Queue 2 is empty\n");
        return;
    }
    printf("Queue 2: ");
    for (int i = front2; i >= rear2; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    enqueue1(10);
    enqueue1(20);
    enqueue1(30);
    enqueue2(90);
    enqueue2(80);
    enqueue2(70);

    display1();
    display2();

    dequeue1();
    dequeue2();

    display1();
    display2();

    enqueue1(40);
    enqueue2(60);

    display1();
    display2();

    return 0;
}
