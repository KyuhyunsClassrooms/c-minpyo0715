#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    숫자 맞추기 게임 프로그램
    - 1부터 100 사이의 숫자를 맞추는 게임
*/

/* 함수 선언 */
int generate_random();
void start_game();

int main() {
    int play_again = 1;
    
    printf("============================\n");
    printf("   숫자 맞추기 게임 v1.0   \n");
    printf("============================\n\n");
    
    while (play_again == 1) {
        start_game();
        
        printf("\n다시 하시겠습니까? (1: 예, 0: 아니오): ");
        scanf("%d", &play_again);
        while (getchar() != '\n');  /* 입력 버퍼 비우기 */
        printf("\n");
    }
    
    printf("게임을 종료합니다. 감사합니다!\n");
    return 0;
}

/* 1~100 사이의 랜덤 숫자 생성 */
int generate_random() {
    srand(time(NULL));  /* 시간 기반 난수 초기화 */
    return rand() % 100 + 1;  /* 1~100 범위 */
}

/* 게임 시작 함수 */
void start_game() {
    int answer = generate_random();
    int guess;
    int tries = 0;
    
    printf("=== 게임 시작! ===\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요!\n\n");
    
    while (1) {
        tries++;
        printf("숫자를 입력하세요 (시도 %d회): ", tries);
        scanf("%d", &guess);
        while (getchar() != '\n');  /* 입력 버퍼 비우기 */
        
        /* 입력 범위 검증 */
        if (guess < 1 || guess > 100) {
            printf("⚠️  1부터 100 사이의 숫자를 입력하세요!\n\n");
            tries--;  /* 잘못된 입력은 횟수에서 제외 */
            continue;
        }
        
        /* 정답 비교 */
        if (guess < answer) {
            printf("UP! 더 큰 숫자입니다.\n\n");
        } else if (guess > answer) {
            printf("DOWN! 더 작은 숫자입니다.\n\n");
        } else {
            printf("🎉 정답입니다!\n");
            printf("총 시도 횟수: %d회\n", tries);
            break;
        }
    }
}
