#include <stdio.h>
#include <string.h> // รวม library string.h เพื่อใช้ฟังก์ชัน strcat()

int main() {
    char string1[100]; // ประกาศ string1 ขนาด 100 ช่อง (เพื่อให้เพียงพอสำหรับการต่อ string)
    char string2[50];  // ประกาศ string2 ขนาด 50 ช่อง

    // รับ string1 จากผู้ใช้
    printf("Enter string 1: ");
    scanf("%s", string1); // รับ string1 (ไม่ต้องใช้ & เพราะ string เป็น array)

    // รับ string2 จากผู้ใช้
    printf("Enter string 2: ");
    scanf("%s", string2); // รับ string2

    // ต่อ string2 เข้ากับ string1 โดยใช้ strcat()
    strcat(string1, string2); // ต่อ string2 เข้ากับ string1 และเก็บผลลัพธ์ใน string1

    // แสดงผลลัพธ์
    printf("Result after concatenation: %s\n", string1);

    return 0; // ส่งค่า 0 เพื่อบอกว่าโปรแกรมจบการทำงานสำเร็จ
}