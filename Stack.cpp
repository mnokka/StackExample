/*
 * Stack.cpp
 *
 *  Created on: Sep 12, 2021
 *      Author: mika
 */

#include "Stack.h"

#include <iostream>
using namespace std;

Stack::Stack() {
   stackarray[MAXSIZE];
   topindex =0;
   cout << "Stack Constructor: Created stack" << endl;
   cout << "Stack Constructor: Data index:" << topindex << endl;
}

Stack::~Stack() {
	cout << "Stack destructor active" << endl;
}

void Stack::push (int i)	{
	cout << "Stack push: Adding item:" <<i << endl;
	stackarray[topindex]=i;
	topindex++;
	cout << "Stack push: New data index:" <<topindex << endl;
}

int Stack::pop() {
	int popped=stackarray[(topindex-1)];
	cout << "Stack pop: Popping item:" <<popped<< endl;
	topindex--;
	cout << "Stack pop: New data index:" <<topindex << endl;
	return popped;
}

void Stack::lister() {
	int i,datavalue;
	for (i=0; i<=(topindex-1); i=i+1 ) {
		datavalue=stackarray[i];
		cout << "Lister, stack item:"<<i<< " value:" << datavalue <<endl;
	}
}
