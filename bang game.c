
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{int a,p,h,la=0,m=0,b,i=0,v2,v1,c,d,k,e,p1,p3,p4,p2,count=0;
char l[120][15],t[1][20],
player1[1][20],player2[1][20];
for(a=65;a<70;a++)
for(b=65;b<70;b++)
for(c=65;c<70;c++)
for(d=65;d<70;d++)
for(e=65;e<70;e++)
{if((e!=d)&&(e!=c)&&(e!=b)&&(e!=a)&&(d!=c)&&(d!=b)&&(d!=a)&&(c!=b)&&(c!=a)&&(b!=a))
{
l[i][0]=a;
l[i][1]=b;
l[i][2]=c;
l[i][3]=d;
l[i][4]=e;
l[i][5]='\0';
i++;
}
}
system("COLOR 5C");
printf(" PLAYER 1:ENTER TWO NUMBERS \t");
scanf("%d %d",&p1,&p2);
strcat(l[p1],l[p2]);
strcpy(player1[1],l[p1]);
printf("\n PLAYER 1:\t%s\n",player1[1]);
printf("\n PLAYER 2 :ENTER TWO NUMBERS \t ");
scanf("%d %d",&p3,&p4);
strcat(l[p3],l[p4]);
strcpy(player2[1],l[p3]);
printf("\n PLAYER 2:\t %s\n",player2[1]);
printf("\n \t \t \t \t \t \t GAME STARTS \t \t \t \t \t  \n");
for(m=0;(player1[1][0]!=NULL)&&(player2[1][0]!=NULL);)
{
printf("\n  ENTER PLAYER 1:\t");
scanf("%d",&v1);
t[1][m]=player1[1][v1];
for(h=v1;h<10;h++)
player1[1][h]=player1[1][h+1];
printf("\n PLAYER 1: %s",player1[1]);
m++;
while((player1[1][0]!=NULL)&(player2[1][0]!=NULL))
{
 printf("\n ENTER PLAYER 2:\t");
scanf("%d",&v2);
t[1][m]=player2[1][v2];
for(h=v2;h<10;h++)
player2[1][h]=player2[1][h+1];
 printf("\n PLAYER 2:%s",player2[1]);
if(t[1][m]==t[1][m-1])
{m++;
printf("\n ENTER  PLAYER 2 :\t");
scanf("%d",&v2);
t[1][m]=player2[1][v2];
for(h=v2;h<10;h++)
player2[1][h]=player2[1][h+1];
 printf("\n PLAYER 2 :%s",player2[1]);
}m++;
printf("\n ENTER PLAYER 1:\n");
scanf("%d",&v1);
t[1][m]=player1[1][v1];
for(h=v1;h<10;h++)
player1[1][h]=player1[1][h+1];
printf("\n PLAYER 1 :%s",player1[1]);
if(t[1][m]==t[1][m-1])
{
m++;
printf("\n ENTER PLAYER 1:\t");
scanf("%d",&v1);
t[1][m]=player1[1][v1];
for(h=v1;h<10;h++)
player1[1][h]=player1[1][h+1];
}m++;
}
}
if(player1[1][0]==NULL)
printf("\n \t \t \t \t \tCONGRATULATIONS !!PLAYER 1 WINS");
else
{
printf("\n \t \t \t \t \t  CONGRATULATIONS !! PLAYER 2 WINS");}
getch();}
