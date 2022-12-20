#include "..\include\salesman.hpp"

using namespace std;

salesman::salesman(string name, int salary, string workArea)
{
    this-> name = name;
    this-> salary = salary;
    this-> workArea = workArea;
}

salesman::~salesman()
{
}

void salesman::work(){
    cout<<"El vendedor esta cerrando una compra";
}

void salesman::showPersonaData(){
     cout <<"\n\t El nombre del vendedor es: " << name 
         <<"\n\t Su sueldo es de: $" << salary
         <<"\n\t Es vendendor en el area de: " << workArea;   
}