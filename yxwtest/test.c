#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
    char a[1];
    char b;
    char *s1 = NULL;
    char *s2 = "efd";

    a = malloc(5*sizeof(char));
    memcpy((void*)a,(void*)s1,3);
    a[4] = '\0';
    printf("a:%s\n",(char*)a);
    
    return 0;
}
