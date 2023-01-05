#include <stdio.h>
int main(void)
{
    unsigned char rooms;
    int switcher;
    while (switcher != 3)
    {
        printf("\nto switch lights press 1,to print lights state press 2,to exit lights menu press 3:");
        scanf("%d", &switcher);
        if (switcher == 1)
        {
            int room_num;
            printf("enter room number:");
            scanf("%d", &room_num);
            unsigned char room = 1 << (room_num - 1);
            rooms = rooms ^ room;
            // room_num - 1 because the biary`s first bit is 0 not 1
        }
        else
        {
            for (int room_num = 0; room_num < 8; room_num++)
            {
                if ((rooms & (1 << (room_num))) == (1 << (room_num)))
                {
                    printf("%d ", room_num + 1);
                }
            }
        }
        if (switcher == 3)
        {
            break;
        }
    }
}