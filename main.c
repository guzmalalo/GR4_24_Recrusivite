#include <stdio.h>

int puissance(int b, int n){
    // condition arret
    if(n == 0){
        return 1;
    }
    return b* puissance(b, n-1);
}

int fibRec(int n){
    // condition arret
    if(n<=2) return 1;
    // cas général
    return fibRec(n-2) + fibRec(n-1);
}

// version iterative
int fibIte(int n){
    // valeurs ini
    int fn;
    int fn_1=1;
    int fn_2=1;

    if(n<=2){
        return 1;
    }

    // iterations
    for (int i = 2; i < n; ++i) {
        fn = fn_1 + fn_2;
        fn_2 = fn_1;
        fn_1 = fn;
    }

    return fn;
}

int main() {

    for (int i = 0; i < 10; ++i) {
        printf("La valeur de %d ^ %d = %d \n", 2,i, puissance(2,i));
    }

    return 0;
}
