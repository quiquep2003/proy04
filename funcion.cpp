// no es posible copiar a nano desde un PDF
#include<iostream>
using namespace std;

int funcion(int x, int y)
{
cout<<"Estamos en la funcion"<<endl;
return (x+y);
}

int main()
{
int z = funcion(5,7);
cout<<"resulttado "<<z<<endl;
cout<<"llamada a la funcion desde cout "<<funcion(5,7)<<endl;
return 0;
}

