#include <stdio.h>

#define KING 1
#define QUEEN 1
#define ROOK 2
#define BISHOP 2
#define KNIGHT 2
#define PAWN 8

int cal(int original, int input);

int main(){
    int king, queen, rook, bishop, knight, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    printf("%d %d %d %d %d %d", cal(KING, king), cal(QUEEN, queen), cal(ROOK, rook), cal(BISHOP, bishop), cal(KNIGHT, knight), cal(PAWN, pawn));
    return 0;
}

int cal(int original, int input){
    if(input > original){
      return original - input;   
    }else{
        return -input + original;
    }
}