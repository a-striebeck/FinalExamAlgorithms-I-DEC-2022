#include "..\include\company.hpp"
#include <iostream>

company::company(string name){
    m_name = name;
};
company::~company(
   
);


void company::addCEO(int pos){
    
    string name, area;
    int sal;
    cout<<"Ingrese nombre: ";
    getline(name);
    cout<<"\n Ingrese sueldo: ";
    cin>>sal;
    cout<<"\n Ingrese Area asignada: "
    getline(area);
    m_employee[pos] = new CEO(name, sal, area);
    
};
void company::addManager(int pos){
    
    string name, area;
    int sal;
    cout<<"Ingrese nombre: ";
    getline(name);
    cout<<"\n Ingrese sueldo: ";
    cin>>sal;
    cout<<"\n Ingrese Area asignada: "
    getline(area);
    m_employee[pos] = new manager(name, sal, area);
    };
void company::addSalesman(int pos){
    int pos;
    string name, area;
    int sal;
    cout<<"Ingrese nombre: ";
    getline(name);
    cout<<"\n Ingrese sueldo: ";
    cin>>sal;
    cout<<"\n Ingrese Area asignada: "
    getline(area);
    m_employee[pos] = new salesman(name, sal, area);
}

void company::newMessage(string text){
    m_message.message(text);
}

void company::listEmployees(){

    cout << "A continuacion vera el listado de empleados y sus datos personales: \n";
    for (int i = 0; i < count; i++)
    {
      m_employee[i]->showPersonalData;
    }
    
    
};

void company::sendMessage(int pos){
    m_employee[pos]->getMessage(m_message);
}
void company::showEmployeesMessages(){
    cout<<"\n Estos son los mensajes de los empleados:";
    for (int i = 0; i < count; i++)
    {
        cout<< m_employee[i]-> // aca quiero invocar la funcion showMessage de la clase message que compone a la clase employee
    }
    
}

