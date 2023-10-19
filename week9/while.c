#include <stdio.h>

int main (void) {
    
    int number = 7;
    while ( number > 0) 
    {
        --number;
        if (number == 5)
            continue;
        
        printf("%d\n", number);
    }
    return 0;
}