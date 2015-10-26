#include <iostream>

int main()
{
	std::string word, prev_word, best_word;
	int rep_count = 0, highest_rep = 0;


	while(std::cin >> word)
	{
		if(prev_word == word)
		{
			++rep_count;
			if(rep_count >= highest_rep)
			{
				highest_rep = rep_count;
				best_word = word;
			}
		}
		else
		{
			prev_word = word;
			rep_count = 1;
		}

	}
	if(highest_rep > 1)
	{
		std::cout << "The most repeated word was: "
			  		<< best_word << " and it was repeated "
				  	  << highest_rep << " times" << std::endl;
	}
	else
	{
		std::cout << "There were no repeats" << std::endl;
	}

}
