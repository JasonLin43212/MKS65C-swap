#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //Seeds the random number generator with a seed
  srand(time(NULL));

  //Create an array of size 10
  int someArray[10];
  int * pointerToArray = someArray;

  //Populate the array with random values
  int i;
  for (i=0; i<10; i++){
    *(pointerToArray+i) = rand();
  }

  //Set last value to 0
  *(pointerToArray+9) = 0;

  //Print out the values of the array
  int j;
  for (j=0; j<10; j++){
    printf("The value of the first array at index %d is: %d\n",
           j,*(pointerToArray+j));
  }

  printf("-------------\n");
  //Create a separate array to store 10 ints
  int anotherArray[10];
  int * pointerForOther = anotherArray;

  //Populate anotherArray with values of someArray in reverse order
  int k;
  for (k=0; k<10; k++){
    *(pointerForOther+k) = *(pointerToArray+9-k);
  }

  //Print out values of second array
  int p;
  for (p=0; p<10; p++){
    printf("The value of the second array at index %d is: %d\n",
           p,*(pointerForOther+p));
  }

  return 0;
}
