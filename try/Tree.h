#pragma once
#include "stdio.h"


#include <string>
#include <iostream>
using namespace std;

#include "Stack.h"



	struct Element
	{
		int val;
		Element *l, *r;
	};

	class Tree
	{
		Element *f;

	public:
		Tree(){ f = NULL; }

		//деструктор

		void addleft(Element *root, int val)
		{
			if (root->l != NULL) { return; }
			else
			{
				Element  *temp;
				temp = new Element;
				root->l = temp;
				temp->val = val;
				temp->r = NULL;
				temp->l = NULL;
			}

		}


		void addrigth(Element *root, int val)
		{
			// создаю голову
			if (root->r != NULL)
			{
				Element *temp;
				temp = new Element; 
				temp->val = val;
				temp->r = NULL;
				temp->l = NULL;
				f = temp;

			}
			else
			{
				Element  *temp;
				temp = new Element;
				root->r = temp;
				temp->val = val;
				temp->r = NULL;
				temp->l = NULL;
			}
			
		}


		void printTree()
		{
			Stack st(100);
			Element *t = f;
			while (true)
			{
				if (t != NULL)
				{
					printf("%d ", t->val);
					st.Spush(t);
					t = t->l;
				}
				else
					if (st.StackIsEmpty()) break;
					else
					{
						*t = st.Spop();
						t = t->r;
					}
			}

		}


	};

	
		


