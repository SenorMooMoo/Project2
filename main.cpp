#include <iostream>
#include "Stack.h"


int main(int argc, char *argv[]) {
    //create stack
    Stack stack;
    //push arguments to stack
    for(int i = 1; i < argc; i++){
        char* a = argv[i];
        stack.push(a);
    }
    //show stack contents have been properly pushed
    stack.print();
    //evaluate stack
    std::cout << stack.evaluate() << std::endl;
    return 0;
}
