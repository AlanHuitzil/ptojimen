#include <stdio.h>

int main(void)
{

int a=5;
int b=2;
int c=10;
int d=18;
//int v;
printf("\n\ta&&b=%d",a && b);

printf("\n\ta||b=%d",a || b);

printf("\n\t!a=%d",!a);

printf("\n\t!(a&&b=%d)",!(a&&b));

int v=!(a&&b);

printf("\n\tv=%d",v);

printf("\n\ta%y=%d",a%b);

c++;

printf("\n\tc=%d",c);

c--;

printf("\n\tc=%d",c);

c+=5;

printf("\n\tc=%d",c);

c-=5;

printf("\n\tc=%d",c);

c*=5;

printf("\n\tc=%d",c);

c/=5;

printf("\n\tc=%d",c);

c&=5;

printf("\n\tc=%d",c);



printf("\n\ta>b=%d",a>b);

printf("\n\ta>=b=%d",a>=b);

printf("\n\ta<b=%d",a<b);

printf("\n\ta<=b=%d",a<=b);

printf("\n\ta==b=%d",a==b);

printf("\n\ta!=b=%d",a!=b);
}

