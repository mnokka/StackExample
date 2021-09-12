/*
 * Stack.h
 *
 *  Created on: Sep 12, 2021
 *      Author: mika
 */

#ifndef STACK_H_
#define STACK_H_

#define MAXSIZE 50 //

class Stack {


public:
	Stack();
	virtual ~Stack();
	void push(int i);
	int pop();
	void lister();

private:
	int stackarray[MAXSIZE];
	int topindex=0;
};


#endif /* STACK_H_ */
