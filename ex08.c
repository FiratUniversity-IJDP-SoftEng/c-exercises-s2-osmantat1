#include <stdio.h>

int main(){
   int numbers [10];
   int sum =0;
   float average;
   int i;
   printf("Enter ten numbers\n");
   for(i =0; i<10; i++){
      printf("%d. number: ",i +1);
      scanf("%d",&numbers[i]);
      sum += numbers[i];
   }

   printf("Your numbers: ");
   for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Total is: %d\n",sum);

    average= sum/10.0;
    printf("Average: %f\n",average);


  
} 

