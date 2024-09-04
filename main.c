#include <stdio.h>

int Work_1(){
    int a, b, res;
    scanf("%d%d", &a, &b);
    if(a >= 0 && b <= 100){
        res = a + b;
        printf("%d\n", res);
    }
    else{
        printf("Are you dumb?");
    };
    //return 0;
};

int Work_2(){
    int a, b, res;
    scanf("%d%d", &a, &b);
    if(a >= 0 && b <= 100){
        res = a * b;
        printf("%d\n", res);
        printf("%d", a % b);
        printf("\t%d\n", b % a);
    }
    else{
        printf("Are you dumb?");
    };
    return 0;
};

int Work_3(){

    int num, res;
    scanf("%d", &num);

    if(num >= 1 && num <= 100){
        for(int i = num; i >= 0; i--){
            res += i;
        };
        printf("%d\n", res);
    };
    return 0;
};

int Work_4(){
    int side_a, side_b, side_c, res;
    scanf("%d%d%d", &side_a, &side_b, &side_c);

    if(side_a < 0 || side_b < 0 || side_c < 0)
        printf("%d", -1);
    else{
        printf("%d\n", 2*((side_a * side_b) + (side_b * side_c) + (side_a * side_c)));
    };

    return 0;
};

int Work_5(){
    int size;
    int num;
    int sum = 0;
    scanf("%d", &size);
    int Mass[size];
     for(int i = 0; i < size; i++){
        scanf("%d", &Mass[i]);
    };
    
    for(int i = 0; i < size; i++){
        if(Mass[i] % 2 == 0){
            sum += Mass[i];
        };
    };
    printf("%d\n\t", sum);
    
    return 0;
};

int Work_6(){
    int num;
    scanf("%d" ,&num);

    if(num >= 1 && num <= 10000){
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                printf("NO");
            }else{
                printf("YES\n");
            };
        };
    };
    return 0;
};

int Work_7(){
    int num_a, num_b;
    scanf("%d%d", &num_a, &num_b);
    printf("\n%d\t", num_a / num_b);
    printf("%d\t", (num_a % num_b) + (num_a / num_b));
    printf("%d\t", num_a / num_b);
    printf("%d\n", num_a % num_b);
};

int Work_8(){
    int size;

    scanf("%d", &size);
    int Mass[size];
     for(int i = 0; i < size; i++){
        scanf("%d", &Mass[i]);
    };
    int min_num, max_num = Mass[0];
    int index_min, index_max = 0;

    for(int i = 0; i < size; i++){
        if(Mass[i] < min_num){
            min_num = Mass[i];
            index_min = i;
        }
        if(Mass[i] > max_num){
            max_num = Mass[i];
            index_max = i;
        }
    }
    printf("%d%d%d%d\n", min_num, index_min, max_num, index_max);
};

int Work_9(){
    int N, M, P, K, L;

    scanf("%d%d%d%d%d", &N, &M, &P, &K, &L);
    if(N > 500)
        printf("Are you wining?");

    
}


int main(){
    //Work_1();
    //Work_2();
    //Work_3();
    //Work_4();
    //Work_5();
    //Work_6();
    //Work_7();
    //Work_8();
    Work_9();
    return 0;
}
