#include <vector>
#include <stdexcept>
#include <iostream>
#include <unordered_map>
#include <algorithm>

class Rare
{
public:
    static int nthMostRare(const std::vector<int>& elements, int n)
    {
        std::unordered_map<int, int> myMap;
        for (auto i: elements){
            if(myMap.find(i) != myMap.end()){
                myMap[i] ++;
            }else{
                myMap[i] = 1;
            }
        }
        std::vector<std::pair<int, int>> tmp;
        for (auto& i : myMap){
            tmp.push_back(i);
        }
        std::sort(tmp.begin(), tmp.end(), [=](std::pair<int, int>& a, std::pair<int, int>& b) { return a.second < b.second; });
        auto iter = tmp.begin();
        return (iter+n-1)->first;
    }
};

#ifndef RunTests
int main()
{
    std::vector<int> input;
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(5);
    input.push_back(4);
    input.push_back(5);

    int x = Rare::nthMostRare(input, 2);
    std::cout << x;
}
#endif