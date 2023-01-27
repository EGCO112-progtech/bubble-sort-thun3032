// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

int Isprime(int a){
  int i,check=1;
  for(i=2;i<a;i++){
    if(a%i==0){
      check=1;
      break;
    }
    else check=0;
  }
  if(a==2) check=0;
  return check;
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

  int i,j;
  int sorted;
  // how may pair to compare?
  for(j=1;j<=n-1;j++){
    sorted=0;
    //printf("---------------Round %d---------------\n",j);
    for(i=0;i<n-j;i++){
      if(a[i]>a[i+1]){
        swap(&a[i], &a[i+1]);
        sorted=1;  
      }
      display(a,n);
    }
    if(sorted==0) break;
  }
  //printf("---------------Sorted---------------\n");
}




