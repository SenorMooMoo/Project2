#include <iostream>
#include "Stack.h"


int main(int argc, char *argv[]) {
    Stack stack;
    for(int i = 1; i < argc; i++){
        char* a = argv[i];
        stack.push(a);
    }
    stack.print();
    std::cout << stack.evaluate() << std::endl;
    return 0;
}
