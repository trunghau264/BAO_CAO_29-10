void SendMessage()
{
  SIM900A.println("AT+CMGF=1");                     //Khởi động chế độ văn bản
  delay(1000);                                      //tạo độ trễ
  SIM900A.println("AT+CMGS=\"+84395974621\"\r");    //số di động người nhận
  delay(1000);                                      //tạo độ trễ
  SIM900A.println("HE THONG CUA QUY KHACH DA DUOC KHOI DONG");                        //nội dung tin nhắn
  SIM900A.println();                                //XUONG HANG
  SIM900A.println("NHIET DO MOI TRUONG: "); 
  SIM900A.println(Temp);                            //COT THU 2
  SIM900A.println();                                //XUONG HANG
  SIM900A.println("DO AM MOI TRUONG: "); 
  SIM900A.println(Humidity);  
  SIM900A.println();                                //XUONG HANG
  SIM900A.println("CHU KY KHOI DONG: "); 
  SIM900A.println(T);
  SIM900A.println();                                //XUONG HANG
  SIM900A.println("THOI GIAN CUA CHU KY:  "); 
  SIM900A.println(TIMET);
  delay(100);                                       //tạo độ trễ
  SIM900A.println((char)26);                        //Hoàn thành gửi
  delay(1000);                                      //tạo độ trễ
}
void SIM()
{
 if (SIM900A.available() > 0)                       // nếu có tín hiệu lớn hơn 0 {    
  {
  CONTENT = SIM900A.readString();                   // đọc biến Message                           //Hiển thị biến trên Serial
  delay(10);                                        //Tạo một khoảng thời gian trễ
  }
}