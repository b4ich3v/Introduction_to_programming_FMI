// Въвеждат се 5 цели числа - a,b,c,d, e. Разглеждаме полинома f(x) = a * x^4 + b * x^3 + c* x^2 + d * x + e. 
// Отпечатайте всички цели решения на f(x) >= 0 където x e в интервала [-100, 100]

#include <iostream>

int main()
{

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    std::cin >> a >> b >> c >> d >> e;

    for (int i = -100; i <= 100; i++)
    {

        int result = a * i * i * i * i +
            b * i * i * i +
            c * i * i +
            d * i +
            e;

        if (result >= 0)
        {

            std::cout << i << " ";

        }
           
    }

    return 0;

}
