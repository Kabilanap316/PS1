#include<stdio.h>
int main()
{
    int length,width,height,surfacearea;
    scanf("%d%d%d",&length,&width,&height);
    surfacearea=2*(width*length+length*height+height*width);
    printf("%d",&surfacearea);
    return 0;
}
