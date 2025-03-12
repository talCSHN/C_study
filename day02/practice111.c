/* 함수 원형
   함수 원형, 함수 호출, 함수 정의
*/
#include <stdio.h>

//int func(int, int);     // 함수 원형
//int func(int a, int b);     // 이것도 가능

int calc(int, int, char);
int addCalc(int, int);
int subCalc(int, int);
int mulCalc(int, int);
int divCalc(int, int);

int main()
{
    printf("계산기 프로그램 실행\n");
    char op;
    int a;
    int b;
    printf("두 개의 정수 입력 : ");
    scanf_s("%d %d", &a, &b);
    printf("연산자 입력 : ");
    scanf_s(" %c", &op, sizeof(op));
    int returnVal1 = calc(a, b, op);
    printf("결과값 : %d", returnVal1);

    /*int resultVal = func(10, 20);
    printf("return value after calling func : %d", resultVal);*/
    return 0;
}

int addCalc(int a, int b) {
    int sum = a + b;
    return sum;
}
int subCalc(int a, int b) {
    int sum = a - b;
    return sum;
}
int mulCalc(int a, int b) {
    int sum = a * b;
    return sum;
}
int divCalc(int a, int b) {
    if (b == 0) {
        printf("0으로 나눌수 없음 \n");
        return 0;
    }
    int sum = a / b;
    return sum;
}

int calc(int a, int b, char op) {

    if (op == '+') {
        int resultVal = addCalc(a, b);
        return resultVal;
    }
    else if (op == '-') {
        int resultVal = subCalc(a, b);
        return resultVal;
    }
    else if (op == '*') {
        int resultVal = mulCalc(a, b);
        return resultVal;
    }
    else if (op == '/') {
        int resultVal = divCalc(a, b);
        return resultVal;
    }

}


//int func(int a, int b) {
//    int res = a + b;
//    return res;
//}