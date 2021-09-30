/*
#include <stdexcept>
#include <iostream>
#include<unordered_set>

class Song
{
public:
    Song(std::string name) : name(name), nextSong(NULL) {}
    void next(Song* song)
    {
        this->nextSong = song;
    }

    bool isRepeatingPlaylist()
    {
        std::unordered_set<std::string> visited;
        Song *temp = this;
        while (temp->nextSong != nullptr) {
            if (visited.count(temp->name) != 0) {
                return true;
            }
            visited.insert(temp->name);
            temp = temp->nextSong;
        }
        return false;
    }


private:
    const std::string name;
    Song* nextSong;
};

#ifndef RunTests
int main()
{
    Song* first = new Song("Hello");
    Song* second = new Song("Eye of the tiger");
    Song* third = new Song("Shiba");

    first->next(second);
    second->next(third);

    std::cout << std::boolalpha << first->isRepeatingPlaylist();
}
#endif
*/