
#include <iostream>
#include "Combinatorics.h"
using namespace std;

int number;
void menu()
{

	//typedef 
//	List<char> list;
	Combs combs;

	int proceed = 1;
	int choice;
	//char c = 'c';
	//char* ptr = &c;

	while (proceed != 0)
	{
		cout << "Choose a combinatorial function" << '\n';
		cout << "(1)Factorial (2)Permutation (3)Combination (4)Multiset" << '\n';
		cin >> choice;
		
		int set;
		int sample;

		switch (choice)
		{

		case 1:
			cout << "Choose your set size" << '\n';
			cin >> set;
			number = combs.factorial(set);
			cout << number << '\n';
			break;


		case 2:
			cout << "Choose your set size" << '\n';
			cin >> set;
			cout << "Choose your sample size" << '\n';
			cin >> sample;
			number = combs.permutations(set,sample);
			cout << number << '\n';
			break;

		case 3:
			cout << "Choose your set size" << '\n';		
			cin >> set;
			cout << "Choose your sample size" << '\n';
			cin >> sample;
			number = combs.combination(set,sample);
			cout << number << '\n';
			break;

		case 4:
			cout << "Choose your set size" << '\n';
			cin >> set;
			cout << "Choose the number of samples" << '\n';
			cin >> sample;
			number = combs.multSet(set,sample);
			cout << number << '\n';
			break;

		}
		cout << "Is there more?" << "(1)Yes/(0)No" << '\n';
		cin >> proceed;



	}

}



int main(int argc, char* argv[])
//int main()
{
	menu();

    return number;

}


// Combinatorics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
