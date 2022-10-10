#include <iostream>
#include <vector>
using namespace std;

void main()
{

	int* ip = new int[12];
	for (int i = 0; i < 12; i++)
		ip[i] = 2 * i;

	vector<int> iv(12);
	for (int j = 0; j < iv.size(); ++j)
		iv[j] = 2 * j;
}

