#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialization
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access the front element
    cout << "Front element: " << q.front() << endl;

    // Access the back element
    cout << "Back element: " << q.back() << endl;

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // Check the size of the queue
    cout << "Queue size: " << q.size() << endl;

    // Pop an element from the front
    q.pop();
    cout << "After pop, front element: " << q.front() << endl;

    // Check the size after pop
    cout << "Queue size after pop: " << q.size() << endl;

    // Pop all elements
    while (!q.empty()) {
        cout << "Popping element: " << q.front() << endl;
        q.pop();
    }

    // Check if queue is empty after popping all elements
    cout << "Is queue empty now? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
