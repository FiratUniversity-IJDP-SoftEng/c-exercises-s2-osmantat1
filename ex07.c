#include <stdio.h>
int main(){
    int i;
    for(i = 0; i <=10 ; i++){
        int col1= i*5;
        int col2 = 100-((i-1)*10+1);
        int col3= i;
        
        printf("%d\t%d\t%d\n",col1,col2,col3);
    }
    return 0;
}

