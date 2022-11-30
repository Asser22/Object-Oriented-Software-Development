#include "StringTokenizer.h"
#include <cmath>


void StringTokenizer::numberOfLetter(string userInput)
{
    int lettersNumber = userInput.length(); // using .length() to find the total number of letters
    cout << "\nThe total number of letters in the line is: " << lettersNumber << endl;
}

void StringTokenizer::numberOfWords(string userInput)
{
    int words = 0;
    // using for loop to go through each word and if there is a space, add 1 to the words variable to count number of words
    for (int i = 0; i < userInput.size(); i++)
    {
        if (userInput[i] == ' ')
            words++;
    }
    ++words; // final incrementation to count for the last word
    cout << "\nThe total number of words in this line is: " << words << endl;
}

void StringTokenizer::printReverse(string userInput)
{
    reverse(userInput.begin(), userInput.end()); // reverse() function reverse the string
    cout << "\nThe reverse of the line is: " << userInput;
}

void StringTokenizer::printCapitalLetters(string userInput)
{
    int totalLetters = userInput.length(); // getting total number of letters
    cout << endl;
    for (int i = 0; i < totalLetters; i++)
    { // go through each letters of the string
        if (isupper(userInput[i]))
        { // if there is a capital letter print it out
            cout << "\nThe Capital Letters Are: " << userInput[i];
        }
    }
}

bool StringTokenizer::isWordFound(string sentence, string word)
{
    string temp;
    stringstream string(sentence); // using stringstream to split the sentence
    while (string >> temp)
    { // compare the letters
        if (temp.compare(word) == 0)
        { // if same letters return true
            return true;
        }
    }
    return false;
}

void StringTokenizer::lookUpWord(string userInput)
{
    cout << "Enter a word you want to search for: ";
    string userWord;
    getline(cin, userWord);
    if (isWordFound(userInput, userWord))
        cout << "The word \"" << userWord << "\" is found in the sentence";
    else
        cout << "The word \"" << userWord << "\" is not found in the sentence";
}

void StringTokenizer::stringTokenizer()
{
    int userOption;
    string userInput;

    cout << "\nString Tokenizer\n"
            "   1. Read a full line of text from the user and analyze it.\n"
            "   2. Print the total number of letters in the line.\n"
            "   3. Print the total number of words in the line.\n"
            "   4. Print the line backwards.\n"
            "   5. Print all words that starts wtih capital letter.\n"
            "   6. Search for a word in line.\n";
    cout << "\nEnter your choice and press return: ";
    cin >> userOption;

    // using while loop to make sure the user puts in the correct data
    while (true)
    {
        if (userOption == 1)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfLetter(userInput);
            numberOfWords(userInput);
            printReverse(userInput);
            printCapitalLetters(userInput);
            break;
        }
        else if (userOption == 2)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfWords(userInput);
            break;
        }
        else if (userOption == 3)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            numberOfWords(userInput);
            break;
        }
        else if (userOption == 4)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            printReverse(userInput);
            break;
        }
        else if (userOption == 5)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            printCapitalLetters(userInput);
            break;
        }
        else if (userOption == 6)
        {
            cout << "Please enter a sentence: ";
            cin.ignore();
            getline(cin, userInput);
            lookUpWord(userInput);
            break;
        }
        else
        {
            cout << "INVALID INPUT!\n";
            cout << "Please input a valid option\n"
                    "Enter your choice from (1-6) and press return: ";
            cin >> userOption;
        }
    }
}
