#include<stdio.h>
#include<stdlib.h>



/**This program was proposed by Prof. Marcio Costa, for activity-2 class FUP-2022.2
*Problem: Attached is a C code that must be modified by each student so that the C program, which
*should do the following: when executed, the program reads integers that are typed by the user (integers between
*0 and 31 only).
*Restriction:  When the user types -1, the program should print all the numbers typed in order
*(ascending or descending, students' choice) and without repetitions.*/


int main(){
   
    //Variáveis que podem ser usadas
    int x;
    int y;
    int z;
    int k;
    int w;
    int j;
    int i;

  //#####################################################################################################################################################################################################
  //AREA DE CODIGO DO 



    while(i>=0x00)
    {

        printf("Digit um valor entre [0-31]: ");
        scanf("%d", &i);

        if(i>((0x01<<5)-(0x01)))
        {
            system("clear");
            printf("#valor_digitado_fora_de_intervalo - [%d]\n", i);
        }
        else if(i>=0x00)
        {
            x = x|1<<(i-1);
        }
        else if((i>(-(0x02)))&&(i<(0x00)))

        {

            for(z=0;z<=((0x01<<5)-1);z+=0x01)
            {
                if(x&(1<<(z-1)))
                {
                    printf("%d\n", z);
                }
            }
            break;
        }
    }

  
//######################################################################################################################################################################################################
   return 0;

}
