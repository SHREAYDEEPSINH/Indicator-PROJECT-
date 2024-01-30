// qus 1
#include <stdio.h>
void fun(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping :\n");
    printf("x: %d\n",x);
    printf("y: %d\n",y);
}


int main()
{
   int x=5;
   int y=3;
   printf("Before swapping :\n");
   printf("x: %d\n",x);
   printf("y: %d\n",y);
   
   fun(x,y);

    return 0;
}
//qus 2
#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p=&arr;
    for(int i=0;i<=4;i++){
        printf("%u %d\n",p+i,*(p+i));
    }
    return 0;
}



//qus 3
#include <stdio.h>
int main()
{
    int a=20;
    int *p=&a;
    int **p2;
    p2=&p;
    printf("%u %c\n",p2,**p2);

    return 0;
}
