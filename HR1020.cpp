#include<stdio.h>
int main()
{
//	printf("1904\n1908\n1912\n1916\n1920\n1924\n1928\n1932\n1936\n1940\n1944\n1948\n1952\n1956\n1960\n1964\n1968\n1972\n1976\n1980\n1984\n1988\n1992\n1996\n2000");
	for(int i=1900;i<=2000;i++)if(i%4==0&&i%100!=0||i%400==0)printf("%d\n",i);
}