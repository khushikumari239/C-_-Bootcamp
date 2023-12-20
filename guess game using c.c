#include <stdio.h>

int main()
/* this is right program for guess game*/

{
    int secret_num;
    secret_num=12;
    int guess_num;
    int guess_limit;
    guess_limit=3;
    for (int i = 1; i <= guess_limit; i++)
    {
        printf("enter guess_num %d \n", i);
        scanf("%d", &guess_num);

        if (guess_num == secret_num)
        {
            printf("you win \n");
        }
        else
            (guess_num != secret_num);
        {
            printf("you lost \n");
        }
    }

    return 0;
}