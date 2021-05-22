#ifndef COMBINATORICS_H
#define COMBINATORICS_H



class Combs
{


public:

	Combs();
	//~Combs();
	
	int factorial(int a);

	int combination(int a, int b);

	int permutations(int a, int b);

//	void multSet(int a, int b);

	int multSet(int a,int b);

private:
	int value;
};


#endif // !1
