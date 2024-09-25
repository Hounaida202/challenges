 #include <stdio.h>
int main(){
    float a,b,s,m,p;
    printf("tapez le premier nombre:");
    scanf("%f",&a);
    printf("tapez le deuxieme nombre:");
    scanf("%f",&b);
    s= a + b;
    m= a - b;
    p= a * b;

    printf("%f + %f = %f ",a,b,s);
    printf("%f - %f = %f ",a,b,m);
    printf("%f * %f = %f ",a,b,p);

}