#ifndef MANAGER_HPP
#define MANAGER_HPP
#include ".\employee.hpp"
#include ".\message.hpp"
#include <iostream>

class manager : public employee
{
private:
    string name;
    int salary;
    string workArea;    
    message m_message;
public:
    manager(string name, int salary, string workArea);
    ~manager();
    void work();
    void showPersonalData();
    void getmessage(message* m_message);
};

#endif 
