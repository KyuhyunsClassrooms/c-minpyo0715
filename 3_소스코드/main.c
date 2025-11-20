#include <stdio.h>

void func1() {
    printf(">> 역학시뮬레이션 실행!\n");
    printf("순서대로 가속도, 초기속도, 운동시간을 입력해주세요(정수)\n");
    int a, v, t, s;
    
    scanf("%d %d %d", &a, &v, &t);
    

    s = (0.5 * a * t * t) + (v * t);
    printf("물체의 위치는 %d입니다\n" , s);

  


}

void func2() {
    printf(">> 파동 주기 계산기 실행!\n");
    printf("순서대로 파장과 속도를 입력해주세요");
    int w, v, s;

    scanf("%f %f %f" &w, %v, &s);
    


}

int main() {
    int select;

    // 함수 선택 메뉴 출력
    printf("=== 함수 선택 ===\n");
    printf("1. 역학시뮬레이션 실행\n");
    printf("2. 파동 주기 계산기 실행\n");
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
