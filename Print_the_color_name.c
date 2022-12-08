#include<stdio.h>
int cn(char a)
{
    switch (a)
    {
        case 'V':
        return 1; 
        break;
        case 'I':
        return 2;
        break;
        case 'B':
        return 3;
        break;
        case 'G':
        return 4;
        break;
        case 'Y':
        return 5;
        break;
        case 'O':
        return 6;
        break;
        case 'R':
        return 7;
        break;
        default :
        return 8;
    }
}
int main () {
    char a;
    int k;
    scanf("%c",&a);
    k=cn(a);
    if (k==1)
    printf("Violet");
    if (k==2)
    printf("Indigo");
    if (k==3)
    printf("Blue");
    if (k==4)
    printf("Green");
    if (k==5)
    printf("Yellow");
    if (k==6)
    printf("Orange");
    if (k==7)
    printf("Red");
    if (k==8)
    printf("-1");
}