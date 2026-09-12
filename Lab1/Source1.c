#include <stdio.h>
#include <locale.h>

int task_1() {
    setlocale(LC_CTYPE, "RUS");

    // 1)
    printf("123\n");

    // 2)
    printf("1\n2\n3\n");

    // 3)
    printf("\t1\n\t\t2\n\t\t\t3\n");

    // 4)
    printf("%1d\n%3d\n%5d\n", 1, 2, 3);

    // 5)
    printf("%10.3f\n", 12.234657);

    // 6)
    printf("%10.5f\n", 12.234657);

    // 7)
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);

    // 8)
    printf("Остаток от деления %d на %d равен %d\n", 7, 5, 5 % 2);

    // 9)
    printf("Произведение при умножении %d на %d равно %d\n", 2000, 4, 2000 * 4);

    // 10)
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);

    return 0;
}

int task_2() {
    setlocale(LC_CTYPE, "RUS");

    int n = 10, k = 45;
    float N = 10, K = 45;

    printf("Сейчас %d часов %d минут 00 секунд\n", n, k);
    printf("Идет %d минута суток\n", n * 60 + k);
    printf("До полуночи осталось %d часов и %d минут\n", 23 - n, 60 - k);
    printf("С 8.00 прошло %d секунд\n", ((n - 8) * 60 + k) * 60);
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", N / 24, K / 60);

    return 0;
}

// 18
int task_3() {
    setlocale(LC_CTYPE, "RUS");

    int n = 4, L = 7333, k = 3, m = 1;
    float result = (float)n / L;

    printf("Дано:\n\t%4d\n\t%d\n\t______\nОтвет:\n\t+00%*.*f\n", n, L, k, m, result);

    return 0;
}

int homework() {
    int L1 = 400, L2 = 200, v1 = 50, v2 = 60;

    printf("Длина первого поезда = %d, длина второго поезда = %d, скорость первого поезда = %d, скорость второго поезда равна = %d\n", L1, L2, v1, v2);

    int len = L1 + L2;
    printf("Общая длина = %d + %d = %d метров\n", L1, L2, len);

    int speed = v1 + v2;
    printf("Общая скорость = %d + %d = %d км/ч\n", v1, v2, speed);

    float speed1 = speed * 1000.0 / 3600;
    printf("Переведем скорость в м/c: %.2f\n", speed1);

    float time = len / speed1;
    printf("Продолжительность прохождения одного поезда против другого = %d/%.2f = %.2f секунд\n", len, speed1, time);

    return 0;
}

int main() {
    task_1();
    task_2();
    task_3();
    homework();

    return 0;
}
