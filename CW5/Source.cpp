#include<stdio.h> 
#include<locale.h> 
#include<iostream> 


void task2()
{

	setlocale(LC_ALL, "");

	int i, j, sum = 0, n, m, deg = 1;


	printf("������� n: ");
	scanf_s("%d", &n);

	printf("������� m: ");
	scanf_s("%d", &m);

	for (i = 1; i <= n; i++)
	{
		deg = 1;
		for (j = 1; j <= m; j++)
		{
			deg *= i;

		}
		sum += deg;
	}
	printf("Sum is %d\n", sum);
	system("pause");
}




void task3()
{

	setlocale(LC_ALL, "");
	int m = 1, a, s, sum;
	float b;

	s = 100000 + rand() % 200000;
	a = 20000;
	b = float(30000 + rand() % 50000);

	printf("���� ����������: %d\n", s);
	printf("���� ���������: %d\n", a);
	printf("���� ������� � ������ �����: %f\n", b);

	do
	{
		s = s + a - b;
		b = b * 1.03;
		m++;
	} while (s > 0);

	printf("���������� �������, ������� �� ������ ������� � ����� ������ ���������� = %d\n", m - 1);
	system("pause");
}


void task4()
{
	setlocale(LC_ALL, "");
	int n, m, i, sum = 0, k, l;

	printf("������� n < 9999: ");
	scanf_s("%d", &n);

	printf("������� ���������� ��������� ����, ������� ������ ������� m �� 1 �� 4: ");
	scanf_s("%d", &m);


	if (n >= 1 && n <= 9999 && m >= 1 && m <= 4)
	{
		for (i = 1; i <= m; i++)
		{
			k = pow(10, i);
			l = (n % k) / pow(10, i - 1);
			sum = sum + l;
		}
		printf("����� ��������� %d ���� %d = %d\n", m, n, sum);
	}
	else { printf("�� ����� ������������ �����\n"); }


	system("pause");
}


void task5()
{

	int n, i, k, l, sum = 0, m;


	for (i = 100; i <= 9999; i++)
	{
		sum = 0;
		for (n = 1; n <= 4; n++)
		{
			k = pow(10, n);
			l = (i % k) / pow(10, n - 1);
			if (i <= 999)
			{
				m = 3;
			}
			else { m = 4; }
			sum = sum + pow(l, m);
		}
		if (sum == i)
		{
			printf("%d - Armstrong number\n", i);
		}
	}


	system("pause");
}

void task6()
{
	int i, n, m, sum = 0;

	for (i = 1; i <= 1000; i++)
	{
		if (i % 7 == 0) { printf("%d ������ ����\n", i); }
		sum = 0;
		for (n = 1; n <= 4; n++)
		{
			m = pow(10, n);
			m = (i % m) / pow(10, n - 1);
			sum = sum + m;

		}
		if (sum % 7 == 0) { printf("����� ���� %d ������ ����\n", i); }
	}


	system("pause");
}

void task7()
{
	setlocale(LC_ALL, "");
	int a, ost, i = 0, cif = 0, b;

	printf("������� ����� � ������������ �������: ");
	scanf_s("%d", &a);
	b = a;

	do
	{
		ost = a % 8;
		a = a / 8;
		cif = pow(10, i) * ost + cif;
		i++;
	} while (a >= 8);

	cif = cif + a * pow(10, i);
	printf("%d � ������������ ������� - %d\n", b, cif);

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	}

	printf("������ ���������� 1 ��� 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}