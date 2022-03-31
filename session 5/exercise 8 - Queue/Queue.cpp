#include "Queue.h"

Queue::Queue(int size){
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 
Queue::~Queue(){
    delete[] arr;
}
 
int Queue::dequeue(){
    if (isEmpty()){
        cout << "Underflow" << endl << "Program" << endl << "Terminated" << endl;
        exit(EXIT_FAILURE);
    }
 
    int x = arr[front];
    cout << "Removing " << x << endl;
 
    front = (front + 1) % capacity;
    count--;
 
    return x;
}
 
void Queue::enqueue(int item){

    if (isFull()){
        cout << "Overflow" << endl << "Program" << "Terminated" << endl;
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 

int Queue::peek(){
    if (isEmpty()){
        cout << "Underflow" << endl << "Program" << endl << "Terminated" << endl;
        exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
int Queue::size(){
    return count;
}

bool Queue::isEmpty(){
    return (size() == 0);
}
 
bool Queue::isFull(){
    return (size() == capacity);
}