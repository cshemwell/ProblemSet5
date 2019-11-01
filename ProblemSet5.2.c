#include <stdio.h>
#include <stdlib.h>

/* compiled code
gcc ProblemSet5.2.c -o 5.2 && ./5.2
*/

void printarray(int *array2, int size){
    int n;
    for(int i=0; i<size; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");
}



//positive numbers will rotate to the right, negative to the left

void rotate(int *array1, int size, int amount){
    int saved;
   // printarray(array, size);
 if(amount<0){  // steps is negative; rotate left
    for (int j = 0; j > amount; j--){ 

        saved = array1[0]; 

 	for(int i=0; i<size; i++){        		
            	     *(array1+i) = *(array1+i+1); 
        	     }
         array1[size-1] = saved;
        }
      }

    //postive
        else { 

        for (int j = 0; j < amount; j++){ 

           saved = array1[size-1]; //the last value
   
           for(int i=size-1; i>=0; i--){ 
                *(array1+i) = *(array1+i-1); 
           	}
           array1[0] = saved;

	   }
       
    	}
    return;
}



int main(int argc, char *argv[]) {

    int array3[] = {1, 2, 3, 4, 5};
    int n = sizeof(array3) / sizeof(array3[0]);
    int rotatate;
    printarray(array3, n);
    printf("How many positions would you like to rotate?: ");
    scanf("%d",&rotatate);
    rotate(array3, n, rotatate);
    printarray(array3, n);


    return 0;
}

