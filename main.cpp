#include <iostream>
using namespace std;

int main() {
	int random[2][3] = { { 1,2,3 },{ 7,8,9 } };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << random[i][j] << "";
		}
		cout << endl;
	}
}
