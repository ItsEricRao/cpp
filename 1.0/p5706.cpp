#include <cstdio>
int main(){
    float t, t_result;
    int n, n_result;
    scanf("%f %d",  &t, &n);
    t_result = t / n;
    n_result = n * 2;
    printf("%.3f\n%d", t_result, n_result);
}