#pragma once
#include "Node.h"
template <class T>
class Queue
{
	Node<T>* head;
	Node<T>* tail;
	int size;

public:
	Queue();
	void push(T element);
	void pop();
	T front();
	int getSize();
	bool empty();
	~Queue();
};

template class Queue<int>;
template class Queue<float>;
template class Queue<char>;