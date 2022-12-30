// Input a day in form "dd:mm:yyyy". Print out the day in a week (Monday,Tuesday,..., Sunday)
#include <stdio.h>
#include <stdbool.h>

bool checkyear(int y)
{
    if (y<1)
    return true;
    else 
    return false;
}
bool checkday(int d, int m, int y)
{
    switch (m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d>31 || d<1)
            return true;
            else 
            return false;
            break;
        case 2:
            if (y%4 ==0)
            {   
                if (d>29 || d<1)
                return true;
            }
            else
            {
                if (d>28 || d<1)
                return false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d>30 || d<1)
            return true;
            else 
            return false;
            break;  
        default:
            return true; 
    }
}
int main()
{
    int m,d,y;
    printf ("Nhap ngay theo dinh dang dd:mm:yyyy : ");
    scanf ("%d:%d:%d", &d, &m, &y);
    while (checkday(d,m,y) || checkyear(y))
    {
        printf ("Khong thoa man!\n");
        printf ("Nhap lai: ");
        scanf ("%d:%d:%d", &d, &m, &y);
    }
    int j;
    j = ((1461 * (y + 4800 + (m - 14)/12))/4 +(367 * (m - 2 - 12 * ((m - 14)/12)))/12 - (3 * ((y + 4900 + (m - 14)/12)/100))/4 + d - 32075)%7; 
    switch (j)
    {
        case 0: printf ("Thu hai"); break;
        case 1: printf ("Thu ba"); break;
        case 2: printf ("Thu tu"); break;
        case 3: printf ("Thu nam"); break;
        case 4: printf ("Thu sau"); break;
        case 5: printf ("Thu bay"); break;
        case 6: printf ("Chu nhat"); break;
    }
    return 0;
}