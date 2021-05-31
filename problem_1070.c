#include <stdio.h>
 
int main() {
 
    int i=0, entrada;
    
    scanf("%d", &entrada);
    
    do{
        if(entrada % 2 != 0){
            printf("%d\n", entrada);
            entrada += 2;
            i += 1;
        } else{
            entrada +=1;
        }
        
        
    } while( i < 6 );
 
    return 0;
}
