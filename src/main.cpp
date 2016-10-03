/*
 * main.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: yangsen
 */

#include"header.hpp"

int main()
{
	LinkList L=new Node,p,new_Link;
	L->next=NULL;
	p=L;
	for(int i=0;i<4;i++)
	{
		p->next=new Node;
		p=p->next;
		cin>>p->val;
	}
	p->next=NULL;
	/*
    p=L->next;
	while(p!=NULL)
	{
		cout<<p->val<<endl;
		p=p->next;
	}
	*/
//	new_Link=reverse_by_stack(L);
//    p=new_Link->next;
	reverse_by_swap(L);
	p=L->next;
	while(p!=NULL)
	{
		cout<<p->val<<endl;
		p=p->next;
	}
	p=L;
	LinkList temp;
    while(p!=NULL)
    {
    	temp=p->next;
    	delete p;
    	p=temp;
    }
//	delete new_Link;
}


