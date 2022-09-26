#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Chian");

	const int SIZE = 5;
	int arr[SIZE];
	int temp;

	// Ввод массива数组输入
	for (int i = 0; i < SIZE; i++)
	{
		cout << "输入Введите " << i + 1 << " 数组元素элемент массива ";
		cin >> arr[i];
	}

	// Сортировка массива数组排序
	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE - j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	// Вывод массива数组输出
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;

	int midd, right, left, key;
	bool flag;
	left = 0;
	right = SIZE - 1;
	midd = 0;
	flag = true;

	cout << "输入搜索值：Введите значение для поиска: ";
	cin >> key;

	if (key >= arr[left] && key <= arr[right])
	{
		while (flag)
		{
			midd = (left + right) / 2;
			if (key < arr[midd])
			{
				right = midd - 1;
			}
			else if (key > arr[midd])
			{
				left = midd + 1;
			}
			else
			{
				cout << "找到搜索键，索引Искомый ключ найден, индекс" << midd;
				flag = false;
			}

			if (left > right)
			{
				cout << "未找到搜索的密钥Искомый ключ не найден";
				flag = false;
			}
		}
	}
	else
	{
		cout << "未找到搜索的密钥Искомый ключ не найден";
	}
}