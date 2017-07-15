#include<stdio.h>
void function(char x ,char y )
{
    printf( "%c==>%c\n" ,x,y );
}
void hanoi(int n,char one ,char two ,char three )
{
    if(n == 1)function(one ,three);
        else {
            hanoi(n-1,one ,three , two );
            function(one ,three );
            hanoi(n-1, two ,one ,three);
        }
}
int count = 0;
int main()
{
    int n;
    printf("Please enter the number of discs:");
    scanf("%d",&n);
    hanoi(n,'a','b','c');
    
}