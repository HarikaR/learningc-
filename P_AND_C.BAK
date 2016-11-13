#include<iostream.h>
#include<conio.h>
#include<math.h>
int unitsvalue(long int number)
{
double returnValue = number % 10;
return returnValue;
}
void main()
{
long int count=0;
long int m;
clrscr();
cout<<"\t permutations and combinations !\n";
int alldigits[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long int const maxm=9;
long int number=0, s=0;

for(m=0;m<maxm;m++){
number = 0;
for(int j=0;j<7;j++){
s=unitsvalue(j+m+1);
number += pow(10, (6-j))*alldigits[s];
}
if(number%9==0 && number%1000000!=0)
{
cout<<number<<" yes\n";
count++;

}
}
cout<<" count is : "<<count<<"\n";
}
void maintest()
{
clrscr();
int s=0;
for(int i=20;i<31;i++){
s=unitsvalue(i);
cout<<" s is: "<<s<<"\n";
}
}