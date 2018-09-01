#include <string.h>

char *repeat_str(size_t count, const char *src) {
  int length = strlen(src);
  char* dest = malloc(count * length * sizeof(char)); // 内存分配
  
  for (int i = 0; i < count; i++) {
    strcpy(dest + i * length, src); // 复制 
  }
  return dest;
}


/*
#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
  char *result = calloc(((count * strlen(src)) + 1), sizeof(char));
  while (count--)
    strcat(result, src);
  return result;
}
*/


/*
#include <string.h>
#include <stdlib.h>

char * repeat_str( size_t n, const char * s ) {
  size_t slen = strlen(s);
  char * dest = malloc(n*slen+1);
  int i; char * p;
  for ( i = 0, p = dest; i < n; ++i, p += slen ) {
      memcpy(p, s, slen);
  }
  *p = '\0';
  return dest;
}
*/
