//
// Created by timot on 11/1/2021.
//

#ifndef ASSIGNMENT4_STACK_H
#define ASSIGNMENT4_STACK_H

#include <vector>

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

    double evaluate(){
        if(this->size() == 0) return 0;
        if(!std::isdigit(*this->top())){
            char operation = *this->pop();
            double operand1 = 0;
            double operand2 = 0;
            if(!std::isdigit(*this->top())){
                operand1 = evaluate();
            }
            else{
                operand1 = atof(this->pop());
            }
            if(!std::isdigit(*this->top())){
                operand2 = evaluate();
            } else{
                operand2 = atof(this->pop());
            }
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

    }

};

#endif //ASSIGNMENT4_STACK_H
