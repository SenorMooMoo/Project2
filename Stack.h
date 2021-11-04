//
// Created by timot on 11/1/2021.
//

#ifndef ASSIGNMENT4_STACK_H
#define ASSIGNMENT4_STACK_H

#include <vector>
#include <string>

class Stack{
private:
    std::vector<char*> stackData;

public:

    Stack()= default;
    //add to stack
    void push(char* data){
        stackData.push_back(data);
    }
    //remove and return top of stack
    char* pop(){
        char* data = stackData.at(stackData.size()-1);
        stackData.pop_back();
        return data;
    }
    //return size of stack
    int size(){
        return stackData.size();
    }
    //return top of stack but don't remove from stack
    char* top(){
        return stackData.at(stackData.size()-1);
    }

    //loop through stack and print contents
    void print(){
        for(char* i : stackData){
            std::cout << i << std::endl;
        }
    }
    //set the capacity of the stack only if it is larger
    void setCapacity(size_t capacity){
        if(stackData.capacity() < capacity){
            stackData.reserve(capacity);
        }
    }
    //solve RPN using this stack
    double evaluate(){
            //this char should always be an operation character because of notation
            char operation = *this->pop();

            //check if there is another operation and if so recursive call
            double operand1 = (!std::isdigit(*this->top())) ? evaluate() : atof(this->pop());
            double operand2 = (!std::isdigit(*this->top())) ? evaluate() : atof(this->pop());
            //convert char operation to operations
            switch (operation) {
                case '+' :
                    return operand2 + operand1;
                case '-':
                    return operand2 - operand1;
                case '*':
                    return operand2 * operand1;
                case '/':
                    return operand2 / operand1;
            }
    }

};

#endif //ASSIGNMENT4_STACK_H
