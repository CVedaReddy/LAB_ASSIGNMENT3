#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three integers: ");
    scanf("%d%d%d", &a,&b,&c);
if (((a+b)>c) && ((b+c)>a) && ((c+a)> b))
{
    printf("The integers = %d %d %d  form  sides of a triangle", a,b,c);
}
else 
{
    printf("The integers= %d %d %d do not form sides of a triangle ",a,b,c);
}
return 0;
}