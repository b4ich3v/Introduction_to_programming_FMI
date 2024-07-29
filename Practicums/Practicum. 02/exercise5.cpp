#include <iostream>

int main() 
{
   
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    if (a > b)
    {
  
        int temp = a;
        a = b;
        b = temp;

    }
    if (b > c) 
    {

        int temp = b;
        b = c;
        c = temp;

    }
    if (a > b) 
    {
        
        int temp = a;
        a = b;
        b = temp;

    }

    std::cout << "Sorted numbers: " << a << " " << b << " " << c << std::endl;

    return 0;

}

