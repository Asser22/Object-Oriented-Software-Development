#ifndef STRINGTOKENIZER_H
#define STRINGTOKENIZER_H

#include <string>
#include <iostream>
using namespace std;

class StringTokenizer
{
private:
    string userInput;

public:
    StringTokenizer()=default;
    StringTokenizer(string input);
    void numberOfLetter(string userInput);
    void numberOfWords(string userInput);
    void printReverse(string userInput);
    void printCapitalLetters(string userInput);
    bool isWordFound(string sentence, string word);
    void lookUpWord(string userInput);
    void stringTokenizer();

};

#endif
