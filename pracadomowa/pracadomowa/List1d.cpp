#include "pch.h"
#include "List1d.h"



List1d::List1d()
{
	head = nullptr;
	tail = nullptr;
	length = 0;
}


List1d::~List1d()
{
}

void List1d::pushback(int element)
{
	length++;
	Nodle *added = new Nodle;
	added->liczba = element;
	added->next = nullptr;
	if (head == nullptr)
	{
		head = added;
		tail = added;
	}
	else
	{
		tail->next = added;
		tail = added;
	}
}

void List1d::popback()
{
	length--;
	Nodle *current = new Nodle;
	Nodle *previous = new Nodle;
	current = head;
	while (current->next != nullptr)
	{
		previous = current;
		current = current->next;
	}
	tail = previous;
	previous->next = nullptr;
	delete current;
}

void List1d::pushfront(int element)
{
	length++;
	Nodle *added = new Nodle;
	added->liczba = element;
	added->next = nullptr;
	if (head == nullptr)
	{
		head = added;
		tail = added;
	}
	else
	{
		added->next = head;
		head = added;
	}
	
}

void List1d::popfront()
{
	length--;
	Nodle *temp=new Nodle;
	temp = head;
	head = head->next;
	delete temp;
}

bool List1d::isempty()
{
	if (head = nullptr)
		return true;
	else
	return false;
}

int List1d::size()
{
	return length;
}

int List1d::front()
{
	return head->liczba;
}

int List1d::back()
{
	return tail->liczba;
}


