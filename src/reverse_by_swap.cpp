/*
 * reverse_by_swap.cpp
 *
 *  Created on: Oct 3, 2016
 *      Author: yangsen
 */

#include"header.hpp"

void reverse_by_swap(LinkList L)
{
	LinkList Prev=NULL,Next,p=L->next;
	while(p!=NULL)
	{
		Next=p->next;
		p->next=Prev;
		Prev=p;
		p=Next;
	}
	L->next=Prev;
}


