#include <stdio.h>
#include<conio.h> 
#include<locale.h> 
#include<stdlib.h> 
#include <math.h>

int main() 
{
	int x , y, rastoyanie;
	   
	   printf ("Vvedite x:");
	   scanf ("%d",&y);
	   
	   printf ("Vvedite y: ");
	   scanf ("%d", &y);
	   
	   rastoyanie = sqrt ( pow((-35 - x),2) + pow ((40 - y), 2));
	   printf ("rastoyanie ravno %d", rastoyanie);
	   system("pause");
	   
	   return 0;
	    
}
