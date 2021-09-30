/*
#include <stdexcept>
#include <iostream>

class TrainComposition
{
public:
    TrainComposition() :_id() {
        _left = nullptr;
        _right = nullptr;
    }
    TrainComposition(int wagonId) :_id(wagonId) {
        _left = nullptr;
        _right = nullptr;
    }
    void attachWagonFromLeft(int wagonId)
    {
        if (this->_id == 0) {
            this->_id = wagonId;
        }
        else {
            TrainComposition* temp = this;
            while (temp->_left != nullptr) {
                temp = temp->_left;
            }
            auto tempWagon = new TrainComposition(wagonId);
            temp->_left = tempWagon;
            tempWagon->_right = temp;
        }
    }

    void attachWagonFromRight(int wagonId)
    {
        if (this->_id == 0) {
            this->_id = wagonId;
        }
        else {
            TrainComposition* temp = this;
            while (temp->_right != nullptr) {
                temp = temp->_right;
            }
            auto tempWagon = new TrainComposition(wagonId);
            temp->_right = tempWagon;
            tempWagon->_left = temp;
        }
    }

    int detachWagonFromLeft()
    {
        TrainComposition* temp = this;
        if (this->_left == nullptr) {
            return this->_id;
        }
        else {
            while (temp->_left != nullptr) {
                temp = temp->_left;
            }
            return temp->_id;
        }
    }

    int detachWagonFromRight()
    {
        TrainComposition* temp = this;
        if (this->_right == nullptr) {
            return this->_id;
        }
        else {
            while (temp->_right != nullptr) {
                temp = temp->_right;
            }
            return temp->_id;
        }
    }
private:
    int _id;
    TrainComposition *_left;
    TrainComposition *_right;

};

#ifndef RunTests
int main()
{
    TrainComposition train;
    train.attachWagonFromLeft(7);
    train.attachWagonFromLeft(13);
    train.attachWagonFromLeft(15);
    train.attachWagonFromRight(16);
    train.attachWagonFromLeft(19);
    train.attachWagonFromRight(10);
    std::cout << train.detachWagonFromRight() << "\n"; // 10 
    std::cout << train.detachWagonFromLeft(); // 19
}
#endif
*/