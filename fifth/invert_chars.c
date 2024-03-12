#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
  if(argc < 2) {
    printf("Please provide a string!\n");
    printf("Usage: ./invert_chars.c <string>\n");
    return 1;
  }

  char string[100] = "";
  strncpy(string, argv[1],100);

  int sz = strlen(string);
  printf("current string: %s\n",string);
  /* 
   * save the first char.
   * copy last char to first.
   * copy the saved first char to last.
   * decrease and encrease vars.
  */
  for(int f = 0, l = sz - 1; f<= l; f++, l--) {  
    char save_var = string[f];
    string[f] = string[l];
    string[l] = save_var;
  }

  printf("inverted string: %s",string);
  return 0;
}
