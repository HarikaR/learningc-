#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
cout<<"\t permutations and combinations !\n";
int alldigits[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
long int number=0;
int possibleNumber[2][7];
// Initialize to 0
for(int j=0;j<2;j++){
for(int i=0;i<7;i++){
 possibleNumber[j][i] = 0;
}
}



for(j=0;j<7;j++){
	possibleNumber[0][j] = alldigits[j+1];
}
for(j=0;j<7;j++){
	possibleNumber[1][j] = alldigits[j+2];
}          f


for(j=0;j<2;j++){
number = 0;
for (int k=0; k<7; k++)
{
cout<<"\n possibleNumber is:"<<possibleNumber[j][k]<<"\n";
number += pow(10, (k))*possibleNumber[j][k];
}
cout<<number<<"\n";
if(number%9==0)
cout<<"\nyes";
else
cout<<"\n no";
}
}