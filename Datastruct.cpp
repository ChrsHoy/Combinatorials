#ifndef DATASTRUCT_CPP
#define DATASTRUCT_CPP

#include "Datastruct.hpp"
#include <string>
#include "malloc.h"
using namespace std;

template<class T>
List<T>::List()
{
	struct node* newnode;
	newnode = new node(0, 0,0);
	newnode->data = 0;
head=NULL;tail=NULL; 
//	if (head == NULL)
	{
		//pos init
		head = newnode;
		newnode->pre = NULL;
		newnode->next =NULL;
		tail = newnode;
	}

}



template <class T>
void List<T>::prefix(const T& item)
{
	struct node* newnode;
	newnode = new node(0, 0, item);
	newnode->data = item;

	//front add

	newnode->pre=NULL;
	newnode->next=head;
	head->pre=newnode;
	head=newnode;

}

template <class T>
void List<T>::append(const T& item)
{
	struct node* newnode;
	newnode = new node(0, 0, item);
	newnode->data = item;



	//append
	//for (node* pre = head; pre; pre = pre->next)
	{

		newnode->pre = tail;
		tail->next = newnode;
		newnode->next = NULL;
		tail = newnode;
	}




	//return item;
}


template <class T>
int List<T>::itor(int n)
{
	int i=0;
	//int* item;
	//int item;
	//T* index= new T nullptr;
	//T*  =(T*)malloc(10)
	T* index;
	for (node* pre = head; pre; pre = pre->next)
	{
		++i;
		if (i==n)
		{	//cycle save 2
			//T& item = pre->data; cout << item;
			
			//cycle save 3
			index = new T;
			*index = pre->data; cout << *index<<'/n';

			//cycle save option 1
			//cout << pre->data;
			break;
		}
	}

	//cout << item;
	//cout << data;

	return i;
}


template<class T>
void List<T>::listCreate(List<T> list)
{

	//typedef 
	//List<char> list;

	int proceed = 1;
	int choice;
	int index;
	char c = 'c';
	char* ptr = &c;

	while (proceed != 0)
	{
		cout << "(1)Build, (2)Print list, (3)index search" << '\n';
		cin >> choice;


		switch (choice)
		{

		case 1:
			cout << "add an item to the list" << '\n';
			cin >> c;
			list.prefix(c);
			break;

		case 2:
			list.printList();
			break;

		case 3:
			cout << "choose your index" << '\n';
			cin >> index;
			list.itor(index);

		}
		cout << "Is this finished?" << "(1)N/(0)Y" << '\n';
		cin >> proceed;



	}

}

template class List<int>;
template class List<char>;
#endif // !DATASTRUCT_CPP
