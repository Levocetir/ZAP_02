#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

void main() {

	////pr 1
	//int i = 1, j = 1;

	//j == j && (i = 2);
	//printf("%d \n", j);
	//j = 0;

	//j = j && (i == 3);
	//printf("%d \n", j);
	//j = 0;

	//j = j || (i / 2);
	//printf("%d \n", j);
	//j = 0;

	//j = !j && (i = i + 1);
	//printf("%d \n", j);



	////pr 2
	//int cislo1;
	//scanf("%d", &cislo1);

	//int cislo2;
	//scanf("%d", &cislo2);

	//int vysledek;

	//vysledek = (cislo1 > cislo2) ? printf("Vetsi cislo: %d \n", vysledek) : printf("Mensi cislo: %d \n", vysledek);

	//printf("%d \n", j);


	//pr 3
	//int i = 5;
	//printf("%d\n", i == 8);
	//printf("%d\n", i = 8);
	//printf("%d\n", i == 8);

	//pr 4

	//int i, c1, c2;
	//printf("Hexa cislo:\n");

	//c1 = getchar();
	//c2 = getchar();

	//if (c1 >= '0' && c1<= '9')
	//{
	//	i = 16 * (c1 - '0');
	//}
	//else
	//{
	//	i = 16 * (c1 - 'A' + 0xA);
	//}

	//if (c1 >= '0' && c1 <= '9')
	//{
	//	i = 16 * (c1 - '0');
	//}
	//else
	//{
	//	i = 16 * (c1 - 'A' + 0xA);
	//}

	//printf("dek hodnota: %d", i);


	//pr 5
	//int c;
	//c = getchar();
	//
	//if (c1 >= '0' && c1 <= '9')
	//	printf("cislice: '%c'", c)


	//pr 6

	//int i, j;
	//i = 4;
	//j = 1;

	//printf("podminka i == 5 || ++j == 3\n");
	//printf("i = %d j = %d \n", i, j);

	//if (i == 5 || ++j == 3)
	//{
	//	printf("platna");
	//}
	//else
	//{
	//	printf("NEplatna");
	//}

	//pr 7

	//double x, y, z, max;
	//printf("nacti 3 cisla: ");
	//scanf("%lf %lf %lf", &x, &y, &z);

	//if (x > z)
	//{
	//	if (x > z)
	//	{
	//		max = x;
	//	}
	//	else
	//	{
	//		max = z;
	//	}
	//}
	//else
	//{
	//	if (y < z)
	//	{
	//		max = z;
	//	}
	//	else
	//	{
	//		max = y;
	//	}
	//}
	//printf("nejvetsi cislo: %lf", max);

	//pr 8
	//int c, mala = 0, velka = 0;
	//
	//printf("Znak:");
	//
	//while ((c = getchar()) != '\n')
	//{
	//	if (c >= 'A' && c <= 'Z')
	//	{
	//		velka++;
	//	}
	//	if (c >= 'a' && c <= 'z')
	//	{
	//		mala++;
	//	}	
	//}
	//	printf("%d\n%d", mala, velka);

	//pr 9

	//int var;
	//do
	//{
	//	printf("cislo:\n");
	//	scanf("%u", &var);
	//	printf("\ndruha mocnina: %d\n", var * var);
	//} while (var != 15);

	//pr 10

	//int n, i, j;
	//int interval = 0;

	//printf("pocet cisel:\n");
	//scanf("%d", &n);

	//for (i = 1; i <= n; i++)
	//{
	//	printf("Zadej %d cisel:\n", i);
	//	scanf("%d", &j);
	//	if (j >= 25 && j <= 38)
	//	{
	//		interval++;
	//	}
	//}
	//printf("cisel v int 25;38 bylo: %d\n", interval);
	//printf("cisel bylo: %d", n);

	//pr 11	break continue NUDA
	
	//pr 12

	//pr 13
	//int i;
	//printf("cislo 1 - 5:\n");
	//scanf("%d", &i);

	//switch (i)
	//{
	//case 1:
	//	printf("jedna");
	//	break;
	//case 2:
	//	printf("dva");
	//	break;
	//case 3:
	//	printf("tri");
	//	break;
	//case 4:
	//	printf("ctyri");
	//	break;
	//case 5:
	//	printf("pet");
	//	break;
	//default:
	//	printf("chyba");
	//}
	
	
	
	return 0;
}