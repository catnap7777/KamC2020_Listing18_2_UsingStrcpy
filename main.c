
//Listing 18.2 Using strcpy() - you must allocaet storage space for the destination string; page 458

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char source[] = "The source string...";

int main(void)
{
    char dest1[80];
    char *dest2, *dest3;

    printf("\nsource: \t%s", source);

    //copy to dest1 is ok because dest1 points to 80 bytes of allocated space -> array
    strcpy(dest1, source);
    printf("\ndest1: \t\t%s", dest1);

    //to copy to dest2 you must allocate space

    dest2 = (char *)(malloc(strlen(source) + 1));
    strcpy(dest2, source);
    printf("\ndest2: \t\t%s\n\n", dest2);

    //copying WITHOUT allocating destination space is a no-no....
    // ...the following code causes serious problems...
    // ... thus, it is commented out...
    //
    //strcpy(dest3, source);

    return 0;
}
