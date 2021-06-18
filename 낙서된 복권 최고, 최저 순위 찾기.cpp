#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int zero_num = 0;
    int same_num = 0;
    int i, j = 0;
    
    for(i = 0; i < 6; i++)
    {
        if(lottos[i] == 0)
        {
            zero_num++;
            continue;
        }
       for(j = 0; j < 6; j++)
       {
           if(lottos[i] == win_nums[j])
           {
               same_num++;
           }
       }
    }
    
    if(same_num + zero_num != 0)
    {
        answer[0] = 7 - (same_num + zero_num);
    }
    else
    {
        answer [0] = 6;
    }
    
    if(same_num != 0)
    {
        answer[1] = 7 - (same_num);
    }
    else
    {
        answer[1] = 6;
    }
    
    
    return answer;
}
