#include "Person.h"

using std::string; 
using std::cout;

int main(){

    Person p1("francesco", "fumagalli", 7);

    std::string name;
    name = p1.getName();

    cout<<name + "\n";
    
    int id;
    id = p1.getId();
    cout << id;

    {
        Person p2("Hello","World",6);
    }
}