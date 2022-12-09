#include <stdio.h>
#include <time.h>

#define N 10

void main(void){
    srand(time(NULL));
    int Array[N],i,o;
    for(i=0;i<N;i++)
        Array[i] = rand()%21+10;
    for(i=0;i<N;i++)
        printf("%d, ",Array[i]);
    printf("\b\b  \b\b\n");
    printf("Inserire spostamento: ");
    scanf("%d",&o);
    o=o%N;                                  //otteniamo lo spostamento minimo
    for(;o>0;o--){
            Array[0] += Array[N-1];
            Array[N-1] = Array[0] - Array[N-1];
            Array[0] = Array[0] - Array[N-1];
        for(i = N-1;i > 1;i--){
            Array[i] += Array[i-1];
            Array[i-1] = Array[i] - Array[i-1];
            Array[i] = Array[i] - Array[i-1];
        }
    }
    for(i=0;i<N;i++)
        printf("%d, ",Array[i]);
    printf("\b\b  \b\b\n");
}
/*
#include <stdio.h>
#include <immintrin.h>

#define N 10

void main(void){
    register unsigned int* restrict Array = (int[(N*2)-1]){};           //riservo (Grandezza*2)-1 ovvero il caso peggiore di utilizzo della memoria da parte dell'algoritmo
    register int i = Array+N;
    int o;
    for(;Array<i;Array++){
        _rdrand32_step(Array);                                          //uso direttamente l'istruzione RDRAND della cpu, evitando l'inizializzazione
        *Array = *Array%21+10;                                          //estrapolo un numero dentro al range definito
    }
    Array-=N;                                                           //resetto il pointer dell'array alla base
    for(;Array<i;Array++)
        printf("%d, ",*Array);
    puts("\b\b  \b\b");                                                 //cancello l'ultima virgola senza if, usando \b(backspace)
    printf("Inserire spostamento: ");
    scanf("%d", &o);
    o=o%N;                                                              //ottengo lo spostamento minimo
    memcpy(Array,Array-N,sizeof(int)*(N-o));                            //popolo la memoria richiesta dallo shift
    for(Array-=o,i=Array+N;Array<i-1;Array++)                           //sfrutto la matematica dei pointer per accedere direttamente alla memoria senza indice
        printf("%d, ",*Array);
    puts("\b\b  \b\b");
}*/
