#include <iostream>

int main()
{
	std::string dna;
	std::getline(std::cin, dna);

	unsigned long max_count = 1, cur_count = 1;

	for(unsigned long i=1; i<dna.length(); ++i)
	{
		if (dna[i] == dna[i-1])
		{
			++cur_count;
			if (cur_count > max_count) max_count = cur_count;
		}
		else
			cur_count = 1;
	}

	std::cout << max_count << std::endl;

	return 0;
}