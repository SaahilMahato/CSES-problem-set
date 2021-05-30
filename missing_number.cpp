#include <iostream>

int main()
{
	unsigned long n;
	std::cin >> n;
	
	unsigned long i, temp, array_sum=0;
	for(i=0; i<n-1; ++i)
	{
		std::cin >> temp;
		array_sum += temp;
	}
		
	unsigned long sum = n*(n+1)/2;
	std::cout << sum - array_sum << std::endl;
	
	return 0;
}
