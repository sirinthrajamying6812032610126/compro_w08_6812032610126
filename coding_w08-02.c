#include <stdio.h> // เรียกใช้ไลบรารีสำหรับฟังก์ชันการรับ/แสดงผลข้อมูล (เช่น printf, scanf)

int main() { // ฟังก์ชันหลักของโปรแกรม
    int start_number, stop_number; // ประกาศตัวแปรเพื่อเก็บค่าตัวเลขเริ่มต้นและสิ้นสุด

    // รับค่าตัวเลขเริ่มต้นจากผู้ใช้
    printf("Enter start number: "); // แสดงข้อความเพื่อบอกให้ผู้ใช้ป้อนค่า
    scanf("%d", &start_number); // รับค่าตัวเลขจำนวนเต็มจากผู้ใช้และเก็บไว้ในตัวแปร start_number

    // รับค่าตัวเลขสิ้นสุดจากผู้ใช้
    printf("Enter stop number: "); // แสดงข้อความเพื่อบอกให้ผู้ใช้ป้อนค่า
    scanf("%d", &stop_number); // รับค่าตัวเลขจำนวนเต็มจากผู้ใช้และเก็บไว้ในตัวแปร stop_number
    
    printf("Start number is %d and stop number is %d\n", start_number, stop_number); 
    // แสดงข้อความ "Start number is... and stop number is..."
    // โดยใช้ค่าที่รับจากผู้ใช้

    printf("----------------------------------\n");  // แสดงเส้นคั่นเพื่อความสวยงาม

    printf("Sequence from start to stop: "); // แสดงข้อความนำ "Sequence from start to stop:"

    // ใช้ลูป for เพื่อสร้างและแสดงลำดับตัวเลข
    // - กำหนดให้ตัวแปร i เริ่มต้นที่ start_number
    // - ลูปจะทำงานตราบใดที่ i มีค่าน้อยกว่าหรือเท่ากับ stop_number
    // - ในแต่ละรอบ i จะถูกเพิ่มค่าขึ้นทีละ 1 (i++)
    for (int i = start_number; i <= stop_number; i++) {
        printf("%d ", i); // แสดงค่าของ i ในแต่ละรอบ ตามด้วยช่องว่าง
    }
    printf("\n"); // ขึ้นบรรทัดใหม่หลังจากแสดงลำดับตัวเลขเสร็จสิ้น
    printf("Thank you.\n");  // แสดงข้อความขอบคุณ

    return 0; // ส่งค่ากลับ 0 เพื่อบอกว่าการทำงานของโปรแกรมเสร็จสมบูรณ์
}