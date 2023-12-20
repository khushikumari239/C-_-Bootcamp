/* exercise given by harry
 which is , given two no.'s a and b add them sub them and assign them to a and b by using
 call by reference*/

/*call by reference example*/
#include <stdio.h>
void changevalue(int *A,int *B)
{
    int x=*A+*B;
    int y=*A-*B;
    *A=x;
    *B=y;
}
int main()
{
    int a = 7;
    int b = 8;
    changevalue(&a,&b);
    printf("the value of a is %d\n", a);
    printf("the value of is b  %d", b);
    
    return 0;
}