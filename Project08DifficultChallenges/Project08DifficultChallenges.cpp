// Project08DifficultChallenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "User.h"

using namespace std;

void sayHi(); 
void userInfo(string n, int a);
int add(int x, int y);
int add(int& x, int& y, int& z);





/*
these functions works becaues it must be declared BEFORE it gets to the main program where it is being used.Othere wise there will be an error, much like having a .cpp file with out it's methods
being put at the top or a .h file and then declared with in the main .cpp file. 
*/

int main()
{
   
    //std::cout << "Hello World!\n";
    //string n = "Phillip";
    //string* ptrN = &n; //this is a pointer Variable, something that points to a data type of the same type and uses the * operator to create it. The pointer is created with a &


    //cout << "The string " + n + " is being stored at: " << &n << '\n';// this is how you get the memory position for something being stored also known as a pointer.
    //cout << ptrN << '\n'; //this uses the pointer variable, this reads in hexadecimal.
    //cout << *ptrN << '\n'; //this is how you get a Dereference from a pointer variable. it will read out Phillip, this is the orignal varriable.

    //sayHi();

    //cout << "Hey what's your full name? ";
    //string name;
    //getline(cin, name);
    //cout << "What is your age: ";
    //int age = 0;
    //cin >> age;

    //userInfo(name, age);

    //int n1 = 5;
    //int n2 = 6;
    //int n3 = 20;
    //
    //cout << '\n' << n1 << ", " << n2 << ", " << n3 << ", : n1 , n2 , n3";

    //cout << '\n' << add(n1, n2) << " : n1 and n2 together";

    //cout << '\n' << add(n1, n2, n3) << " : n1 n2 n3 togher and the reference number has changed.";

    //cout << '\n' << n1 << " " << n2 << " " << n3 << ", : n1 , n2 , n3";



    //User user1;
    //cout << '\n';
    //User user2;
   
    //userReport(user1);
    //cout << '\n';
    //userReport(user2);
    //cout << '\n';
    //user1.userNameChange();
    //cout << '\n';
    //userReport(user1);
    //return 0;

    /*Admin admin1;
    admin1.position = "Not the Owner";
    for (auto item : admin1.toolList) {
        cout << item;
        cout << '\n';
    }
    admin1.readDesktype();
    cout << '\n';
    cout << admin1.desk;
    admin1.userNameChange();
    */

    cout << '\n';
    cout << '\n';
    cout << "ok you need clearence higher than 25 to enter this next part. What is your clearance: ";
    try 
    {
        int clearance;
        cin >> clearance;
        if (clearance > 25) {
            cout << "Good, we can cary on to the secret secret stuff.";
        }

        else {
            throw(clearance);
        }

    }
    catch (int myclear) {
        cout << "Access denide you don't have the proper clearnce.\n";
        cout << "Clearance: " << myclear;
    }
    


}

void sayHi() {
    cout << "Hey you called the sayHi function.";
}

void userInfo(string n, int a) {
    cout << "Your user is now setup! Your name is " << n << " and your age is " << a;
}

int add(int x , int y) {
    int z = x + y;
    return z;
}

int add(int &x, int &y, int &z) {
    int a = add(x,y) + z;
    x = 15;
    y = 20;
    z = 50;

    return a;
}


