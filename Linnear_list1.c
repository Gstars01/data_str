#include <stdio.h>
int main(void){
    int i,sale[4] = {157,209,251,312};

    for(i=0;i<4;i++){
        printf("\n address : %u sale[%d] = %d",&sale[i],i,sale[i]); //int 형 = 인덱스 하나 마다 4byte = 주소가 4바이트 씩 비워서 나옴
    }

    getchar(); return 0;
}