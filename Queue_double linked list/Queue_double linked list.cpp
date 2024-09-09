#include <iostream>
#include "Queue.h"
using namespace std;


int main()
{
    Queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    q.push('z');
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}

