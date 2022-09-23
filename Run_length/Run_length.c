#include <stdio.h>
#include <string.h>

char str_a[1001];
char ans[2001];
int len_a;
int cnt;

int main() {
    scanf("%s", str_a);

    len_a = strlen(str_a);

    // 변환
    // 입력의 첫번째 값을 읽고 초기화합니다.
    char curr_char = str_a[0];
    int num_char = 1;
    for (int i = 1; i < len_a; i++) {
        if (str_a[i] == curr_char) {
            // 지금까지의 문자와 같으면 연속된 문자 개수만 추가해 주고 넘어갑니다.
            num_char++;
        }
        else {
            // 지금까지의 문자와 다르면 새로운 문자로 바꿔줘야 합니다.
            // 지금까지 세어온 curr_char와 num_char를 기록합니다.
            ans[cnt++] = curr_char;

            char mystr[10];
            sprintf(mystr, "%d", num_char);
            strcat(ans, mystr);
            cnt = strlen(ans);

            // curr_char와 num_char를 현재 값으로 초기화합니다.
            curr_char = str_a[i];
            num_char = 1;
        }
    }
    // 마지막 덩어리에 해당하는 curr_char와 num_char를 기록합니다.
    ans[cnt++] = curr_char;

    char mystr[10];
    sprintf(mystr, "%d", num_char);
    strcat(ans, mystr);
    cnt = strlen(ans);

    printf("%d\n%s", cnt, ans);

    return 0;
}