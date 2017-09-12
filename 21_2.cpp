#include <iostream>
#include <cstdlib>
#include <utility>



int main()
{
	setlocale(0, "");
	int m = 0, n = 0, g = 0;
	int a[100000] = { 0 }, b[100000] = { 0 }, c[100] = { 0 };

	std::cout << "M= ";
	std::cin >> m;
	std::cout << "N= ";
	std::cin >> n;


	for (int i = 0;i < m;i++)
	{
		a[i] = rand() % 9 + 1;
	}
	for (int i = 0;i < n;i++)
	{
		b[i] = rand() % 9 + 1;
	}
	for (int i = 0;i < m;i++)
	{
		std::cout << a[i];
	}
	std::cout << '\n';
	for (int i = 0;i < n;i++)
	{
		std::cout << b[i];
	}

	for (int i = 0;i < m;i++)
	{
		int f = 0;
		for (int i2 = 0;i2 < n;i2++)
		{
			if (a[i] == b[i2])
			{
				f++;
			}
		}
		if (f == 0)
		{
			int f2 = 0;
			for (int i3 = 0;i3 <= g;i3++)
			{
				if (c[i3] == a[i])
				{
					f2++;
				}
			}
			if (f2 == 0)
			{
				c[g] = a[i];
				g++;
			}
		}
	}


	for (int i = 0;i < n;i++)
	{
		int f = 0;
		for (int i2 = 0;i2 < m;i2++)
		{
			if (b[i] == a[i2])
			{
				f++;
			}
		}
		if (f == 0)
		{
			int f2 = 0;
			for (int i3 = 0;i3 <= g;i3++)
			{
				if (c[i3] == b[i])
				{
					f2++;
				}
			}
			if (f2 == 0)
			{
				c[g] = b[i];
				g++;
			}
		}
	}

	std::cout << '\n';
	for (int i = 0;i < g;i++)
	{
		std::cout << c[i];
	}
	std::cout << '\n';

	system("pause");
	return 0;
}