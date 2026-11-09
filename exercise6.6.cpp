#include <iostream>
int main()
{
int lengthColontitule;
int lengthExclamatory;
std:: cout << "Введите общую длину колонтитула: ";
std:: cin >>lengthColontitule;
while(lengthColontitule<=0)
{
    std:: cout << "Длина должна быть больше нуля: ";
    std:: cin >>lengthColontitule;
}
std:: cout << "Введите количество восклицательных знаков: ";
std:: cin >> lengthExclamatory;
while(lengthExclamatory<=0)
{
    std:: cout << "Количество восклицательных знаков должно быть больше нуля: ";
    std:: cin >>lengthExclamatory;
}
while(lengthExclamatory>lengthColontitule)
{
     std:: cout << "Количество восклицательных знаков не должно быть больше длины колонтитула: ";
    std:: cin >>lengthColontitule;
std:: cin >>lengthExclamatory;
}
int gaps = lengthColontitule - lengthExclamatory;
int leftIndent = gaps/2;
int rightIndent = gaps - leftIndent;
for(int i=0; i<leftIndent;i++)
{
    std:: cout << "~";
}
for(int i=0; i<lengthExclamatory;i++)
{
    std:: cout << "!";
}

for(int i=0; i<rightIndent;i++)
{
    std:: cout << "~";
}

std:: cout << "\n";




}