#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n;
    scanf("%d", &n); fgetc(stdin);
    char vs[2000000];
    fgets(vs,2000000,stdin);
    
    fprintf(stderr," %s\n",vs);
    int v[n];
    char *vi=vs, *nextVal;
    for(int i=0; i<n; i++){
        if(i<n-1){
            nextVal=strchr(vi, ' ');
            *nextVal='\0';
            nextVal++;
        }
        v[i]=atoi(vi);
        vi=nextVal;
        
        fprintf(stderr," %d",v[i]);
    }
    
    fprintf(stderr,"\n");
    
    int picUp=0,picDown=0, min=1;
    for(int i=1; i<n; i++){
        
        if(v[picUp]<v[i]){
            
            if(min>v[picDown] -v[picUp]){
                min=v[picDown] - v[picUp];
            }

            picUp=i;
            picDown=i;
        }
        if(v[picDown]>v[i]){
            picDown=i;
        }
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    
    if(min>v[picDown] -v[picUp]){
        min=v[picDown] -v[picUp];
    }
    
    printf("%d\n",min);

    return 0;
}
