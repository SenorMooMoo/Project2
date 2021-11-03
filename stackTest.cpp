#include <iostream>
#include "Stack.h"
int main() {
    Stack stack;

    stack.push("321");
    stack.push("4");
    stack.push("521");
    stack.push("3");
    stack.push("50");

    stack.print();

    std::cout << (atoi(stack.pop()) == 50 ? "Passed pop function test" : "Failed pop function test") << std::endl;
    stack.pop();

    std::cout << (atoi(stack.top()) == 521 ? "Passed top function test" : "Failed top function test") << std::endl;
    std::cout << (stack.size() == 3 ? "Passed size function test" : "Failed size function test") << std::endl;

    stack.push("2");
    stack.push("3");
    std::cout << (stack.size() == 5 ? "Passed push function test" : "Failed push function test") << std::endl;

    return 0;
}
