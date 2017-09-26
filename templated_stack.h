//
//  Header.h
//  templated_stack
//
//  Created by Sumitha on 12/16/16.
//  Copyright © 2016 Sumitha. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <deque>
#include <stdexcept>
using namespace std;

template < class T> class Stack ;

template < class T>
Stack <T> operator +( const Stack <T> &stack1 , const Stack <T> &stack2)
{
    Stack<T> sum = stack1;
    
    for ( int i = 0; i < stack2.elements.size();i++) {
        sum.elements.push_back (stack2.elements[i]);
    }

    return sum ;
}


template <class T>
class Stack
{
private:
    int top;
    deque<T> elements;
public:
    
    Stack();
    void push(const T &x);
    void pop();
    T Top() const;
    bool Empty() const;
    void display();
    friend Stack <T> operator +<>( const Stack <T> &stack1 , const Stack <T> &
                                stack2);
};

template <class T>
Stack<T>::Stack()
{
    top = -1;
    
}

template <class T>
void Stack<T>::push(const T &x)
{
    top++;
    elements.push_back(x);
    
}
template <class T>
void Stack<T>::pop()
{
    try{
         if (Empty())
        {
            throw out_of_range("Stack underflow!");        }
        else
        {
            elements.pop_back();
            cout << "Popped elements : " << elements[top] << endl;
            top--;
        }
    }catch(exception const& e){
        cerr << "Exception: " << e.what() << endl;
    };
    
    
}
template <class T>
bool Stack<T>::Empty() const
{
    if (top == -1)
    {
        //Stack is empty
        return true;
    }
    else
    {
        //Stack is not empty
        return false;
    }
}
template <class T>
T Stack<T>::Top() const
{
    try{
        if (top == -1)
        {
            throw out_of_range("Empty stack");        }
        else
        {
            cout << "Top elements : " << elements[top] << endl;
            return elements[top];
                    }
    }catch(exception const& e){
        cerr << "Exception: " << e.what() << endl;
        return EXIT_FAILURE;
        }
}

template <class T>
void Stack<T>::display()
{
    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;
}


#endif /* Header_h */
