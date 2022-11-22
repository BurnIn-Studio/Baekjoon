#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    //scanf int
    int loop;
    scanf("%d", &loop);

    for(int a = 0; a < loop; a++){
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        printf("%d\n", sum(num1, num2));
    }

    return 0;
}