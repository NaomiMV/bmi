#include <stdio.h>
float main(void) {

    float height;
    printf("Enter your height in cm:\n");
    scanf("%f",&height);

    float weight;
    printf("Enter your weight in kg:\n");
    scanf("%f",&weight);

    float bmi;
    bmi = (weight/(height *height));
    printf("BMI %f \n", bmi);
    if (bmi < 16 ) {
        printf("Onder de 16: ondervoed\n");
    }
    else if (16 >= bmi < 18.5) {
        printf("Onder de 18,5: ondergewicht\n");
    }
    else if (18.5 >= bmi < 25) {
        printf("gezond\n");
    }
    else if (25 < bmi <= 30) {
        printf("te zwaar\n");
    }
    else {
        printf("schande\n");
    }
}
