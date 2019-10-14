#include <iostream>

int width = 5;
// copy initialization of value 5 into the variable width

int width_1( 5 );
/* direct initialization
 * cannot be used for all data types
 */

// For simple data types copy and direct initialization are mostly the same

int length{ 5 };
//uniform initialization (replacement for direct)

int main() {
    int length_1{};
    std::cin >> length_1;
}
//int length_1{};
//zero initialization (to value 0)
