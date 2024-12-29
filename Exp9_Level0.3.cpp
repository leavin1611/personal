#include<stdio.h>
int main ()
{
	struct score
	{
		unsigned int mat:5;
		unsigned int phy:5;
		unsigned int che:5;
        	unsigned int total:7;
		float avg;	
	}s;

s.mat=25;
s.phy=18;
s.che=28;
s.total=s.mat+s.phy+s.che;
s.avg=s.total/3.0;

printf("Entered scores\n");
printf("maths:%d\nphysics:%d\nchemistry:%d\n",s.mat,s.phy,s.che);
printf("Total;%d\n Average:%.2f",s.total,s.avg);
	
}
