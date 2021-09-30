/*
#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

Function 1
std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    if (list.size() < 2) {
        return std::make_pair(-1, -1);
    }
    for (auto i = 0; i < list.size(); ++i) {
        for (auto j = i + 1; j < list.size(); ++j) {
            if (list[i] + list[j] == sum) {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}
*/

/* Function 2 
std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::vector<int> temp = list;
    sort(temp.begin(), temp.end());
    int left = 0;
    int right = temp.size()-1;
    while (left < right) {
        if (temp[left] + temp[right] == sum) {
            return std::make_pair(left, right);
        }
        if (temp[left] + temp[right] < sum) {
            left++;
        }
        if (temp[left] + temp[right] > sum) {
            right--;
        }
    }
    return std::make_pair(-1, -1);
}


#ifndef RunTests
int main()
{
    std::vector<int> list = { 3, 1, 5, 7, 5, 9 };
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif
*/