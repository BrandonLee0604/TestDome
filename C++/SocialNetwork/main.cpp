#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
#include <set>
#include <algorithm>

class Friend
{
public:
    std::vector<Friend*> friends;

    Friend(std::string email)
    {
        this->email = email;
    }

    void addFriendship(Friend* target)
    {
        friends.push_back(target);
        target->friends.push_back(this);
        for(auto myfriend: friends){
            target->network.insert(myfriend);
            target->network.insert(this);
        }
        for(auto myfriend: target->friends){
            network.insert(myfriend);
            network.insert(target);
        }
    }

    bool canBeConnected(Friend* target)
    {
        for (auto f1: friends){
            if (find(target->friends.begin(), target->friends.end(), f1) != target->friends.end()){
                return true;
            }
        }
        for (auto f2: target->friends){
            if (find(friends.begin(), friends.end(), f2) != friends.end()){
                return true;
            }
        }
        return false;
    }

private:
    std::string email;
    std::set<Friend*> network;
};

#ifndef RunTests
int main()
{
    Friend a("A");
    Friend b("B");
    Friend c("C");

    a.addFriendship(&b);
    //b.addFriendship(&c);

    std::cout << a.canBeConnected(&c);
}
#endif