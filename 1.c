#include <stdio.h>

int main() {
    int array[10];              // ประกาศ array ขนาด 10 ช่องสำหรับเก็บตัวเลข
    int positive = 0, negative = 0, zero = 0; // ตัวแปรนับจำนวนตัวเลขบวก, ลบ, และศูนย์ เริ่มต้นที่ 0
    int counter;                // ตัวแปร counter สำหรับควบคุม loop

    // รับข้อมูลจากผู้ใช้
    printf("Enter 10 numbers:\n"); // แสดงข้อความให้ผู้ใช้ป้อนตัวเลข 10 ตัว
    for (counter = 0; counter < 10; counter++) { // วน loop 10 รอบเพื่อรับข้อมูล
        scanf("%d", &array[counter]); // รับตัวเลขและเก็บใน array[counter]
    }

    // ตรวจสอบและนับจำนวนตัวเลขบวก, ลบ, และศูนย์
    for (counter = 0; counter < 10; counter++) { // วน loop 10 รอบเพื่อตรวจสอบค่าใน array
        if (array[counter] > 0) {     // ถ้าค่าใน array เป็นบวก
            positive++;               // เพิ่มจำนวนตัวเลขบวก
        } else if (array[counter] < 0) { // ถ้าค่าใน array เป็นลบ
            negative++;               // เพิ่มจำนวนตัวเลขลบ
        } else {                      // ถ้าค่าใน array เป็น 0
            zero++;                   // เพิ่มจำนวนศูนย์
        }
    }

    // แสดงผลลัพธ์
    printf("Positive numbers: %d\n", positive); // พิมพ์จำนวนตัวเลขบวก
    printf("Negative numbers: %d\n", negative); // พิมพ์จำนวนตัวเลขลบ
    printf("Zero numbers: %d\n", zero);        // พิมพ์จำนวนศูนย์

    return 0;                      // ส่งค่า 0 เพื่อบอกว่าโปรแกรมจบการทำงานสำเร็จ
}
