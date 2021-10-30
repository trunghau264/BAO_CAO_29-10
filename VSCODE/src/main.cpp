#include <Arduino.h>
#include "THU_VIEN.h"
#include "KHAI_BAO_CHAN_VA_CAC_BIEN.h"
void setup()
{
  //========================================= KHỞI TẠO THỜI GIAN CHO RTC DS1302 =========================================//
  rtc.halt(false);                //thư viện của DS1302 chân rtc
  rtc.writeProtect(false);        //thư viện của DS1302 chân rtc
  rtc.setTime(11, 29, 20);                               //24h 
  rtc.setDate(28, 10, 2021);                              //NGAY_THANG_NAM SETUP 
  //============================================ KHỞI TẠO GHI CHO LCD =========================================//
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("");
  //========================================= CẤU HÌNH CHÂN VÀ SETUP CÁC BIẾN ============================//
  pinMode(relay, OUTPUT);
  digitalWrite(relay, 0);
  e = 0;
  chuky = 0;
  timechuky = 0;
  mode = 1;
  Serial.begin(9600);                                   // tạo kết nối 9600 bit mỗi giây
  //=========================================SETUP=====================================================//
  SIM900A.begin(9600);                                  //đồng bộ hóa với Sim900a
  delay(5000);                                          // tạo khoảng trễ là 5s
  // hiển thị trong Serial
  SIM900A.print("AT+CMGF=1\r");                         // ĐƯA TIN NHẮN VỀ DẠNG TEXT ĐỂ ĐỌC TIN NHẮN
  delay(100);
  a=0;
  T=2;
  TIMET=1;
}
#include"NOI_DUNG_TIN_NHAN.h"
void loop()
{ 
  
  #include"DOC_CAC_CAM_BIEN.h"
  #include"HIEN_THI_LCD.h"
  #include"DONG_NGAT_THEO_T.h"

  //============================GUI TIN NHAN VE HE THONG========================================//
  // KHI KHỞI ĐỘNG BIẾN a=0 chỉ gửi tin nhắn về 1 lân duy nhat
 if(a==0)
  {
  SendMessage();
  a++;
  CONTENT = "";    
  }

}
//===================================CHUONG TRINH CON GUI TIN NHAN==========================//


 