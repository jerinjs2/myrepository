//============================================================================
// Name        : epsilon.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    long double eps;
    eps=1;
    long double x;
    while(1+eps>1)
    {
        x=eps;
        eps=eps/2;}
    eps=eps*2;
    cout << "The value of epsilon is"<< endl <<x; // prints EPSILON !!!!!
    return 0;
}
