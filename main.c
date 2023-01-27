#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc,char **argv) {
  int i,j,new_number,N,*a;
  N=argc-1;
  a=(int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++){
    a[i]=atoi(argv[i+1]);
  }
  //printf("a[%d]=%d",i, a[i]);
  //printf("Initial numbers:\n");
  display(a,N);
  bubbleSort(a,N); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(a,N);
 return 0;
}


