#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Chian");

	const int SIZE = 5;
	int arr[SIZE];
	int temp;

	// ���ӧ�� �ާѧ��ڧӧ���������
	for (int i = 0; i < SIZE; i++)
	{
		cout << "���맣�ӧ֧էڧ�� " << i + 1 << " ����Ԫ�ا�ݧ֧ާ֧ߧ� �ާѧ��ڧӧ� ";
		cin >> arr[i];
	}

	// ������ڧ��ӧܧ� �ާѧ��ڧӧ���������
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

	// ����ӧ�� �ާѧ��ڧӧ��������
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

	cout << "��������ֵ�����ӧ֧էڧ�� �٧ߧѧ�֧ߧڧ� �էݧ� ���ڧ�ܧ�: ";
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
				cout << "�ҵ�����������������ܧ�ާ�� �ܧݧ�� �ߧѧۧէ֧�, �ڧߧէ֧ܧ�" << midd;
				flag = false;
			}

			if (left > right)
			{
				cout << "δ�ҵ���������Կ����ܧ�ާ�� �ܧݧ�� �ߧ� �ߧѧۧէ֧�";
				flag = false;
			}
		}
	}
	else
	{
		cout << "δ�ҵ���������Կ����ܧ�ާ�� �ܧݧ�� �ߧ� �ߧѧۧէ֧�";
	}
}