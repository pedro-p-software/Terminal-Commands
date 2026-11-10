#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc == 1){
    printf("Should use cat ON something.\n Ex. cat smth.txt\n");
  }
  
  char ch;

  for(int i = 1; i < argc; i++){
    FILE *fptr = fopen(argv[i], "r");
    
    if (!fptr){
      perror("Error opening file or smth");
      return 1;
    }

    while((ch = fgetc(fptr)) != EOF){
      putchar(ch);
    }
    printf("Other file below\n");
  }

  return 0;
}
