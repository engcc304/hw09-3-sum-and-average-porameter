/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)
    
    Test case:
        Input value to Array1 [0]: 
            9
        Input value to Array1 [1]: 
            5
        Input value to Array1 [2]: 
            6
        Input value to Array1 [3]: 
            8
        Input value to Array1 [4]: 
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]: 
            7
        Input value to Array1 [1]: 
            -3
        Input value to Array1 [2]: 
            5
        Input value to Array1 [3]: 
            19
        Input value to Array1 [4]: 
            27
        Input value to Array1 [5]: 
            -16
        Input value to Array1 [6]: 
            13
        Input value to Array1 [7]: 
            -7
        Input value to Array1 [8]: 
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*/

#include <stdio.h>

int main() {
    int Array1[100] ;  // สร้างอาเรย์ Array1 ที่มีขนาดสูงสุดเท่ากับ 100
    int Array2[100] ;  // สร้างอาเรย์ Array2 ที่มีขนาดสูงสุดเท่ากับ 100
    int input , i = 0 ;

    // รับข้อมูลจากผู้ใช้และบันทึกลงใน Array1
    do {
        printf( "Input value to Array1 [%d]: \n" , i ) ;
        scanf( "%d" , &input ) ;

        if ( input != -1 ) {
            Array1[i] = input ;
            i++ ;
        }
    } while ( input != -1 ) ;

    // คัดลอกข้อมูลจาก Array1 ไปยัง Array2
    for ( int j = 0; j < i; j++ ) {
        Array2[j] = Array1[j] ;
    }

    // แสดงข้อมูลใน Array1
    printf( "Array1 = " ) ;
    for ( int j = 0 ; j < i ; j++ ) {
        printf( "%d " , Array1[j] ) ;
    }

    // แสดงข้อมูลใน Array2
    printf( "\nArray2 = " ) ;
    for ( int j = 0; j < i ; j++ ) {
        printf( "%d " , Array2[j] ) ;
    }

    return 0 ;
}
