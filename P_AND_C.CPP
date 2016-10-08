#include<iostream.h>
#include<math.h>
void main()
{
cout<<"\t permutations and combinations !\n";
int alldigits[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long int number=0;
int n=1;
for (int i=n; i<(n+7); i++)
{
cout<<"\n i is:"<<i<<"\n";
number += pow(10, (i-1))*alldigits[i];
}
cout<<number<<"\n";
if(number%9==0)
cout<<"\nyes";
else
cout<<"\n no";
}