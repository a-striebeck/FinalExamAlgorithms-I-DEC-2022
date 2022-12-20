#ifndef CEO_HPP
#define CEO_HPP
#include ".\employee.hpp"
#include ".\message.hpp"
#include <iostream>

class CEO : public employee
{
private:
    string name;
    int salary;
    string workArea;
    message m_message;
public:
    
    CEO(string name, int salary, string workArea);
    ~CEO();
    void work();
    void showPersonalData();
    void getmessage(message* m_message);
    
};

#endif // CEO