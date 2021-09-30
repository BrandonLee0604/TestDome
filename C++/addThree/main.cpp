#include <vector>
#include <stdexcept>
#include <iostream>
#include <set>

class MovingTotal
{
public:
    MovingTotal(): myList({}), sumOfThree({}){}
    void append(const std::vector<int>& list)
    {
        for(auto i=0; i< list.size(); i++){
            myList.push_back(list[i]);
            auto len = myList.size();
            if (len >= 3){
                auto tempSum = myList[len-1] + myList[len-2] + myList[len-3];
                sumOfThree.insert(tempSum);
            }
        }
    }

    bool contains(int total)
    {
        return sumOfThree.find(total) != sumOfThree.end();
    }
private:
    std::set<int> sumOfThree;
    std::vector<int> myList;
};

#ifndef RunTests
int main()
{
    MovingTotal movingTotal;

    std::vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    movingTotal.append(first);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;

    std::vector<int> second;
    second.push_back(4);
    movingTotal.append(second);

    std::cout << movingTotal.contains(9) << std::endl;
}
#endif