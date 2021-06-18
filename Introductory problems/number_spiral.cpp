#include <iostream>

int main()
{
    unsigned long t, y, x;
    std::cin >> t;

    for (unsigned long i=0; i<t; ++i)
    {
        std::cin >> y >> x;
        
        if (x > y)
        {
            if (x%2 != 0)
                std::cout << x*x-y+1 << std::endl;
            else
                std::cout << (x-1)*(x-1)+y << std::endl;
        }
        else
        {
            if (y%2 == 0)
                std::cout << y*y-x+1 << std::endl;
            else
                std::cout << (y-1)*(y-1)+x << std::endl;
        }
    }


}