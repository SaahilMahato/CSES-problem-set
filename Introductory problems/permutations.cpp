#include <iostream>

int main()
{
    long n;
    std::cin >> n;

    if (n>1 && n < 4)
        std::cout << "NO SOLUTION" << std::endl;
    else
    {
        long i;
        if (n%2 != 0)
        {
            for (i=n-1; i>=2; i-=2)
                std::cout << i << " ";
            for (i=n; i>=1; i-=2)
                std::cout << i << " ";
        }
        else
        {
            for (i=2; i<=n; i+=2)
                std::cout << i << " ";
            for (i=1; i<=n-1; i+=2)
                std::cout << i << " ";
        }
    }
}