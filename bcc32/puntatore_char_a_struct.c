#include <stdio.h>

struct matita {
    char fabbricante;
    int durezza;
    int numero;
};

void main(void){
    struct matita m0;
    char *puntatore;
    int i = 0;

    m0.durezza = 0x10;
    m0.numero = 0x5;
    m0.fabbricante = 'C';
    
    puntatore = (char*)&m0;

    printf("dimensione int=%d\n",sizeof(int));
    printf("dimensione char=%d\n",sizeof(char));
    printf("dimensione m0=%d\n",sizeof(m0));
    printf("dimensione puntatore=%d\n\n",sizeof(puntatore));
    printf("m0.fabbricante=%c\n",m0.fabbricante);
    printf("valore puntatore=%c\n", *puntatore);
    printf("puntatore=0x%x\n\n", puntatore);

    while (i < sizeof(m0)) {
        printf("i=%d\n",i);
        printf("puntatore=0x%x\n", puntatore);
        printf("puntatore=0x%x\n\n", *puntatore++);
        i++;
    };


}
