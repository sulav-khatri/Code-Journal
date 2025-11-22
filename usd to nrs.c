#include <stdio.h>

int main()
{
    float USD, NRP;
    printf("Enter USD: ");
    scanf("%f", &USD);
    float rate = 140;   
    NRP = USD * rate;
    printf("NRP = %f");
}
