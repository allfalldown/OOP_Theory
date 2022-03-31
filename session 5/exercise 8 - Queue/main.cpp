#include "Queue.cpp"

int main()
{
    Queue q(1000);
    int n;
    cout << "Number to add: "; cin >> n;
    for (int i=0; i<n; i++){
        int tmp;
        cout << "Data: "; cin >> tmp;
        q.enqueue(tmp);
    }
    cout << "The front element is " << q.peek() << endl;
    cout << "The queue size is " << q.size() << endl;
    cout << "Number to dequeue: "; cin >> n;
    for (int i=0; i<n; i++)
        q.dequeue();
    cout << "The queue size is " << q.size() << endl;
    if (q.isEmpty())
        cout << "The queue is empty" << endl;
    else 
        cout << "The queue is not empty" << endl;
    
    return 0;
}
