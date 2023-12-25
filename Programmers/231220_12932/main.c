#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당
    int* answer = (int*)malloc(sizeof(int) * 1000);
    int i = 0;
    while (n != 0) {
        answer[i] = n % 10;
        n = n / 10;
        i++;
    }
    // 배열의 끝을 알려주기 위해 NULL 문자 사용
    // NULL로 넣을 시 warning 발생
    answer[i] = '\0';
    return answer;
}

// Lv.1 자연수를 뒤집어 배열로 만들기
// https://school.programmers.co.kr/learn/courses/30/lessons/12932
int main(void) {
    long long int num;
    int* result;
    scanf("%lld", &num);
    result = solution(num);
    int i = 0;
    while (result[i]) {
        printf("%d ", result[i]);
        i++;
    }
}