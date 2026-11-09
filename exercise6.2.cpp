#include <iostream>
int main()
{
int water;
int milk;
int choice;
int amountAmericano=0;
int amountLatte=0;
std::cout<< "Введите количество воды в мл:";
std:: cin >> water;
while(water<0)
{
    std::cout<< "Введите неотрицательное количество воды в мл:";
std:: cin >> water;
}
std::cout<< "Введите количество молока в мл: ";
std:: cin >> milk;
while(milk<0)
{
    std::cout<< "Введите неотрицательное количество молока в мл:";
std:: cin >> milk;
}
while(true)
{
    if(water < 300 && (water<30 || milk < 270))
{
    std:: cout << "***Отчет****" << "\n";
std:: cout << "Ингредиентов осталось: " << "\n";
std:: cout << "Вода: " << water << " мл" << "\n";
std:: cout << "Молоко: " << milk << " мл" << "\n";
std:: cout << "Кружек американо приготовлено: " << amountAmericano << "\n";
std:: cout << "Кружек латте приготовлено: " << amountLatte << "\n";
break;
}
    std:: cout << "Выберите напиток (1 — американо, 2 — латте): " << "\n";
    std:: cin >> choice;
while(choice!=1 && choice!=2)
{
    std:: cout << "Выберите корректный диапазон";
    std:: cout << "Выберите напиток (1 — американо, 2 — латте): ";
std:: cin >> choice;    
}
if(choice==1)
{
    if(water>=300)
    {
water = water - 300;
amountAmericano++;
std:: cout << "Ваш напиток готов." << "\n";
    }
else
{
std:: cout << "Не хватает воды" << "\n";
}
}


if(choice==2)
{
if(water>=30 && milk >=270)
{
water = water - 30;
milk = milk - 270;
amountLatte++;
std:: cout << "Ваш напиток готов." << "\n";
}
else if(water<30)
{
std:: cout << "Не хватает воды" << "\n";
}
else
{
    std:: cout << "Не хватает молока" << "\n";
}
}
}
}

