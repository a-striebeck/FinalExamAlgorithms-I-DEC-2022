#include "..\include\CEO.hpp"

using namespace std;

CEO::CEO (string name, int salary, string workArea)
{
    this-> name = name;
    this-> salary = salary;
    this-> workArea = workArea;
}

CEO::~CEO()
{}

  void CEO::showPersonalData(){
      cout <<"\n\t El nombre del Gerente es: " << name 
         <<"\n\t Su sueldo es de: $" << salary
         <<"\n\t Es el gerente del area de: " << workArea;   
  }

void getmessage(message* m_message){
    this->m_message = m_message;
};