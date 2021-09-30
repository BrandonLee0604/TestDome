#include <iostream>
#include <string>

class TextInput
{
public:
    TextInput(): value(""){}
    virtual void add(char c) {
        this->value += c;
    }

    std::string getValue() { return this->value; }
private:
    std::string value;
};

class NumericInput : public TextInput
{
    void add(char c){
        if (isdigit(c)){
            return TextInput::add(c);
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