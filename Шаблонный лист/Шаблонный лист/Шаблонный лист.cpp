// шаблонный лист.cpp 
#include"stdafx.h"
#pragma once

#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

class  Book
{
public:
	char* Name;
	unsigned int Year;
};

template <typename T>

class list
{
public:

	void addFirst(T book)
	{

		Node<Book>* temp = new Node;
		temp->data = book;
		temp->next = NULL;

		if (head == NULL)
		{
			head = temp;
			return;
		}
		temp->next = head;
		head = temp;
	}
	void print()
	{
		Node<T>* temp = head;
		while (temp != nullptr)
		{
			cout << temp->data.Name << " (" << temp->data.Year << ")" << endl;
			temp = temp->next;
		}
	}

	void clear()
	{
		while (head != nullptr)
		{
			delete[] head->data.Name;
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}
private:
	template <typename T>
	class Node
	{
	public:
		T data;
		Node<T>* next;
	};
	Node<T>* head = nullptr;
};

int main()
{
	int arraySize = 3;
	list<Book> list;

	for (int i = 0; i < arraySize; i++)
	{
		Book book;
		char* buff = new char[255];
		cout << "Книга " << i << ". Название: ";
		cin >> buff;

		book.Name = new char[strlen(buff) + 1];

		strcpy(book.Name, buff);

		book.Name[strlen(buff)] = '\0';

		cout << "Книга " << i << ". Год: ";
		cin >> book.Year;

		list.addFirst(book);
	}
	list.print();
}