//
//  FirstController.cpp
//  FirstProjects
//
//  Created by White, Nicholas on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "FirstController.H"

using namespace std;

void FirstController :: start()
{
    cout << "Hello Universe!!!!" << endl;
    
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    
   // helloWorld();
    specialOutput();
    
}

void FirstController :: arrayController()
{
    this->stuffSize = 5;
    int array1[stuffSize];
    int array2[20];
}


void FirstController :: specialOutput()
{
    cout << "How old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "Oh, so you are " << yourAge << " years old!" << endl;
    
    string myName;
    cin.ignore();
    cout << "What is your name?" << endl;
    getline(cin, myName);
    cout << "Your name is: " << myName << endl;
    
    cout << "Type in your name and age" << endl;
    cin >> myName >> yourAge;
    cout << "You typed: " << myName << " and " << yourAge << endl;
    
}

void FirstController :: helloWorld()
{
    string input;
    string hi ("Hello World");
    
    cin >> input;
    
    
    if(input.compare(hi))
    {
        cout << "World: Hello" << endl;
    }
    else
    {
        cout << "WHY!" << endl;
    }
    
   
}

