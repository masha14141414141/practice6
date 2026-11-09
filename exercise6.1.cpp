#include <iostream>
int main()
{
int supplyBuckwheat = 100;
int remainderBuckwheat;
std:: cout << "Всего гречки было на начало подсчёта: " << supplyBuckwheat << "\n";
for(int i = 0;  remainderBuckwheat>0; i++)
{
remainderBuckwheat = supplyBuckwheat - 4;
supplyBuckwheat= supplyBuckwheat - 4;
std:: cout << "После " << i+1 << " месяца у вас в запасе останется " << remainderBuckwheat << " кг гречки" << "\n";  
if(remainderBuckwheat==0)
{
    std:: cout << "После " << i + 1 << " месяца гречка закончится";
    break;
}

}













}