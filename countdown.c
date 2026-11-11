#include <stdio.h>
#include <unistd.h>

int main()
{
    int number;

    printf("Enter time in seconds: ");
    fflush(stdout);
    scanf("%d", &number);

    while(1)
    {
        printf("%d\n", number);
        sleep(1);
        number -= 1;

        if(number < 1)
        {
            printf("Over!\n");
            break;
        }
    }
    return 0;
}