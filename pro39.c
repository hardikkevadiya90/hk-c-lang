#include<stdio.h>
float foot_to_inch(int foot)
{
    // int answer;
    // answer=foot*12;
    // return answer;
    return foot*12;
}
float getadd(int inch,float inchfoot)
{
    return inch+inchfoot;
}
float inch_to_meter(float h)
{
    float answer;
    answer=h/39.37;
    return answer;
}
float getbmi(float w,float h)
{
    float answer;
    printf("%f\n",h);
    printf("%f\n",w);
    answer= w / ( h * h ) ;
    printf("the value of bmi: %f \n",answer);
    return answer;
}
void get_categoury(float bmi)
{
    if(bmi<18.5)
    {
        printf("you are under weight");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("your weight is normal ");
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        printf("you are over weight ");
    }
    else if(bmi>=30 && bmi<=34.9)
    {
        printf("you are obese");
    }
    else if(bmi>=35)
    {
        printf("you are extremely over obese ");
    }
}
void main()
{
    float weight,inchfoot,height,bmi;
    int inch,foot;
    printf("enter the value of weight ");
    scanf("%f",&weight);
    printf("enter value of height in foot ");
    scanf("%d",&foot);
    printf("enter value of height in inch ");
    scanf("%d",&inch);
    inchfoot=foot_to_inch(foot);
    // printf("the value of inchfoot is %f",inchfoot);
    inchfoot=getadd(inchfoot,height);
    height=inch_to_meter(inchfoot);
    printf("the value of height is %f\n",height);
    bmi=getbmi(weight,height);
    get_categoury(bmi);
}