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
        printf("%d", -1);
    else{
        printf("%d\n", 2*((side_a * side_b) + (side_b * side_c) + (side_a * side_c)));
    };

    return 0;
}

int Work_5(){
    int size;
    int num;
    int sum = 0;
    scanf("%d", &size);
    int Mass[size];
     for(int i = 0; i < size; i++){
        scanf("%d", &Mass[i]);
    }
    
    for(int i = 0; i < size; i++){
        if(Mass[i] % 2 == 0){
            sum += Mass[i];
        }
    }
    printf("%d\n\t", sum);
    
    return 0;
}

int main(){
    //Work_1();
    //Work_2();
    //Work_3();
    //Work_4();
    Work_5();
    return 0;
}
