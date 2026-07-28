#include <limits.h>
int reverse(int x)
{
    long rev = 0 ;
    int orignal  = x;
    while(x!=0)
    {
        int y = x %10;
        rev = rev * 10 + y;
        x = x/10;
    }
    if (rev > INT_MAX || rev < INT_MIN)
    {
    return 0;
    }
    return (int)rev;

}