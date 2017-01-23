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
    
    string a;
    
    cin >> a;
    
    
    if(a == "Hello World")
    {
        cout << "World: Hello" << endl;
    }
}

/* string FirstController :: helloWorld()
{
    string a;
    
    cin >> a;
    
    
    if(a == "Hello World")
    {
        cout << "World: Hello" << endl;
    }
    
    return 0;
}
*/
