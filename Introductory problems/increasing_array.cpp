#include <iostream>
#include <cstdlib>

int main()
{
	unsigned long n, i;
	std::cin >> n;

	unsigned long arr[n];
	for(i=0; i<n; ++i) std::cin >> arr[i];

	unsigned long moves = 0;

	for(i=1; i<n; ++i)
	{
		if(arr[i] < arr[i-1])
		{
			moves += std::labs(arr[i-1] - arr[i]);
			arr[i] = arr[i-1];
		}
	}

	std::cout << moves << std::endl;

	return 0;
}