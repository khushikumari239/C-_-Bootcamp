/*call by reference example*/
#include <stdio.h>
void changevalue(int *address)
{
    *address = 6;
}
int main()

{
    int k = 65;
    printf("the value of k is %d\n", k);
    changevalue(&k);
    printf("the value of k is %d", k);

    return 0;
}