#include <iostream>
int main()
{
int x = 10;
int y = 7;
std::string choice;
while(true)
{
     std:: cout << " Марсоход находится на позиции " << x << "," << y << " ,введите команду(W,S,A,D):";
std:: cin >> choice;
if(choice == "W" && y < 15)
{
    y+=1;
   
}

if(choice == "S" && y > 0)
{
    y-=1;
}

if(choice == "A" && x > 0)
{
    x-=1;
   
}

if(choice == "D" && x < 20)
{
    x+=1;
}



}















}