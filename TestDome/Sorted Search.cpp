/*
#include <vector>
#include <stdexcept>
#include <iostream>

int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
    auto res = 0;
    auto left = 0;
    auto right = sortedVector.size()-1;
    auto index = sortedVector.size() / 2;

    while (left <= right) {
        if (sortedVector[index] > lessThan) {
            right = index -1;
            index = (right + left) / 2;
        }
        else if (sortedVector[index] < lessThan) {
            if (sortedVector[index + 1] >= lessThan) {
                return index + 1;
            }
            else {
                left = index + 1;
                index = (right + left) / 2;
            }
        }
        else if (sortedVector[index] == lessThan) {
            return index;;
        }
    }
    return 0;
}


#ifndef RunTests
int main()
{
    std::vector<int> v{4, 5, 6};
    std::cout << countNumbers(v, 4);
}
#endif
*/