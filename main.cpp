#include <iostream>
#include ".\include\manager.hpp"
#include ".\include\CEO.hpp"
#include ".\include\salesman.hpp"
#include ".\include\company.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    employee* Personal[3];
    Personal[0] = new CEO("Juan Pablo", 500000, "Compras");
    Personal[1] = new manager("Victor", 300000, "Salon de ventas");
    Personal[2] = new salesman("Sergio", 150000, "Electrodomesticos");
    company* Empresa = new company("Casa Hogar", Personal[0], Personal[1], Personal[2]);
    Empresa->listEmployees;

    
    delete Personal[0];
    delete Personal[1];
    delete Personal[2];
    delete Empresa;
    getchar();
    return 0;
}

