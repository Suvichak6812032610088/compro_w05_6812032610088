#include <stdio.h>
#include <string.h>


typedef struct {
    char name[2]; // ชื่อประกาศตัวแปร
    int age; // อายุ
    float height_cm; // ส่วนสูง (เซนติเมตร)
    float weight_kg; // น้ำหนัก (กิโลกรัม)
    char grade_code[2]; // รหัสเกรด
} Student;

int main() {
    
    Student students[] = {
        {"S", 19, 175.7, 70.7, "D"},//ข้อมูลของนักเรียน
        {"C", 18, 185.7, 65.5, "C"},//ข้อมูลของนักเรียน
        {"D", 19, 150.7, 45.2, "B"},//ข้อมูลของนักเรียน
    };


    int num_students = sizeof(students) / sizeof(students[0]);//คำนวณจำนวนของนักเรียน

    printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง
    printf("| Name  | Age |Height(cm)| Weight(kg)|Grade Code |\n");//เส้นขอบตางราง
    printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง

    for (int i = 0; i < num_students; i++) {//ลูปข้อมูลตามสูตร ที่ i<num_students โดย i=0
        // แสดงผลข้อมูลของนักเรียนแต่ละคน
        // ใช้ %s สำหรับชื่อ, %d สำหรับอายุ, %.1f สำหรับส่วนสูงและน้ำหนัก, และ %s สำหรับรหัสเกรด
    printf("| %s     | %3d | %8.1f | %9.1f | %9s |\n",//ตัวแปรที่ใช้ในการแสดงผล และ ขอบตาราง
               students[i].name,// ชื่อของนักเรียน
               students[i].age,// อายุของนักเรียน
               students[i].height_cm,// ส่วนสูงของนักเรียน
               students[i].weight_kg,// น้ำหนักของนักเรียน
               students[i].grade_code);// รหัสเกรดของนักเรียน
               printf("+-------+-----+----------+-----------+-----------+\n");//เส้นขอบตางราง
    }
    return 0;

    
}