#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;

    for (int i = 0; i < signs_len; i++) {
        if (signs[i])
            answer += absolutes[i];
        else
            answer -= absolutes[i];
    }
    printf("%d", answer);
    return answer;
}

// Lv.1 음양 더하기
//  https://school.programmers.co.kr/learn/courses/30/lessons/76501
int main(void) {
    int a[3] = {4, 7, 12};
    bool b[3] = {true, false, true};
    int len = 3;
    solution(a, len, b, len);
}