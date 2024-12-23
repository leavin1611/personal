#include<stdio.h>
typedef float f;
typedef int i;
f rect(f l,f w)
{
	return l*w;
}

i main()
{

	f a,b;
	scanf("%f%f",&a,&b);
	printf("Area of Rectangle:%.2f square units",rect(a,b));
	
}