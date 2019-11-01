#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* compiled code
gcc ProblemSet5.1.c -o 5.1 && ./5.1
*/

int i = 0;

int stringCalculate(char* string){
    if (string == NULL){
    printf("no string\n");
    return 0;
    }
    while (string[i] != '\0'){
        i++;
    }
return i;  
}



char string[200];


int main(){

printf("enter an array of string: ");
scanf("%s", string);
printf("\nyou entered: %s, its length is: %d\n", string, stringCalculate(string));

return 0;
}


