#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>

std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
{
    std::unordered_map<int, int> myMap;
    for(auto i: list){
        myMap[i] = sum - i;
    }
    for(auto i: myMap){
        auto iter = myMap.find(i.second);
        if (iter != myMap.end()){
            auto x = abs(distance(std::find(list.begin(), list.end(), i.first), list.begin()));
            auto y = abs(distance(std::find(list.begin(), list.end(), i.second), list.begin()));
            return std::make_pair(x, y);
        }
    }
    return std::make_pair(-1,-1);
}

#ifndef RunTests
int main()
{
    std::vector<int> list = {3, 1, 5, 7, 5, 9};
    std::pair<int, int> indices = findTwoSum(list, 10);
    std::cout << indices.first << '\n' << indices.second;
}
#endif