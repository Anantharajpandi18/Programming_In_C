#include <stdio.h>
int main()
{
    int ch;

    for ( ch = 0; ch <= 255; ch++)
    {
        if(((ch>=65)&&(ch<91))|| ((ch>=97)&&(ch<123)))
        {
            printf (" \n The ASCII value of %c is %d ", ch, ch);

        }
    }
    return 0;
}
