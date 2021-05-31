#include <stdio.h>
 
int main() {
 
    int t;
    
    scanf("%d", &t);
 
    int slink = t*2; //o dobro dos que clicam no terceiro, clicaram no segundo
    int plink = slink*2; //o dobro que clicaram no segundo, clicaram no primeiro
    
    printf("%d\n", plink);
    
    return 0;
}
