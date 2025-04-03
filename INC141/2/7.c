#include <stdio.h>

int main() {
    int a[8];           // ประกาศ array a ขนาด 8 ช่องสำหรับเก็บตัวเลขที่รับมา
    int b[8];           // ประกาศ array b ขนาด 8 ช่องสำหรับเก็บตัวเลขที่มากกว่า 0
    int count = 0;      // ตัวแปร count สำหรับควบคุม loop
    int indexA = 0;     // ตัวแปร indexA สำหรับควบคุมตำแหน่งใน array a
    int y = 0;          // ตัวแปร y สำหรับควบคุมตำแหน่งใน array b
    int number;         // ตัวแปรสำหรับเก็บตัวเลขที่รับมา

    // วน loop 8 ครั้งเพื่อรับตัวเลข
    while (count < 8) {
        // รับตัวเลขจากผู้ใช้
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        // เก็บตัวเลขใน array a
        a[indexA] = number;

        // ตรวจสอบว่าตัวเลขมากกว่า 0 หรือไม่
        if (number > 0) {
            b[y] = number; // คัดลอกตัวเลขไปยัง array b
            y++;           // เพิ่มตำแหน่งใน array b
        }

        indexA++;          // เพิ่มตำแหน่งใน array a
        count++;           // เพิ่ม count เพื่อวน loop
    }

    // แสดงผลลัพธ์ (array b ที่เก็บเฉพาะตัวเลขมากกว่า 0)
    printf("Numbers in array b (positive numbers only):\n");
    for (int i = 0; i < y; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0; // ส่งค่า 0 เพื่อบอกว่าโปรแกรมจบการทำงานสำเร็จ
}