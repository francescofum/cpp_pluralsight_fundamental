#include "Tweeter.h"
#include <string>
using std::string;
#include <iostream>
using std::cout;

Tweeter::Tweeter(string first, string last, int id, string handle)
    :
    Person(first,last,id), twitterhandle(handle)
{
 cout << "Constructing tweeter " << twitterhandle << '\n';    
}

Tweeter::~Tweeter(void)
{
    cout << "destructing tweeter" << twitterhandle << '\n';
}