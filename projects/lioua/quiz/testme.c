#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

const char charset[] = "abcdefghijklmnopqrstuvwxyz []{}()";
const char charAlpha[] = "abcdefghijklmnopqrstuvwxyz";
const char charTargetSet[] = "reset";

/* Define a char variable */ 
char inputChar()
{
    char randomchar; 
    int index = rand() % (int) (sizeof charset - 1);
    randomchar = charset[index];
    return randomchar;
}

/* Define a char variable with random selection from only lower case alphabet characters */ 
char inputLowerOnly()
{
    char randomchar; 
    int index = rand() % (int) (sizeof charAlpha - 1);
    randomchar = charAlpha[index];
    return randomchar;
}

/* Define a char variable with random selection from only "reset"*/ 
char inputReset()
{
    char randomchar; 
    int index = rand() % (int) (sizeof charTargetSet - 1);
    randomchar = charTargetSet[index];
    return randomchar;
}

// Create a random string of length 5 with an additional '\0'
char *inputString()
{
    char* str = malloc(6);
    // char str[6];    
    for (size_t n = 0; n < 5; n++) {
        // str[n] = inputChar();
        // str[n] = inputLowerOnly();
        str[n] = inputReset();
    }
    str[5] = '\0';
    return str;
}

void testme()
{
  int tcCount = 0;
  char *s;
  char c;
  int state = 0;
  while (1)
  {
    tcCount++;
    c = inputChar();
    s = inputString();
    printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);

    if (c == '[' && state == 0) state = 1;
    if (c == '(' && state == 1) state = 2;
    if (c == '{' && state == 2) state = 3;
    if (c == ' '&& state == 3) state = 4;
    if (c == 'a' && state == 4) state = 5;
    if (c == 'x' && state == 5) state = 6;
    if (c == '}' && state == 6) state = 7;
    if (c == ')' && state == 7) state = 8;
    if (c == ']' && state == 8) state = 9;
    // if (strcmp(s, "reset") == 0 && state == 9)
    // {
    //   printf("error FOUND\n");
    //   printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);
    //   if (s[0] == 'r' && s[1] == 'e'
    //   && s[2] == 's' && s[3] == 'e'
    //   && s[4] == 't' && s[5] == '\0'
    //   && state == 9) {
    //     printf("error - Discount Double Check\n");
    //   }
    //   exit(200);
    // } 
    if (s[0] == 'r' && s[1] == 'e'
      && s[2] == 's' && s[3] == 'e'
      && s[4] == 't' && s[5] == '\0'
      && state == 9)
    {
      printf("error ");
      // printf("FOUND - Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);
      exit(200);
    }
  }
}


int main(int argc, char *argv[])
{
    srand(time(NULL));
    // char *s;
    // char c;
    // c = inputChar();
    // s = inputString();
    // printf("Iteration: c = %c, s = %s\n", c, s);
    testme();
    return 0;
}
