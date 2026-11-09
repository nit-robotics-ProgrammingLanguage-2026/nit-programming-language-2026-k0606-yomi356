
#include <stdio.h>

int main(void)
{
    double ylimit;
    double g = 3.71;
    double y = 0.0;
    double v = 0.0;
    double t;

    // 目標の落下距離を入力する
    scanf("%lf", &ylimit);

    // 負の値の場合はNGを表示する
    if (ylimit < 0)
    {
        printf("NG");
        return 0;
    }

    // 目標距離が0の場合は0.000を表示する
    if (ylimit == 0)
    {
        printf("0.000");
        return 0;
    }

    // 0.1秒ずつ時間を増やして速度と距離を計算する
    for (t = 0.0; y < ylimit; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2;
    }

    // 速度を小数点以下3桁で表示する
    printf("%.3f", v);

    return 0;
}
