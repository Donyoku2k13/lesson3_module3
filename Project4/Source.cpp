#include<iostream> 
#include<stdio.h> 
#include<locale.h> 

void task1()
{
	int a, b;
	printf("×èñëî a: ");
	scanf_s("%d", &a);
	printf("×èñëî b: ");
	scanf_s("%d", &b);
	if (a == b)
	{
		printf("×èñëà ðàâíû \n");
	}
	else
	{
		printf("×èñëà íå ðàâíû\n");
		if (a > b)
		{
			printf("Ïåðâîå ÷èñëî: %d\n", b);
			printf("Âòîðîå ÷èñëî: %d\n", a);
		}
		else
		{
			printf("Ïåðâîå ÷èñëî: %d\n", a);
			printf("Âòîðîå ÷èñëî: %d\n", b);
		}
	}
}

void task2()
{
	int a, b, c, d, e, sr;
	printf("Îöåíêà 1:");
	scanf_s("%d", &a);
	printf("Îöåíêà 2:");
	scanf_s("%d", &b);
	printf("Îöåíêà 3:");
	scanf_s("%d", &c);
	printf("Îöåíêà 4:");
	scanf_s("%d", &d);
	printf("Îöåíêà 5:");
	scanf_s("%d", &e);
	sr = (a + b + c + d + e) / 5;
	printf("Ñðåäíèé áàë: %d\n", sr);
	if (sr >= 1 && sr < 4)
	{
		printf("Íå äîïóùåí ê ýêçàìåíó!\n");
	}
	else if (sr >= 4 && sr <= 5)
	{
		printf("Äîïóùåí ê ýêçàìåíó!\n");
	}
}
void task3()
{
	int a, b, c;
	int flag;
	printf("Ââåäèòå ïåðâîå ÷èñëî: ");
	scanf_s("%d", &a);
	printf("Ââåäèòå âòîðîå ÷èñëî: ");
	scanf_s("%d", &b);
	printf("Ââåäèòå íîìåð àðèôìåòè÷åñêîãî äåéñòâèÿ:\n1-ñëîæåíèå;\n2-âû÷èòàíèå;\n3-óìíîæåíèå;\n4-äåëåíèå;\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		c = a + b;
		printf("Èòîã àðèôìåòè÷åñêîãî äåéñòâèÿ: %d\n", c);
	}
	if (flag == 2)
	{
		c = a - b;
		printf("Èòîã àðèôìåòè÷åñêîãî äåéñòâèÿ: %d\n", c);
	}
	if (flag == 3)
	{
		c = a * b;
		printf("Èòîã àðèôìåòè÷åñêîãî äåéñòâèÿ: %d\n", c);
	}
	if (flag == 4)
	{
		c = a / b;
		printf("Èòîã àðèôìåòè÷åñêîãî äåéñòâèÿ: %d\n", c);
	}

}
void task4()
{
	int a;
	int flag;
start:
	printf("Ââåäèòå ÷èñëî: ");
	scanf_s("%d", &a);
	printf("Ââåäèòå ñòåïåíü,â êîòîðóþ õîòèòå âîçâåñòè: 0\n1\n2\n3\n4\n5\n6\n7\n");
	scanf_s("%d", &flag);
	if (flag == 0)
	{
		a = pow(a, 0);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 1)
	{
		a = pow(a, 1);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 2)
	{
		a = pow(a, 2);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 3)
	{
		a = pow(a, 3);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 4)
	{
		a = pow(a, 5);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 6)
	{
		a = pow(a, 6);
		printf("Èòîã: %d\n", a);
	}
	if (flag == 7)
	{
		a = pow(a, 7);
		printf("Èòîã: %d\n", a);
	}
}
void task5()
{
	int a, b, c, a1, b1, c1, s, need;
	printf("Êîëè÷åñòâî â ïåðâîé ìàðøðóòêå: ");
	scanf_s("%d", &a);
	printf("Êîëè÷åñòâî âî âòîðîé ìàðøðóòêå: ");
	scanf_s("%d", &b);
	printf("Êîëè÷åñòâî â òðåòüåé ìàðøðóòêå: ");
	scanf_s("%d", &c);
	if ((a + b + c) % 3 > 0)
	{
		printf("Íåâîçìîæíî ðàçäåëèòü!\n");
	}
	else
	{
		need = (a + b + c) / 3;
		printf("Ñðåäíåå êîëè÷åñòâî ëþäåé: %d\n", need);
		a1 = a - need;
		b1 = b - need;
		c1 = c - need;
		if (a1 > 0)
		{
			s = s + a1;
			printf("Êîëè÷åñòâî ïåðåñàæåííûõ ëþäåé: %d\n", s);
		}
		if (b1 > 0)
		{
			s = s + b1;
			printf("Êîëè÷åñòâî ïåðåñàæåííûõ ëþäåé: %d\n", s);
		}
		if (c1 > 0)
		{
			s = s + c1;
			printf("Êîëè÷åñòâî ïåðåñàæåííûõ ëþäåé: %d\n", s);
		}
	}
	need = (a + b + c) / 3;

}
int main()
{
	setlocale(LC_ALL, "");
	int flag;
	int task;
start:
	printf("Ââåäèòå íîìåð çàäàíèÿ:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{
		task1();
	}
	break;
	case 2:
	{
		task2();
	}
	break;
	case 3:
	{
		task3();
	}
	break;
	case 4:
	{
		task4();
	}
	break;
	case 5:
	{
		task5();
	}
	break;
	default:
		break;

	}
	printf("Õîòèòå ïðîäîëæèòü? 1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}