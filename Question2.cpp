#include <iostream>
#include <string>
using namespace std;

class charInput
{
public:
    string s = "";
    void add(char c)
    {
        s = s + (c);
    }
    std::string getValue()
    { 
        return s; 
    }
};

class numInput : public charInput
{
    public:
        string getValue()
        {
            return numInput::s;
        }

        void add(char e){
            if(e >= 'a' && e <= 'z')
            {
                return;
            }
            else
            {
                charInput::add(e);
            }
        }

};

int main()
{
    charInput *inputC = new charInput();
    numInput *inputN = new numInput();
    inputN->add('1');
    inputN->add('a');
    inputN->add('0');
    cout << inputN->getValue();
// the output should be 10
   
}
