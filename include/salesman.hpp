#ifndef SALESMAN_HPP
#define SALESMAN_HPP
#include ".\employee.hpp"
#include ".\message.hpp"
#include <iostream>

class salesman : public employee
{
private:
    string name;
    int salary;
    string workArea;   
    message m_message; 
public:
    salesman(string name, int salary, string workArea);
    ~salesman();
    void work();
    void showPersonalData();
    void getmessage(message* m_message);
};



#endif
