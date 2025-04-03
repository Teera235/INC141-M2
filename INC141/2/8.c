#include <stdio.h>

int main() {
    int array[10];        // ประกาศ array ขนาด 10 ช่องสำหรับเก็บตัวเลข
    int counter;          // ตัวแปร counter สำหรับควบคุม loop
    int number;           // ตัวแปรสำหรับเก็บตัวเลขที่รับมา

    // วน loop 10 ครั้งเพื่อรับตัวเลข
    for (counter = 0; counter < 10; counter++) {
        // รับตัวเลขจากผู้ใช้
        do {
            printf("Enter number %d (0-100): ", counter + 1);
            scanf("%d", &number);

            // ตรวจสอบว่าตัวเลขอยู่ในช่วง 0-100 หรือไม่
            if (number < 0 || number > 100) {
                printf("Invalid number! Please enter a number between 0 and 100.\n");
            }
        } while (number < 0 || number > 100); // วน loop จนกว่าตัวเลขจะอยู่ในช่วง 0-100

        // เก็บตัวเลขใน array
        array[counter] = number;
    }

    // แสดงผลลัพธ์ (array ที่เก็บตัวเลข)
    printf("Numbers in array:\n");
    for (counter = 0; counter < 10; counter++) {
        printf("%d ", array[counter]);
    }
    printf("\n");

    return 0; // ส่งค่า 0 เพื่อบอกว่าโปรแกรมจบการทำงานสำเร็จ
}