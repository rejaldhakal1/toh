/* 
  NAME: REJAL DHAKAL
  ROLL NUMBER: 524
  PROGRAM : WAP to build tower of Hanoi

*/

#include<stdio.h>
void towers(int,char,char,char);

void main()
{
	int n;
	printf("Enter the number of disks\n");
	scanf("%d",&n);
	towers(n,'A','C','B');
}

void towers(int n, char frompeg,char toppeg,char auxpeg)
{
	if(n==1){
		printf("\n%s%c%s%c"," move disk 1 from peg ",frompeg," to peg ",toppeg);
		return;
	}
	
	towers(n-1,frompeg,auxpeg,toppeg);
	printf("\n%s%d%s%c%s%c"," move disk ",n," from peg ",frompeg," to peg ",toppeg);
   
    towers(n-1,auxpeg,toppeg,frompeg);

}
