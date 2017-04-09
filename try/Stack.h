#pragma once
#include "stdio.h"


#include <string>
#include <iostream>
using namespace std;
#include "Tree.h"
const int MAX_STACK_SIZE = 100;




	//struct Element
	//{
	//	int val;
	//	Element *l, *r;
	//};

	class Stack
	{
		Element *ps;
		int size, top;
	public:

		Stack(int size)
		{
			if (size > MAX_STACK_SIZE)
			{
				throw - 1;
			}
			else
			{
				ps = new Element[size];

				top = 0;
			}

		}

		~Stack()
		{
			delete[]ps;
			ps = NULL;
		}

		void Stack::Spush(Element *t)
		{
			ps[top++] = *t;

		}


		Element Stack::Spop()
		{
			if (top > 0)
			{
				return ps[--top];
			}
		}


		bool Stack::StackIsEmpty()
		{
			if (top == 0)  return 1;
			return 0;
		}

	};

