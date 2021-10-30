//===============================NGÀY THÁNG NĂM=================================//
  t = rtc.getTime();                                      //ĐẶT BIẾN t để lấy dữ liệu
  
  lcd.setCursor(0, 0);                                    // cột1,hàng1
  lcd.print(t.date);                                      //NGAY
  lcd.print(":");
  lcd.print(t.mon);                                       //THANG
  lcd.print(":");
  lcd.print("21");                                        //NAM
                             
  lcd.setCursor(8, 0);
  lcd.print("|");
  lcd.print("T");
  lcd.print(":"); 
  lcd.print(round(Temp));                                // BIEN NHIET DO PT100
  lcd.write(1);
  lcd.print("C");
  lcd.createChar(1, degree);
  

  //===============================GIỜ PHÚT GIÂY=================================//

  lcd.setCursor(0, 1);                              // cột1,hàng2
  lcd.print(t.hour);                                // GIO
  lcd.print(":");
  lcd.print(t.min);                                 // PHUT
  lcd.print(":");
  lcd.print(t.sec);                                 // GIAY
  lcd.setCursor(8, 1);
  lcd.print("|");
  lcd.print("H");                                  //DO _AM
  lcd.print(":");
  lcd.print(Humidity);                              // lệnh làm tròn round
  lcd.print("%");                                   //%