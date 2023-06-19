#include <stdio.h>

int main() {
    
    //sum calculator
    
    float ans, a, b;
    printf("What is your first number?: ");
    scanf("%f", &a);
    printf("What is your second number?: ");
    scanf("%f", &b);
    
    ans = a + b;
    printf("Answer: %.2f\n", ans);
    printf("--------------------------------------------\n");
    
    //subtract calculator
    
    printf("What is your first number?: ");
    scanf("%f", &a);
    printf("What is your second number?: ");
    scanf("%f", &b);
    
    ans = b - a;
    if(ans <= 0){
        ans = a - b;
        printf("Answer: %.2f", ans);
    }
    else{
        printf("Answer: %.2f\n", ans);
    }
    printf("--------------------------------------------\n");
    
    //multiply calculator
    
    printf("What is your first number?: ");
    scanf("%f", &a);
    printf("What is your second number?: ");
    scanf("%f", &b);
    
    ans = a * b;
    printf("Answer: %.2f\n", ans);
    printf("--------------------------------------------\n");
    
    //divide calculator
    
    printf("What is your first number?: ");
    scanf("%f", &a);
    printf("What is your second number?: ");
    scanf("%f", &b);
    
    ans = a / b;
    if(ans <= 0){
        ans = b / a;
        printf("Answer: %.2f", ans);
    }
    else{
        printf("Answer: %.2f", ans);
    }

    return 0;
}
