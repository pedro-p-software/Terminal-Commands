#include <stdio.h>

int main(int argv, char *argc[]){

  if (argv == 1){
    printf("Should put the command THEN a file");
  }

   for(int i = 1; i < argv; i++){

    const char *path = argc[i];
    FILE *fptr = fopen(path, "w");

    if (!fptr){
      perror("Error opening file or smth");
      return 1;
    }
    
  }
  return 0;
}
