// Project06VariablesChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::to_string;
using std::getline;


char me = 'P', wife = 'G';
string name = "Phil", daughter = "Elena", result;

int num = 26, num2 = 5;
double a = 1.0, b = 2.0, c=3.5;
float f =11.0, n=0.0 , m;
bool firstTime = true, Iknow = false;

int const deadAt = 86;

int main()
{

    cout << "Hello world\n";
    cout << "Pleaes type your name\n";
    
    cin >> name;

    cout << "Hey " << name << ", nice to see you again.\n";

    cout << "So I need a number between 1 - 10, can you give me one please.\n";

    cin >> f;

    while (f < 0.0 || f > 10.0) {
        cout << "Nope, that's not what I asked for, please try again: ";
        cin >> f;
    }


    result = "Perfect " + name + "! " + to_string(f) + " is exactly what I'm looking for\n";

    cout << result;

    cout << "that last sentce was " << result.length() << " character long\n";

    cout << "the third character in your name is: " << name[2] << '\n';
    
    name[0] = 'M';

    cout << "But now we will now chage the first letter of your name to M which reads: " << name << '\n';

    cout << "Ok, so I'm going to need another number:";
    cin >> n;
    cout << "lets add! \n "<< n << " + 8 = ";
    m = n + 8.0;
    cout << m << '\n';

    cout << "alright, another number:";
    cin >> n;
    cout << "lets subtract! \n " << n << " - 21 = ";
    m = n - 21.0;
    cout << m << '\n';

    cout << "alright, another number:";
    cin >> n;
    cout << "lets multiply \n " << n << " x 27 = ";
    m = n * 27.0;
    cout << m << '\n';

    cout << "alright, another number:";
    cin >> n;
    cout << "lets divide \n " << n << " / 3 = ";
    m = n /3.0;
    cout << m << '\n';


    cout << "alright, another number:";
    cin >> n;
    cout << "lets count up 20 positions from your number\n";
    m = n;
    while (m <= n+20) {
        cout << m << '\n';
        m++; 
        if (m == n + 11) 
        {
            cout << "we have made up 10 places\n";
        }
        if(m > n + 15 && firstTime)
        {
            cout << "we are past 15 places.\n";
            firstTime = false;
        }
        if (m != n) {
            cout << "+1 \n";
        }
    }


    cout << "Awesome! Hey guess what " << name <<"\n I'm going to need, ANOTHER NUMBER!";
    cin >> n;

    m = n;
    cout << "\"n\":" << n << " is now the same as \"m\":" << m << '\n';
    m += n;
    cout << "now we added them together to get " << m << '\n';
    
    num &= 3;
    cout << num << " Here we used the bitwise Operator on the numbers 26 and 3" << '\n';

    num2 <<= 2;
    
    cout << num2 << " here we used the bitshift left to move the number five 2 place in the left." << '\n'; 

    
    cout << '\n';
    cout << "More numbers please\n";
    float newNum = 0.0;
    cin >> newNum;
    if (newNum > 0 && newNum <= 100) {
        cout << "You picked a number between 1-100!\n";
        Iknow = true;
    }
    else if (newNum < 0 || newNum >100) {
        "Hmm your number is out of my range\n";
    }
    
    if (!Iknow) {
        "I'll have to widden my range next time";
    } 

    /* I needed to write some
    multi lined comments*/
    
    cin.ignore();
    string phrase;
    cout << "Please type in a phrase for me\n";
    //cin >> phrase;
    getline (cin, phrase);
    cout << "the phrase you gave me \n\"" << phrase << "\"\nHas " << phrase.length() << " characters in it";

    








   



    return 0;
}
