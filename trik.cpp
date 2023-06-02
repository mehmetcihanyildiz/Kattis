#include <iostream>
#include <string>
using namespace std;

int main()
{
	string moves;
	cin >> moves;
	int pos = 1;
	for (int i = 0; i < moves.length(); i++)
	{
		if (moves[i] == 'A')
		{
			if (pos == 1)
			{
				pos = 2;
			}
			else if (pos == 2)
			{
				pos = 1;
			}
		}
		else if (moves[i] == 'B')
		{
			if (pos == 2)
			{
				pos = 3;
			}
			else if (pos == 3)
			{
				pos = 2;
			}
		}
		else if (moves[i] == 'C')
		{
			if (pos == 1)
			{
				pos = 3;
			}
			else if (pos == 3)
			{
				pos = 1;
			}
		}
	}
	cout << pos << endl;
	return 0;
}