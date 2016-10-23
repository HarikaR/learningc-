#include<iostream.h>
#include<conio.h>
#include<math.h>
int unitsvalue(int number)
{
double returnValue = number % 10;
return returnValue;
}
void main()
{
int count=0;
clrscr();
cout<<"\t permutations and combinations !\n";
int alldigits[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long int const maxm=100;//181440;
long int number=0, s=0;
int possibleNumber[maxm][7];
// Initialize to 0
for(int j=0;j<maxm;j++){
for(int i=0;i<7;i++){
 possibleNumber[j][i] = 0;
}
}


for(int m=0;m<maxm;m++){
for(j=0;j<7;j++){
s=unitsvalue(j+m+1);
	possibleNumber[m][j] = alldigits[s];
	//cout<<"\n possible number "<<m<<" "<<j<<"--> "<<possibleNumber[m][j];
}
}
cout<<"m is: "<<m<<"\n";
for(j=0;j<maxm;j++){
number = 0;
for (int k=6; k>=0; k--)
{
number += pow(10, (k))*possibleNumber[j][6-k];
}
if(number%9==0 && number%1000000!=0)
{
cout<<number<<" yes\n";
count++;

}
//else
//cout<<number<<" no\n";
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