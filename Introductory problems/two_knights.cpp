#include <iostream>

int main()
{
    unsigned long n;
    std::cin >> n;

    for (unsigned long i=1; i<=n; ++i)
    {
        unsigned long total_ways = i*i*(i*i-1)/2;
        unsigned long attack_ways = 4*(i-1)*(i-2);
        std::cout << total_ways-attack_ways << std::endl; 
    }
}