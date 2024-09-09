#pragma once
template <class T>
struct Node
{
	T value;
	Node* next;
	Node* prev;
	Node();
	Node(T value);
};
