// Project4StringCompareWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //this link was needed to use getline()
using namespace std;


int main()
{
    string phrase1;
    string phrase2;
        
    cout << "I will now ask for 2 phrases, please give me your first work.\n";
    getline(cin, phrase1);

    cout << "Ok, please enter another phrase.\n";
    getline(cin, phrase2);


    if (phrase1.length() > phrase2.length())
    {
        cout << "\"" + phrase1 + "\"" + " is bigger than " + "\"" + phrase2 + "\"" << '\n';
    }

    if (phrase1.length() == phrase2.length())
    {
        cout << "\"" + phrase1 + "\"" + " and " + "\"" + phrase2 + "\"" + " are equal in length " << '\n';
    }

    if (phrase1.length() < phrase2.length())
    {
        cout << "\"" + phrase2 + "\"" + " is bigger than " + "\"" + phrase1 + "\"" << '\n';
    }
    


    return 0;
}
