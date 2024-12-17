#include <stdio.h>

int main() {
    int n, i;
    long long fib1 = 0, fib2 = 1, fibNext; // Khai báo số Fibonacci ban đầu

    // Yêu cầu người dùng nhập vào số nguyên n
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    // Kiểm tra nếu n nhỏ hơn hoặc bằng 0
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong lon hon 0.\n");
    } else {
        printf("Day Fibonacci %d so dau tien la:\n", n);

        for (i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%lld ", fib1); // In số Fibonacci đầu tiên
            } else if (i == 2) {
                printf("%lld ", fib2); // In số Fibonacci thứ hai
            } else {
                fibNext = fib1 + fib2; // Tính số Fibonacci tiếp theo
                printf("%lld ", fibNext);
                fib1 = fib2; // Cập nhật fib1
                fib2 = fibNext; // Cập nhật fib2
            }
        }
        printf("\n"); // Xuống dòng sau khi in xong
    }

    return 0;
}
