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
    
    lb = 0;
    ub = 10000000000;
    
    while (ub - lb > 1) {
        int mid = (lb + ub) / 2;
        int a = 0;
        for(i = 0; i < n; i++){
            a += (A[i] + mid - 1) / mid;
        }
        
        if(a > k) lb = mid;
        else ub = mid;
    }
    
    printf("%d\n", ub);
    return 0;
}

