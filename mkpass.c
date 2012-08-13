#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define PASS_LENGTH 16
int main(){char pass[PASS_LENGTH+1],c; int a,b; srand(time(NULL)); for(b=1;b<=50;b++){ for(a=0;a<PASS_LENGTH;a++){ for(;;){ c=(char)rand()%('z'+1); if(c>='A'&&c<='z'){ if(!(c>='['&&c<='\'')){ break; } } } pass[a]=c; } pass[PASS_LENGTH]='\0'; printf(" %s",pass); if(!(b%5)){printf("\n");} } return 0; }
