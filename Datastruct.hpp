//#pragma once
#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <string>
#include <iostream>

template<class T>class List {

	struct node
	{
		T data;
		node* next;
		node* pre;
		node(node* p, node* n, const T& d) :pre(p), next(n), data(d) {}
	};
	node* head; node* tail;

public:

	List();
//	~List();

	void prefix(const T& data);
	void append(const T& data);
	int itor(int n);
	void listCreate(List<T> list);
	void printList() const { for (node* pre = head; pre; pre = pre->next)std::cout << pre->data << '\n'; };

};
#endif
