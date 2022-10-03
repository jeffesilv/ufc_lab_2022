#include<stdio.h>

/**This program was proposed by Prof. Pytagoras Martins, for activity class FUP-2022.1
*Problem: To implement a program tha calculates a fatorial number by using a vector;
*Restriction: The factorial must be calculated direclty with the vector, instead of recieving the fatorial from another variable; */






//In this program, the size of vector must have a looseness, this is, the size must be grater than the fatorial number by 2 units
#define v_size 12

int main()
{

  int v[v_size];
  int y,x;

  //set all vector's position with 1.
  for(y=0;y<10;y=y+1)
    v[y] = 1;

    for(x=1;x<=10;x=x+1)
    {
      //push the vector possition forward, so that next wouldn't be (x * 1), which of course is 'x'.
      v[x+1] = v[x] * x;
      //If x = 10 and you don`t have instruction in line 28,
      //then you get 1 from 10 instead of (10!).
      //v[x+1] = v[x]*x;
      v[x] = v[x]*x;
      printf("%d\n", v[x]);
    }

return 0;

}
