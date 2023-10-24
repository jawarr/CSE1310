#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    
    srand(time(NULL));
    
    int freqArr[6] = {0};
    
    for (int i = 0; i < 6000000; i++) {
        int n = rand() % 6;
        switch (n) {
            case 0:
                freqArr[n]++;
                break;
            case 1:
                freqArr[n]++;
                break;
            case 2:
                freqArr[n]++;
                break;
            case 3:
                freqArr[n]++;
                break;
            case 4:
                freqArr[n]++;
                break;
            case 5:
                freqArr[n]++;
                break;  
            default:
                printf("Something bad happened");
                return 0;
                break;
        }
    }
    int devArr[6] = {0};
    for (int i = 0; i < 6; i++) {
        devArr[i] = freqArr[i] - 1000000;
    }
    
    printf("Frequency of each roll:\n1:%15d\n2:%15d\n3:%15d\n4:%15d\n5:%15d\n6:%15d\n", freqArr[0], freqArr[1], freqArr[2], freqArr[3], freqArr[4], freqArr[5]);
    printf("Deviation from the mean:\n1:%15d\n2:%15d\n3:%15d\n4:%15d\n5:%15d\n6:%15d\n", devArr[0], devArr[1], devArr[2], devArr[3], devArr[4], devArr[5]);
    // printf("Deviation as a percentage:\n1:%15f\n2:%15f\n3:%15f\n4:%15f\n5:%15f\n6:%15f\n", freqArr[0]/1000000.0, freqArr[1]/1000000.0, freqArr[2]/1000000.0, freqArr[3]/1000000.0, freqArr[4]/1000000.0, freqArr[5]/1000000.0);
    return 0;
}