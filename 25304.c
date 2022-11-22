#include <stdio.h>

int multi(int a, int b){
    return a*b;
}

int main(){
    int total, cnt, product, num, total_tmp = 0;
    scanf("%d", &total);
    scanf("%d", &cnt);

    for(int i=0 ; i < cnt ; i++){
        scanf("%d %d", &product, &num);
        total_tmp += multi(product, num);
    }

    if(total == total_tmp){
        printf("Yes");
    }else{
        printf("No");
    }
    
    return 0;
}