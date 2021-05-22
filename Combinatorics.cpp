
// Combinatorics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Combinatorics.h"
#include "Datastruct.hpp"
#include <iostream>

using namespace std;

//constructor
Combs::Combs() 
{
	value = 1;
}

//Combs::~Combs(){delete value;}

	
int Combs::factorial(int a)
{
	value = 1;
	for (int i = a; i >= 1; i--)
	{
		value *= i;
	}
	//cout << value;
	return value;
}


int Combs::permutations(int a,int b)
{
	value = factorial(a) / factorial(a - b);
	return value;
}

int Combs::combination(int a, int b)
{
	value = permutations(a,b) / factorial(b);
	return value;
}

int Combs::multSet(int a,int b)
{
	//constexpr size_t size = b;
	cout << "check";
	int samples[1024] = {};
	for(int i=0;i<1024;i++){samples[i]=0;}
	List<int> list;
	//int* samples = new int[b] { 0 };
	int value;
	int remaining=0;
	for (int i = 0; i < b; i++)
	{

		cout << "Enter sample size" << '\n';
		cin >> value;
		samples[i] = value;
		list.prefix(combination(a,samples[i]));
		remaining += samples[i];
	}
	samples[b-1] = a - remaining;
	list.prefix(combination(a, samples[b-1]));
	list.printList();
	//list.listCreate(list);
	
	//list.itor()

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
