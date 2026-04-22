#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
     //int dice_roll = (rand() %6) +1 ;
    int numbers[100];

        int num1 = 0;
        int num2 = 0;    
        int num3 = 0;
        int num4 = 0;
        int num5 = 0;
        int num6 = 0;

        float div100=100;

    for(int i = 0; i<100; i++){
        numbers[i]=(rand()%6) +1;
        } 

    for(int i = 0; i <100; i++ ){
       // printf("%d %d ", numbers[i], i);
            if (numbers[i]==1) {
            num1++;
         }
           if (numbers[i]==2) {
            num2++;
         }
           if (numbers[i]==3) {
            num3++;
         }
           if (numbers[i]==4) {
            num4++;
         }
           if (numbers[i]==5) {
            num5++;
         }
           if (numbers[i]==6) {
            num6++;
         }
    }
    
    printf(" %d\n %d\n %d\n %d\n %d\n %d\n",num1, num2, num3, num4, num5, num6);

    printf("%d\n", num1+num2*2+num3*3+num4*4+num5*5+num6*6);

    printf("%.1f\n", (num1+num2*2+num3*3+num4*4+num5*5+num6*6)/div100);

// går ej att få(17 18 23 18 12 12 326 3.3) vej ej varför.


    return 0;
}
