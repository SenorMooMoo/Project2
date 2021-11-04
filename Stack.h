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

    void push(char* data){
        stackData.push_back(data);
    }

    char* pop(){
        char* data = stackData.at(stackData.size()-1);
        stackData.pop_back();
        return data;
    }

    int size(){
        return stackData.size();
    }

    char* top(){
        return stackData.at(stackData.size()-1);
    }

    void print(){
        for(char* i : stackData){
            std::cout << i << std::endl;
        }
    }

    void setCapacity(size_t capacity){
        if(stackData.capacity() < capacity){
            stackData.reserve(capacity);
        }
    }

    double evaluate(){
            char operation = *this->pop();

            double operand1 = (!std::isdigit(*this->top())) ? evaluate() : atof(this->pop());
            double operand2 = (!std::isdigit(*this->top())) ? evaluate() : atof(this->pop());

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
