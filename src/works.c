#include <stdio.h>

int n;
int k;
int A[100000];


int p(int a){
    int i;
    int sum = 0, worker = 1;
    for(i = 0; i < n; i++){
        if(a >= A[i]){
            if(a >= sum + A[i]){
                sum += A[i];
            }
            else{
                sum = A[i];
                worker++;
            }
        }
        else return 0;
    }
    
    return k >= worker;
}

int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
      scanf("%d", &A[i]);
    }
    
    lb = 0;
    ub = 10000 * n;
    
    while (ub - lb > 1){
        int mid = (lb + ub) / 2;
        if(p(mid)) ub = mid;
        else lb = mid;
    }
    
    printf("%d\n", ub);
    return 0;
}

