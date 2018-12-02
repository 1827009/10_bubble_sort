#include <stdio.h>

int main(int argc, char *argv[]) 
{
char str[7];
    
    
    int i, j, temp;

  for (i = 0; i < (argc - 1); i++) {
    for (j = (argc - 1); j > i; j--) {
       
      if (argc[j-1] > argc[j]) {
        temp = argc[j-1];
        argc[j-1] = argc[j];
        argc[j] = temp;
          printf(" ");
           } printf("%s", argc[i]);
    }
  }
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
