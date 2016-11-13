#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int alldigits[6]={0,1,2,3,4,5}, possibledigitcombo[6][5], k=0, count=0;
long int temp;
//initia\lise possible digits
for(int i=0; i<6 ;i++)
{
cout<<"\n\ti: "<<i<<"\n possible: ";
for (int j=0; j<5; j++)
{ k=j+i;
if (k>5)
{
k=k-6;
}
possibledigitcombo[i][j]=alldigits[k];
cout<<possibledigitcombo[i][j];
}
}
for(i=0; i<6; i++)
{
	for(int n=0; n<5; n++)
	{
	temp=0;
for(int j=0; j<5; j++)
{
	k=0;
			k=j+n;
		if (k>4)
		{
			k-=5;
		}
		temp += pow (10, k)*(possibledigitcombo[i][j]);
	}
	cout<<"\ntemp: "<<temp;
	if (temp>9999 && temp<=99999 && temp%3==0)
	{
		count++;
		cout<<"\n number: "<<temp<<" count: "<<count;


	}
	}
}

}