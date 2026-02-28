#include <stdio.h>

int main(int argc, char** argv){
  char buffer[1024];
  if(argc < 2){
    fprintf(stderr, "logat file.*\n");
    return -1;
  }

  FILE *craps = fopen(argv[1], "r");
  if(craps == NULL){
    fprintf(stderr, "could not open file\n");
    return -1;
  }

  while(fgets(buffer, sizeof(buffer), craps) != NULL){
    printf("%s", buffer);
  }

  fclose(craps);
  return 0;
}