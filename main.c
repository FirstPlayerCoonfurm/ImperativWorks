#include <stdio.h>

int Work_1(){
    //Задача №1
    int a, b, res;
    scanf("%d%d", &a, &b);
    if(a >= 0 && b <= 100){
        res = a + b;
        printf("%d\n", res);
    }
    else{
        printf("Are you dumb?");
    };
    return 0;
}

int Work_2(){
    int a, b, res;
    scanf("%d%d", &a, &b);
    if(a >= 0 && b <= 100){
        res = a * b;
        printf("%d\n", res);
        printf("%d\n", a % b);
        printf("\t%d", b % a);
    }
    else{
        printf("Are you dumb?");
    };
    return 0;
}

int Work_3(){

    int num, res;
    scanf("%d", &num);

    if(num >= 1 && num <= 100){
        for(int i = num; i >= 0; i--){
            res += i;
        };
        printf("%d\n", res);
    }
    return 0;
}

int Work_4(){
    int side_a, side_b, side_c, res;
    scanf("%d%d%d", &side_a, &side_b, &side_c);

    if(side_a < 0 || side_b < 0 || side_c < 0)
        printf("Are you wining son?");
    else{
        printf("%d\n", 2*((side_a * side_b) + (side_b * side_c) + (side_a * side_c)));
    };

    return 0;
}

int main(){
    //Work_1();
    //Work_2();
    //Work_3();
    //Work_4();
    return 0;
}