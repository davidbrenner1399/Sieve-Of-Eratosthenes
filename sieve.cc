#include <iostream>
#include <set>
#include <iomanip>





using std::set;

const int NO_ITEMS = 16;
const int ITEM_W = 5;

const int MAX = 2000;


void sieve(set<int>& s, int n)
{

	//start at 2
	int m = 2;


	//filling set with digits 2 - n
	for(m; m <= n; ++m)
	{
		s.insert(m);
	}


	//have to set m back to 2 otherwise it won't work
	m = 2;


	//do this as long as m * m does not exceed value of n
	for(m; m * m <= n; ++m)
	{
		for(int k = m; k <=n; ++k) //every multiple of m that is  >= m 
		{
			s.erase(m*k);	//erase these multiples of m from the set
		}
	}

	//this will give us all the prime numbers
}

void print_primes(const set<int>& s)
{

	//start at the beginning of our set
	set<int>::iterator itr = s.begin();

	//index counter to tell us when to go to a new line
	int line_index = 0;

	for(itr; itr != s.end(); ++itr)	// do this until our itr reaches the end of the set
	{
		if(line_index % NO_ITEMS == 0 )	//if there are 16 items in a line, move to a new line
		{
			std::cout << std::endl;
		}

		//display the values on the line with 5 spaces in between and a space
		std::cout << std::setw(ITEM_W) << *itr << " ";


		//increase index counter
		++line_index;
	}


}

int
main()
{
	set<int> test;

	sieve(test,MAX);


	std::cout << "Upper limit for the set of primes: :";

	std::cout << std::endl;

	print_primes(test);

	std::cout << std::endl;


	return 0;
}