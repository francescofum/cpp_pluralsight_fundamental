
#include "Tweeter.h"

using std::string; 
using std::cout;

int main(){

    Person p1("francesco", "fumagalli", 7);
    {
        Tweeter t1("Antonia","Lawes",123,"@AL");
        string name2 = t1.getName();
    }

}