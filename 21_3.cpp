#include <iostream>
#include <cstdlib>
#include <utility>



int main()
{
	setlocale(0, "");
	int m = 0, g = 1, f = 0,t=0;
	int a[100000] = { 0 }, c[100000] = { 0 };

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
	while (t==0)
	{
		std::cout << "2 - Удалить чётные, 1 - удалить нечётные: ";
		std::cin >> g;
		if (g == 1)
		{
			for (int i = 0;i < m;i++)
			{
				if (a[i] % 2 == 0)
				{
					c[f] = a[i];
					f++;
				}
			}
			break;
		}
		else if (g == 2)
		{
			for (int i = 0;i < m;i++)
			{
				if (a[i] % 2 != 0)
				{
					c[f] = a[i];
					f++;
				}
			}
			break;
		}
		else
		{
			std::cout << "Введена какая то некорректная фигня" << '\n';
			continue;
		}

		std::cout << '\n';
	}
	

	for (int i = 0;i < f;i++)
	{
		std::cout << c[i];
	}
	std::cout << '\n';

	system("pause");
	return 0;
}