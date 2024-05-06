#include <stdio.h>

int main() {
    int i,j,k=0;
    int MatrixSize=4;
    int index=16;
    int numJ[index] ;
    int numK[16] = {1,2,3,4,5,6,7,8,-8,-7,-6,-5,-4,-3,-2,-1};
    int numL[index];

    printf("numJ : \n");

    for(i=0;i<MatrixSize;i++){
        for(j=0;j<MatrixSize;j++){
                scanf("%d",&numJ[k]);
                k++;
        }
    }

    k=0;

    for(i=0;i<sizeof(numJ)/sizeof(int);i++){
        numL[i]=numJ[i]*numK[i];
    }

    unsigned int *ptr = (unsigned int *)&numL;

    for (i = 0; i < sizeof(numL)/sizeof(int); i++) {
        printf("Byte %d:Address %p :%d :0x%x\n", i,ptr,*ptr, *ptr);
        ptr++; 
    }

    return 0;
}
