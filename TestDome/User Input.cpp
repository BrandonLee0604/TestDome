#include <iostream>
#include <string>

/*
class TextInput
{
public:
    TextInput() : _input() {}

    void virtual add(char c) {
        _input = _input + c;
    }

    std::string getValue() { 
        return _input; 
    }
private:
    std::string _input;
};

class NumericInput : public TextInput 
{
public:
    NumericInput() : TextInput() {}
    void add(char c) {
        if (isdigit(c) != 0) {
            TextInput::add(c);
        }
        else {
            return;
        }
    }
};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif
*/