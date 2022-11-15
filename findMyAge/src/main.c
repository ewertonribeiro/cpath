#include "stdio.h"
#include "string.h"
#include "stdlib.h"
// #include "time.h"

// int main (int argc, char *argv[])
// {
//   time_t seconds  = time(NULL);
//   struct tm* current_time = localtime(&seconds);
//   int current_year = (current_time->tm_year + 1900);

//   int userYear;

//   printf("Qual seu ano de nascimento? \n");
//   scanf("%d", &userYear);

//   int userAge = (current_year - userYear);

//   printf("Você tem %d anos!\n", userAge);

//   return 0;
// }

int main(int argc, char *argv[]) {
  char date[] = __DATE__;
  char *token = strtok(date, " ");
  char *lastToken;
  while (token != NULL) {
    lastToken = token;
    token = strtok(NULL, " ");
  }

  int actualYear = atoi(lastToken);
  int userBirthdayYear;

  printf("Qual seu ano de nascimento? \n");
  scanf("%d", &userBirthdayYear);

  int userAge = (actualYear - userBirthdayYear);

  printf("Você tem %d anos!\n", userAge);

  return 0;
}
