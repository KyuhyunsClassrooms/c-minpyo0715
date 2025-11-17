#include <stdio.h>

void func1() {
    printf(">> func1 실행!\n");
}

void func2() {
    printf(">> func2 실행!\n");
}

int main() {
    int select;

    // 함수 선택 메뉴 출력
    printf("=== 함수 선택 ===\n");
    printf("1. func1 실행\n");
    printf("2. func2 실행\n");
    printf("번호 입력: ");
    scanf("%d", &select);

    // 선택된 함수 실행
    if (select == 1)
        func1();
    else if (select == 2)
        func2();
    else
        printf("잘못된 선택입니다.\n");

    return 0;
}
