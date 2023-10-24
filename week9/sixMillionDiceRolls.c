#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    srand(time(NULL));
    int i = 0, 
        one = 0, 
        two = 0, 
        three = 0, 
        four = 0, 
        five = 0, 
        six = 0;
    for (i; i < 6000000; i++) {
        int n = 1 + rand() % 6;
        switch (n) {
            case 1:
                one++;
                break;
            case 2:
                two++;
                break;
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;  
            default:
                break;
        }
    }
    printf("Frequency of each roll:\n1:%15d\n2:%15d\n3:%15d\n4:%15d\n5:%15d\n6:%15d\n", one, two, three, four, five, six);
    printf("Deviation from the mean:\n1:%15d\n2:%15d\n3:%15d\n4:%15d\n5:%15d\n6:%15d\n", one-1000000, two-1000000, three-1000000, four-1000000, five-1000000, six-1000000);
    printf("Deviation as a percentage:\n1:%15f\n2:%15f\n3:%15f\n4:%15f\n5:%15f\n6:%15f\n", one/1000000.0, two/1000000.0, three/1000000.0, four/1000000.0, five/1000000.0, six/1000000.0);
    return 0;
}