#include <stdio.h>

void calculate(int a){
    int count(0);
    printf("The sequence is given as: \n");
    while(a--){
        if (a % 2 == 0){
            int even =  a / 2;
            printf("%d\t", even);
            count++;
        }
        else{
            int odd = a * 3 + 1;
            printf("%d\t", odd);
            count++;
        }
    }
   printf("\nNumber of operations performed: ");
   printf("%d\t", count);
   printf("\n");
}

int main(){
    int a;
    scanf("%d", &a);
    calculate(a);
}