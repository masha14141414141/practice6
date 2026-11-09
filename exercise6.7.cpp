#include <iostream>
int main()
{
int nBacteria;
int nAntibiotic;
int antiBacteria = 10;
std:: cout << "Введите количество бактерий: ";
std:: cin >> nBacteria;
std:: cout << "Введите количество антибиотика: ";
std:: cin >> nAntibiotic;

for(int hour=0; nBacteria >0; hour++)
{
    nBacteria=nBacteria*2;
    int killed = nAntibiotic * antiBacteria;
    nBacteria = nBacteria - killed;
if(nBacteria<0)
{
    nBacteria=0;
}
std:: cout << "После " << hour+1 << " бактерий осталось " << nBacteria << "\n";
antiBacteria--;
if(antiBacteria==0)
{
   std::cout << "Антибиотик прекратил свое действие.\n";
    break;
}
}
if(nBacteria==0)
{
    std:: cout<<"Все бактерии уничтожены. Человечество спасено";
}
else
{
    std:: cout << "Антибиотика больше нет, а бактерии есть. Необходимо больше";
}
}