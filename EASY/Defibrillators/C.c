#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    char LON[50];
    scanf("%s", LON); fgetc(stdin);
    char LAT[50];
    scanf("%s", LAT); fgetc(stdin);
    
    float mylon,mylat;
    //replace ',' par '.' in the numbers
    char *coma=strchr(LON,',');
    *coma='.';
    coma=strchr(LAT,',');
    *coma='.';
    
    mylon=atof(LON);
    mylat=atof(LAT);
    
    int N;
    scanf("%d", &N); fgetc(stdin);
    
    char close_defib[256];
    float close_dist=HUGE_VALL;
    
    for (int i = 0; i < N; i++) {
        char DEFIB[256];
        fgets(DEFIB,256,stdin);
        
        
        char *lon_str,*lat_str;
        float lon,lat;
        
        //get longitude
        lon_str=DEFIB;
        for(int i=0; i<4; i++){
            lon_str=strchr(lon_str, ';');
            lon_str++;
        }
        
        //get latitude
        lat_str=strchr(lon_str, ';');
        *lat_str='\0';
        lat_str++;
        
        
        //converte to double
        coma=strchr(lon_str,',');
        *coma='.';
        coma=strchr(lat_str,',');
        *coma='.';
        
        lon=atof(lon_str);
        lat=atof(lat_str);
        
        // calculate the distance 
        float x=(lon-mylon)*cos((lat+mylat)/2);
        float y=(lat-mylat);
        float d=9371*sqrt(x*x + y*y);
        if(d<close_dist){
            close_dist=d;
            strcpy(close_defib,DEFIB);
        }
    
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    char *defib_name;
    defib_name=strchr(close_defib, ';');
    defib_name++;
    coma=strchr(defib_name, ';');
    *coma='\0';
    

    printf("%s\n", defib_name);

    return 0;
}
