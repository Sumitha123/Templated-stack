//
//  main.cpp
//  templated_stack
//
//  Created by Sumitha on 12/16/16.
//  Copyright © 2016 Sumitha. All rights reserved.
//

#include <iostream>
#include "templated_stack.h"
int main() {
    
Stack<int> s;
    //Pushing three elements on to the stack
    s.push(9);
    s.push(2);
    s.push(5);
    
    //Displays the elements in the stack
    s.display();
    
    //Popping three elements from the stack
    s.pop();
    s.pop();
    s.pop();
    
    //Trying to pop() when there is no element in the stack
    s.pop();
    
    //Trying to get the top when there is no element in the stack
    s.Top();
    
    //Implementing operator overloading
    Stack < int >	a,	b;
    a. push (1);
    a. push (2);
    b. push (3);
    b. push (4);
    Stack < int >c	=	a	+	b;
    
    //Displays the elements in the stack after a+b operation
    c.display();

}
