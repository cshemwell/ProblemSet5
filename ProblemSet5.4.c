#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

/* compiled code
gcc ProblemSet5.4.c -o 5.4 && ./5.4
*/

 
int main(){

enum scales{Ionian, Dorian, Phrygian, Lydian, Mixolydin, Aeolian, Locrian}mode;

  int Note[7][8] = {
        {0,2,4,5,7,9,11,12},
        {0,2,3,5,7,9,10,12},
        {0,1,3,5,7,8,10,12},
        {0,2,4,6,7,9,11,12},
        {0,2,4,5,7,9,10,12},
        {0,2,3,5,7,8,10,12},
        {0,1,3,5,6,8,10,12}
    };

struct scale
    {
        char Note;
        unsigned char rootNote;
    };

   int x, i;
   char y;
   int why;
    printf ("provide scale in integer form: ");
    scanf("%d", &x);
    
    //found this trick on a forum to stop scanf from blowing through the rest of the code
    getchar();

    printf("provide a root note for your scale (A-G): ");
    scanf("%c", &y);
    //printf("%d", y+Note[0][1]);
    
    
        for(int i = 0; i<8; i++){
        why = Note[x][i] + y;
        printf("%d\n", why);
    }

    return 0;
}
