#include <stdio.h>
#include <conio.h>

int main()
{
    
    char c = getch();
    if(c == -32)
    {
        c = getch();
        if(c == 72)
            printf("Ban vua an phim mui ten len!\n");
        if(c == 80)
            printf("Ban vua an phim mui ten xuong!\n");
        if(c == 75)
            printf("Ban vua an phim mui ten sang trai!\n");
        if(c == 77)
            printf("Ban vua an phim mui ten sang phai!\n");
    }
    return 0;
}