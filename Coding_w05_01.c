#include <stdio.h>

int main() {               //เริ่มต้นโปรแกรมฟังก์ชันหลัก
    char name = 'S';        //ประกาศตัวแปร name เป็นchar = S
    int age = 19;           // ประกาศตัวแปร age เป็น int =19
    float weight = 75.5;    // ประกาศตัวแปร weight เป็น float =75.5 
//แสดง ชื่อ และ อายุในบบรทัดที่1
    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);
//แสดงน้ำหนักในบบรทัดที่2
    return 0;    //คืนค่า0เพื่อจบการทำงาน
}