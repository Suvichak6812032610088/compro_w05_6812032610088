#include <stdio.h>

int main() {
    char name[30];//ประกาศตัวแปรชื่อ
    int age;// ประกาศตัวแปรอายุ
    float height;// ประกาศตัวแปรส่วนสูง
    char subject;// ประกาศตัวแปรวิชา
    float grade;// ประกาศตัวแปรเกรด
    char gradeLetter;// ประกาศตัวแปรเกรดตัวอักษร

    printf("Enter your name, age, height, subject, grade, and grade letter (separated by spaces): ");//แสดงข้อความกำกับว่าต้องใส่ข้อมูลอะไรบ้าง
    scanf("%29s %d %f %c %f %c", name, &age, &height, &subject, &grade, &gradeLetter);//รับค่าจากผู้ใช้โดยใช้ scanf

    printf("%s is %d year old and %.1f centimeters tall.\n", name, age, height);//แสดงผลออกมาบนบรรทัดที่1 ชื่่อ,อายุ และส่วนสูงตามลำดับ
    printf("in subject %c, %s got %.2f which is symbolic as %c.\n", subject, name, grade, gradeLetter);//แสดงผลออกมาบนบรรทัดที่2




    return 0;
}
