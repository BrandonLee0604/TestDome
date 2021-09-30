#include <stdexcept>
#include <iostream>
#include <unordered_set>
#include <algorithm>

class Song
{
public:
    Song(std::string name): name(name), nextSong(NULL) {}

    void next(Song* song)
    {
        this->nextSong = song;
    }

    bool isRepeatingPlaylist()
    {
        std::unordered_set<std::string> songMap;
        Song* thisSong = this;
        while (thisSong != nullptr) {
            if (std::find(songMap.begin(), songMap.end(), thisSong->name) != songMap.end()) {
                return true;
            }
            songMap.emplace(thisSong->name);
            thisSong = thisSong->nextSong;
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

    first->next(second);
    second->next(first);

    std::cout << std::boolalpha << first->isRepeatingPlaylist();
}
#endif