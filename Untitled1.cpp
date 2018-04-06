#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int radio;
    int areaCirculo;
    cout<<"Ingrese el area del circulo:"<<endl;
    cin>>radio;
    areaCirculo=(3.1416*pow(radio,2));
    cout<<"el area es:"<<areaCirculo<<endl;
    return 0;
}
