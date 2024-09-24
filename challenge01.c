#include <stdio.h>


int main(){

char nom[10], prenom[10], sexe[10], email[30];
int age;

  printf("Entere votre nom :\n");
   scanf("%s",&nom);
  printf("Entere votre prenom :r\n");
   scanf("%s",&prenom);
  printf("Entere votre sexe :\n");
   scanf("%s",&sexe);
  printf("Entere votre email :\n");
   scanf("%s",&email);
  printf("Entere votre age :\n");
   scanf("%d", &age);
   printf("vos infos est : %s %s %s %s %d",nom,prenom,sexe,email,age);

  return 0;
}
