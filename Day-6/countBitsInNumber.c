#include<stdio.h>
int countBits(unsigned int n){
    int count = 0;
    while(n > 0) {
        count += n & 1;
         n >>= 1;
    }
    return count;
    }
int main(){
    unsigned int num = 13;
    printf("Number of bits in %u is: %d\n", num, countBits(num));
}