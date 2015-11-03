#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
int compare_int(int *val1,int *val2){
    return *val1 -*val2;
}
int main()
{
    int N;
    scanf("%d", &N);
    
    int P[N];
    int min=10000001;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", P+i);
    }
    qsort(P, N, sizeof(int), &compare_int);
    fprintf(stderr,"P[%d]=%d\n",0,P[0]);
    for(int i=1;i<N; i++){
        fprintf(stderr,"P[%d]=%d\n",i,P[i]);
    
        if(P[i]-P[i-1]<min){
            min=P[i]-P[i-1];
        }
    }
        
    
    
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n",min);

    return 0;
}
