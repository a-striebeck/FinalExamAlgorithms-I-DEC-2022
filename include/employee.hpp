#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class employee
{
    
public:
    employee();
    ~employee();
    virtual void work() = 0;
    virtual void showPersonalData() = 0;
    virtual void getmessage() = 0;
    
   


};
employee::employee(){}
employee::~employee(){}

#endif