#include <stdio.h>
float feet_to_inch(int feet)
{
    return feet * 12;
}
float getadd(int inch, float inchfeet)
{
    return inch + inchfeet;
}
float inch_to_meter(float h)
{
    float answer;
    answer = h / 39.37;
    return answer;
}
float getbmi(float w, float h)
{
    float answer;
    printf("%f\n", h);
    printf("%f\n", w);
    answer = w / (h * h);
    printf("the value of bmi:%f\n", answer);
    return answer;
}
void get_categary(float bmi)
{
    if (bmi < 18.5)
    {
        printf("you are under weight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("you are normal");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("you are overweight");
    }
    else if (bmi >= 30 && bmi <= 34.9)
    {
        printf("you are obese");
    }
    else if (bmi >= 35)
    {
        printf("you are very obese");
    }
}
void main()
{
    float weight, inchfeet, height, bmi;
    int inch, feet;
    printf("enter the weight");
    scanf("%f", &weight);
    printf("enter the height in feet");
    scanf("%d", &feet);
    printf("enter the height in inch");
    scanf("%d", &inch);
    inchfeet = feet_to_inch(feet);
    inchfeet = getadd(inchfeet, height);
    height = inch_to_meter(inchfeet);
    printf("the value of height is%f\n", height);
    bmi = getbmi(weight, height);
    get_categary(bmi);
}