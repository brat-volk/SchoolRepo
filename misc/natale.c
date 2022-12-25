#include <stdio.h>

void main(void){
    int Volume, Weight, A, B;
    printf("Volume(cm3) of the container: ");
    scanf("%d",&Volume);
    printf("Weight(g) of the container: ");
    scanf("%d",&Weight);
    printf("Avg. density(g/cm3) of the first substance: ");
    scanf("%d",&A);
    printf("Avg. density(g/cm3) of the second substance: ");
    scanf("%d",&B);
    printf("The ratio is %0.1f%% to %0.1f%%", (float)((float)B-(float)((float)Weight/Volume))/(float)((float)B-A)*100.0,(float)((float)A-(float)((float)Weight/Volume))/(float)((float)A-B)*100.0 );
}



// differenza
