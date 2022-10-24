#include<stdio.h>
#include<stdio.h>

unsigned int count(unsigned int i) {
    unsigned int ret=1;
    while (i/=10) ret++;
    return ret;
}

bool isArmstrongNumber(int num) {

}

int main() {
    printf("Type a number: \n");
    int num;
    scanf("%d", &num);
    printf("Your number is: %d \n", num);
}