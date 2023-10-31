#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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
    float perArr[6] = {0};
    for (int i = 0; i < 6; i++) {
        devArr[i] = freqArr[i] - 1000000;
        perArr[i] = fabs(devArr[i] * 0.0001);
    }
    
    
    printf("Frequency of each roll:\n1:%15d\n2:%15d\n3:%15d\n4:%15d\n5:%15d\n6:%15d\n", freqArr[0], freqArr[1], freqArr[2], freqArr[3], freqArr[4], freqArr[5]);
    printf("Deviation from the mean:\n1:%15d%15.4f%%\n2:%15d%15.4f%%\n3:%15d%15.4f%%\n4:%15d%15.4f%%\n5:%15d%15.4f%%\n4:%15d%15.4f%%\n", devArr[0], perArr[0], devArr[1], perArr[1], devArr[2], perArr[2], devArr[3], perArr[3], devArr[4], perArr[4], devArr[5], perArr[5]);
    return 0;
}