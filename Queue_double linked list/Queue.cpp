#include "Queue.h"


template<class T>
Queue<T>::Queue() {
	head = tail = nullptr;
	size = 0;
}

template <class T>
void Queue<T>::push(T element) {
	Node<T>* newNode = new Node<T>(element);
	size++;
	if (head == nullptr) {
		head = tail = newNode;
		return;
	}

	tail->next = newNode;
	newNode->prev = tail;
	tail = newNode;
}

template<class T>
void Queue<T>::pop() {
	if (head == nullptr) {
		return;
	}
	size--;
	if (head->next == nullptr) {
		delete head;
		head = tail = nullptr;
		return;
	}

	Node<T>* tmp = head;
	head = head->next;
	delete tmp;
}

template<class T>
T Queue<T>::front() {
	return head->value;
}

template <class T>
int Queue<T>::getSize() {
	return size;
}

template<class T>
bool Queue<T>::empty() {
	return (size == 0);
}

template<class T>
Queue<T>::~Queue() {
	while (head != nullptr) {
		pop();
	}
}