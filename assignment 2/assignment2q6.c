#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,radius,centre_abcissa,centre_ordinate;
	printf("enter the data for circle\n");
	scanf("%f%f%f",&a,&b,&c);
        radius=sqrt((a*a + b*b)/4 - c);
	centre_abcissa=-a/2;
	centre_ordinate=-b/2;
	printf("radius=%f\ncentre cordinate=(%f,%f)",radius,centre_abcissa,centre_ordinate);
}
