#include <vector>
#include <stdexcept>
#include <iostream>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    int lower, upper, middle;
    lower = 0;
    upper = sortedVector.size();
    while (lower < upper) {
        middle = (lower + upper) / 2;
        std::cout << middle << std::endl;
        if (sortedVector[middle] >= lessThan ){
            upper = middle - 1;
        } else {
            lower = middle + 1;
        }
    }
    return lower;
}

#ifndef RunTests
int main()
{
    std::vector<int> v { 1, 3, 5, 7 };
    std::cout << countNumbers(v, 4);
}
#endif