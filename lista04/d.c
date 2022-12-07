#include <stdio.h>

int startsWith(char *s, char *prefix) {
  if(*prefix == '\n') {
    return 1;
  }

  if(*s != *prefix) {
    return -1;
  }

  return startsWith(s+1, prefix+1);
}

void findFirstAndLastApparition(char *s, char *prefix, char** firstApparition, char** lastApparition) {
  if(*s == '\n') {
    return;
  }

  if(startsWith(s, prefix) != -1) {
    if(*firstApparition == NULL) {
      *firstApparition = s;
    }
    *lastApparition = s;
  }
  findFirstAndLastApparition(s+1, prefix, firstApparition, lastApparition);
}

int myStrLen(char *s, int count) {
  if(*s == '\n') {
    return count;
  }

  return myStrLen(s+1, count+1);
};

int main() {
  char string[102];
  fgets(string, 102, stdin);
  int stringLen = myStrLen(string, 0);

  char prefix[102];
  fgets(prefix, 102, stdin);
  int prefixLen = myStrLen(prefix, 0);

  char *first = NULL;
  char *last = NULL;
  findFirstAndLastApparition(string, prefix, &first, &last);
  if(first == NULL) {
    puts("0");
    return 0;
  }

  if(prefixLen > stringLen/2) {
    printf("%i\n", prefixLen);
    return 0;
  }

  last += prefixLen;
  printf("%li\n", last - first);
}
