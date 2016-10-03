/*
 * header.hpp
 *
 *  Created on: Oct 2, 2016
 *      Author: yangsen
 */

#ifndef HEADER_HPP_
#define HEADER_HPP_
#include<iostream>
using namespace std;

typedef struct Node{
	int val;
	Node * next;
}* LinkList;

LinkList reverse_by_stack(LinkList L);
void reverse_by_swap(LinkList L);

#endif /* HEADER_HPP_ */
