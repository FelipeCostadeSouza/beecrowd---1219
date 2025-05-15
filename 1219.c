#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897
int main() {
    double a, b, c, p, AT, Ac, AC, s, v, r;
    
    while(scanf("%lf %lf %lf", &a, &b, &c)!=EOF){
        p=(a+b+c)/2;
        AT=sqrt(p*(p-a)*(p-b)*(p-c));
        
        Ac=pow(AT/p,2)*PI;
        AC=pow(a*b*c/(4*AT),2)*PI;
        
        r=Ac;
        v=AT-r;
        s=AC-(v+r);
        
        printf("%.4lf %.4lf %.4lf\n", s, v, r);
    }
    
    return 0;
}
