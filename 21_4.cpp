#include <iostream>
#include <cstdlib>
#include <utility>



int main()
{
	setlocale(0, "");
	int m = 0,  f = 0, f2 = 0, f3 = 0;
	int a[100000] = { 0 };

	std::cout << "M= ";
	std::cin >> m;



	for (int i = 0;i < m;i++)
	{
		a[i] = rand() % 9 + 1;
	}

	for (int i = 0;i < m;i++)
	{
		std::cout << a[i];
	}
	std::cout << '\n';

	for (int i = 0;i < m;i++)
	{
		if (a[i] % 2 == 0)
		{
			f++;
			if (f2 < f)
			{
				f2 = f;
			}
		}
		else
		{
			f = 0;
		}
	}

	for (int i = 0;i < m;i++)
	{
		if (a[i] % 2 == 0)
		{
			f+=a[i];
			if (f3 < f)
			{
				f3 = f;
			}
		}
		else
		{
			f = 0;
		}
	}


	std::cout << '\n';

	
	std::cout << f2 << '\n';
	std::cout << f3 << '\n';

	system("pause");
	return 0;
}