#include "..\include\manager.hpp"


using namespace std;

manager::manager(string name, int salary, string workArea)
{
    this-> name = name;
    this-> salary = salary;
    this-> workArea = workArea;
}

manager::~manager()
{}

void manager::work(){
    cout<<"El encargado esta supervisando el salon";
}

void manager::showPersonalData(){
    cout <<"\n\t El nombre del encargado es: " << name 
         <<"\n\t Su sueldo es de: $" << salary
         <<"\n\t Su area a cargo es: " << workArea;   
          
           
}