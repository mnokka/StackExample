/*
 * Stacker.cpp
 *
 *  Created on: Sep 12, 2021
 *      Author: mika
 */



#include <iostream>
using namespace std;

#include "Stack.h"

int main() {
	cout << "*** Stack object demo starts ***" << endl;
	Stack s;
	s.push(42);
	s.push(111);
	s.push(7);
	s.lister();

	int popped=s.pop();
	cout << "Main pop: got item:" <<popped<< endl;
	s.lister();

	return 0;
}

