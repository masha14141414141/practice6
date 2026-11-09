#include <iostream>
int main()
{
int height;
std:: cout << "Введите длину елочки: ";
std:: cin >> height;
for (int i = 1; i <= height; i++)
{
    for (int space = 1;space <= height - i;space++)
    {
        std:: cout << " ";
    }

    for (int count = 1; count <= (2 * i - 1); count++)
    {
        std:: cout << "#";
    }
    std:: cout << "\n";
}
}