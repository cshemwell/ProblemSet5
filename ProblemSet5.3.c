#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* compiled code
gcc ProblemSet5.3.c -o 5.3 && ./5.3
*/

void printarray(int *array1, int size){
    int n;
    for(int i=0; i<size; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");
}


int main() {


FILE *file;

file = fopen("num.csv", "r");

 if(file == NULL){
    printf("File does not exist.\n");
    return 1;
  }
  rewind(file);

  int commas = 0;
  int c;
//need a function to tell me how big the file is and then assign that to size


  while((c = fgetc(file)) != EOF){
  if(c == 44){  //
    commas++;
  }
}
commas = commas+1;
int counter = 0; 
int* narray;

narray = (int*)malloc(commas * sizeof(int));


rewind(file);





char savstr[2]; 
int isav = 0;  
savstr[0] = '\0'; 

c = fgetc(file);

while((c != EOF) && (c > 43) && (c < 58)){  // stop at EOF
  
  
  if(c == 44){
    //if c is a comma, then take the number before, and enter it into the array
    narray[counter++] = atoi(savstr);
    savstr[0] = '\0'; savstr[1] = '\0';
    isav = 0;
    
  }else{ 

      savstr[isav] = c;
	    isav++;
     
    
  }
  c = fgetc(file);
  
}
  narray[counter++] = atoi(savstr);

int x = 0;
for(int j=0; j<commas; j++){
  x = x + narray[j];
}

printf("the average of all values is %d\n", (x/commas));
  



return 0;
}

