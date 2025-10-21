#include <stdio.h>
int main()
{
    char A,B,C,D,a,b,d,c;
    printf("please enter an alplabet from A to D ");
    scanf("%c",&c);
    switch (c){
        case 'A': case 'a': printf("this stands for an apple");break;
        case 'B': case 'b': printf("this stands for a ball");break;
        case 'C': case 'c': printf("this stands for a cat");break;
        case 'D': case 'd': printf("this stands for a doll");
    }
    return 0;
}