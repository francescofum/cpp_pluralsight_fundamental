#include <string>
#include <iostream>


class Person
{
    private:
        /* Private attributes */
        std::string firstname; 
        std::string lastname;
        int id; 

    public:
        /* Constructor */
        Person(std::string first, std::string last, int id);
        /* Deconstructor */
        ~Person();
        std::string getName(void);
        int getId(void);
        void setId(int newId);

};