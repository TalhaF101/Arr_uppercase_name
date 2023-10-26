

#include <iostream>
using namespace std;

int main()

{
	char name[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter your name character " << i + 1 << " :";

		cin >> name[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
		{
			name[i] -= 32;
		}
		  cout << name[i];
	}

	  

	return 0;
}

