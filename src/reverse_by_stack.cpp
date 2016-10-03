/*
 * reverse_by_stack.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: yangsen
 */
#include"header.hpp"
#include<stack>
LinkList reverse_by_stack(LinkList L)
{
	stack<Node *> S;
	LinkList new_Link=new Node,p;
	while(L->next!=NULL)
	{
		S.push(L->next);
		L=L->next;
	}
	p=new_Link;
	while(!S.empty())
	{
		p->next=S.top();
		S.pop();
		p=p->next;
	}
	p->next=NULL;
	return new_Link;
}


