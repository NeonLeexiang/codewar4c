#include <stdbool.h>

bool redacted(const char *doc1, const char *doc2)
{
  while (*doc1 && *doc2) {
    char a = *doc1++;
    char b = *doc2++;
    if (a != b && (a != 'X' || b == '\n')) {
      return false;
    }
  }
  return !*doc1 && !*doc2;
}


/*
#include <stdbool.h>

bool redacted(const char *doc1, const char *doc2)
{
    for (; *doc1 && *doc2; doc1++, doc2++)
        if ( *doc1 != *doc2 && ('X' != *doc1 || '\n' == *doc2) )
            return false;
    return *doc1 == *doc2;
}
*/
