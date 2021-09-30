#include <string>
#include <stdexcept>
#include <iostream>

class Palindrome
{
public:
    static bool isPalindrome(const std::string& word)
    {
        auto first = 0;
        auto second = word.size()-1;
        while (first <= second) {
            if (tolower(word[first]) != tolower(word[second])){
                return false;
            }
            first++;
            second--;
        }
        return true;
    }
};

#ifndef RunTests
int main()
{
    std::cout << Palindrome::isPalindrome("Deleveled");
}
#endif