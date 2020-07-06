#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
      scanf("%d", &A[i]);
    }
    
    ub = 1000000000;
    lb = 0;
    
    
    
    while (ub - lb > 1) {
        int mid = (ub + lb) / 2;
        int a = 0;
        for(i = 0; i < n; i++){
            a += A[i] / mid;
        }
        if (a >= k) lb = mid;
        else ub = mid;
        
    }
    printf("%d\n", lb);
    
    
  return 0;
}
