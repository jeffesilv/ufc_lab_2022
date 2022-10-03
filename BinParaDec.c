#include<stdio.h>


/**This program was proposed by Prof. Marcio Costa, for activity-1 class FUP-2022.2
*Problem: To implement a program that converts a decimal number into a binary one;
*Restriction: None.

/*

 2^0 = 1
 2^1 = 2
 2^2 = 4
 2^3 = 8
 2^4 = 16
 2^5 = 32
 2^6 = 64
 2^7 = 128
 2^8 = 256
 2^9 = 512
 2^10 = 1024
 .
 .
 2^16 = 65536
 2^32 = 4294967296
 2^64 = 18446744000000000000 */
//In this program i decided to use power of 2 instead of division.


#define Largura_Do_Bit 5
#define bit_vetor_valor 32


int main()
{

    int x = 1;
    int p;
    int i;
    int y;
    int sub;
    char zero = '0';
    char um   = '1';
    int indice = 0;
    int bit_vetor[Largura_Do_Bit];
    int copi_bit_vetor[Largura_Do_Bit];

   printf("#Digite um valor decimal num intervalo de [0 -- ((2^5)-1)]: ");
   scanf("%d", &i);

   if(i<=(bit_vetor_valor-1))
   {
   //config_bits
        for(indice=0;indice<(Largura_Do_Bit);indice++)
        {
            p = x;
            if(p<=i)
            {
                bit_vetor[indice] = p;
            }x=x<<1;}}else if(i>(bit_vetor_valor-1))
            {printf("Execedeu!\n");}

        for(y=indice;y>0;y=y-1)
        {
            copi_bit_vetor[y] = bit_vetor[y-1];
            //printf("%d\n", copi_bit_vetor[y]);

            if(copi_bit_vetor[y]==0)
            {
                printf("%c", zero);
            }else if(i>=copi_bit_vetor[y])
            {
                sub = i - copi_bit_vetor[y];
                i = sub;
                printf("%c", um);}
             else if(copi_bit_vetor[y]>i)
             {
                printf("%c", zero);}}

    return 0;

}
