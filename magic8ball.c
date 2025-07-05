//▒█▀░█░█▄░█░█▀▄░░░▀▄▀░▄▀▄░█▒█▒█▀▄░░▒█▀░▄▀▄▒█▀▄░▀█▀░█▒█░█▄░█▒██▀
//░█▀░█░█▒▀█▒█▄▀▒░░▒█▒░▀▄▀░▀▄█░█▀▄▒░░█▀░▀▄▀░█▀▄░▒█▒░▀▄█░█▒▀█░█▄▄

//A simple Magic 8 Ball script written in C


/**
 * Program: Magic 8 Ball
 * Author: Fugastra
 * Date of compiling: 5/7/2025 (DD/MM/YYYY)
 * License: Licensed under MIT lincense
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(0));
int ans = rand() % 2;

printf("*-------------------* \n\n");
printf("Ask a question: ");
scanf("Ask a question: \n\n");
printf("\n");

scanf("... \n (press any key to continue) ");
getchar();

if (ans == 0) {

printf("=========== \n");
printf ("No \n");
printf("=========== \n\n");

}else if (ans == 1){

printf("=========== \n");
printf ("Yes \n");
printf("=========== \n\n");


}else{

printf ("... You got nothing \n" );

}

printf("*-------------------*\n");

return 0;

}
