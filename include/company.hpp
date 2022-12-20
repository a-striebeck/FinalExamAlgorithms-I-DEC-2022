#ifndef COMPANY_HPP
#define COMPANY_HPP
#include <iostream>
#include ".\CEO.hpp"
#include ".\employee.hpp"
#include ".\salesman.hpp"
#include ".\manager.hpp"

class company 
{
private:
    string m_name;
    employee* m_employee[];
    message* m_message[];
  
public:
    company(string name);
    ~company();
    void addCEO();
    void addManager();
    void addSalesman();
    void listEmployees();
    void newMessage(string text);
    void sendMessage();
    void showEmployeesMessages();

};

#endif