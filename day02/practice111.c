/* �Լ� ����
   �Լ� ����, �Լ� ȣ��, �Լ� ����
*/
#include <stdio.h>

//int func(int, int);     // �Լ� ����
//int func(int a, int b);     // �̰͵� ����

int calc(int, int, char);
int addCalc(int, int);
int subCalc(int, int);
int mulCalc(int, int);
int divCalc(int, int);

int main()
{
    printf("���� ���α׷� ����\n");
    char op;
    int a;
    int b;
    printf("�� ���� ���� �Է� : ");
    scanf_s("%d %d", &a, &b);
    printf("������ �Է� : ");
    scanf_s(" %c", &op, sizeof(op));
    int returnVal1 = calc(a, b, op);
    printf("����� : %d", returnVal1);

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
        printf("0���� ������ ���� \n");
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