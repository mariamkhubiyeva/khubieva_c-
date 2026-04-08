#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float calculateArea(struct Rectangle rect) {
    return rect.width * rect.height;
}

float calculatePerimeter(const struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}

int main() {
    struct Rectangle rect;

    printf("Введите ширину и высоту прямоугольника: ");
    scanf("%f %f", &rect.width, &rect.height);

    printf("Площадь: %.2f\n", calculateArea(rect));
    printf("Периметр: %.2f\n", calculatePerimeter(&rect));

    return 0;
}
