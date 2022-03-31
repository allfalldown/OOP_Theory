#include <iostream>
#include <cstdlib>
using namespace std;

class Queue
{
    int *arr;       
    int capacity;   
    int front;      
    int rear;       
    int count;      
 
public:
    Queue(int size = 10000);     
    ~Queue();                   
 
    int dequeue();
    void enqueue(int x);
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
};