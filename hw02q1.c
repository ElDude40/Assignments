

#include <stdio.h>
#pragma warning(disable : 4996) // needed in VS. Works like _CRT_SECURE_NO_WARNINGS.


int subf(int a, int b) {

return a - b;

}
int cubef(int a) {

return a * a * a;

}
int minf(int a, int b) {

if (a <= b) {

return a;

}

else {

return b;

}

}

int oddf(int a) {
    
    if (a % 2 == 1) {
        
        return 1;
        
    }
    
    else {
        
        return 0;
        
    }
}
#define subm(a, b) (a - b)
#define cubem(a) (a * a * a)
#define minm(a, b) ((a < b) ? a : b)
#define oddm(a) ((a % 2 == 1) ? 1 : 0)

    int main(void){
        
       int a = 3, b = 6;
        
        int test = subf(a, b);
        
        printf("subf(a, b) = %d\n", test);
        
        test = subm(a, b);
        
        printf("subm(a, b) = %d\n", test);
        
        test = subf(a++, b--);
        
        printf("subf(a++, b--) = %d\n", test);
        
        a = 3; b = 6;
        
        test = subm(a++, b--);
        
        printf("subm(a++, b--) = %d\n", test);
        
        a = 3; b = 6;
        
        test = cubef(a);
        
        printf("cubef(a) = %d\n", test);
        
        test = cubem(a);
        
        printf("cubem(a) = %d\n", test);
        
        test = cubef(--a);
        
        printf("cubef(a--) = %d\n", test);
        
        a = 3; b = 6;
        
        test = cubem(--a);
        
        printf("cubem(a) = %d\n", test);
        
        a = 3; b = 6;
        
        test = minf(a, b);
        
        printf("minf(a, b) = %d\n", test);
        
        test = minm(a, b);
        
        printf("minm(a, b) = %d\n", test);
        
        test = minf(--a, --b);
        
        printf("minf(--a, --b) = %d\n", test);
        
        a = 3; b = 6;
        
        test = minm(--a, --b);
        
        printf("minm(--a, --b) = %d\n", test);
        
        a = 2; b = 6;
        
        test = oddf(a);
        
        printf("oddf(a) = %d\n", test);
        
        test = oddm(a);
        
        printf("oddm(a) = %d\n", test);
        
        test = oddf(a++);
        
        printf("oddf(a++) = %d\n", test);
        
        a = 2; b = 6;
        
        test = oddm(a++);
        
        printf("oddm(a++) = %d\n", test);
        
        return 0;
        
    }

