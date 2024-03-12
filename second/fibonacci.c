#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {

  char buff[10];

  printf("Give me the number: ");
  
  if( scanf("%9s",buff) != 1) {
    printf("Please provide a input\n");
    return 1;
  }

 int c = getchar();
  if( c != '\n' && c != EOF ) {
    printf("This number is a way long that i can handle\n");
    return 1;
  }

  if(buff[0] == '-') {
    printf("Your number isn't present in fibonacci sequence!");
    return 0;
  }

  char *endp;
  errno = 0;
  long n = strtol(buff, &endp, 10);
  
  if (endp == buff) {
    printf("input is not a number: %s", buff);
    return 1;
  } else {
    if (errno != 0) {
      printf("number %s is too large!\n", buff);
      return 1;
    } else
    if (n > INT_MIN || n < INT_MAX) {
      (int) n;  
    }     
 }

  int i; 
  int term_1 = 0, term_2 = 1;
  int next_term = term_1 + term_2;
  
  printf("Fibonacci series: %d, %d, ", term_1,term_2);
  if (n == 0 || n == 1 ) {
    printf("\nYour number is present in the fibonacci sequence!");
    return 0;
  }
  while(next_term < n) {
    //printf("%d, ",next_term);
    term_1 = term_2;
    term_2 = next_term;
    next_term = term_1 + term_2;
    printf("%d, ", next_term);

    if(next_term == n) {
      //printf("%d, ",next_term);
      printf("\nYour number is present in the fibonacci sequence!");
      return 0;
    }
  }

  printf("\nThe number you provided isn't in fibonacci sequence!");
  return 0;
}
