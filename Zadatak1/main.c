#include <stdio.h>
int Calculation(int a, int b)
{
if(a > b)
return a - b;
else
return b - a;
}


int main()
{
int a = 6;
int b = 3;
int c;
c=Calculation(a,b);
printf("Result: %d\n", c);
return 0;
}
