#include <string.h>

char* remove_char(char* dst, const char* src)
{
    strcpy(dst, src + 1);
    dst[strlen(dst) - 1] = '\0';
    return dst;
}


/*
char *remove_char(char* dst, const char* src) {
    src ++;
    strncpy(dst, src, strlen(src)-1);
    dst[strlen(src)-1] = '\0';
    return dst;
}
*/


/*
char* remove_char(char* dst, const char* src)
{
 int i=0,k=0;
 for(i=1;i<(strlen(src)-1);i++)
 {
   dst[k++]=src[i];
 }
 dst[k]='\0';
 return dst;
}
*/
