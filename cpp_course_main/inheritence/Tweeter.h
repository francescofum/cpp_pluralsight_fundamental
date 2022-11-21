#include "Person.h"

class Tweeter : public Person /* Tweeter obj will inherit from Person obj */
{
    private:
        std::string twitterhandle; 
    
    public:
        Tweeter(std::string first, std::string last, int id, std::string handle);
        ~Tweeter();
};