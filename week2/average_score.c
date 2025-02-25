#include <stdio.h>

const int N = 3;
float average(int scores[]);

int main(void)
{
    int scores[N] = {72, 74, 50};
    printf("scores: %f \n", average(scores));
}

float average(int scores[])
{
    float score = 0;
    for (int i = 0; i < N; i ++)
    {
        score += scores[i];
    }
    score /= N;
    return score;
}