#include <iostream>

/*

Put a breakpoint at line int a;.

Single step 3 lines, and check the value of variable a.

Then, single step 2 more lines, and again check the value of a.

Continue execution till debugging is terminated (after return 0; line).

Commit your changes to your repository.

Submit your code for grading.

Check the grader feedback you receive*/

// the main function
int main(){
    int a;
    std::cout << "Hello there!" << std::endl;

    a = 12;
    std::cout << "a=" << a << std::endl;

    a = 13;
    std::cout << "a=" << a << std::endl;
    return 0;
}