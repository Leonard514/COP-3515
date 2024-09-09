#include <stdio.h>

int main()
{
    enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    enum year i = Jan;
    printf("%s\n", i);
    printf("%d\n", i);
    i = Aug;
    printf("%d\n", i);
    return(0);
}