SoftwareSerial SIM900A(5, 6);     // khai báo chân TX,RX
//_____________cấu hình lcd_________// i2c=0x27 lcd= 16.2
LiquidCrystal_I2C lcd(0x27, 16, 2); 
//_______ khai báo các chân của DS1302__________//

DS1302 rtc(2, 3, 4);//rst.dat.clk
Time t;                         // BIẾN t LẤY GIÁ TRỊ THỜI GIAN CỦA DS1302 để hiển thị                                       
Time g;                         // BIẾN g LẤY GIÁ TRỊ THỜI GIAN CỦA DS1302 để cài đặt chu kỳ
//=========================================CÁC HẰNG SỐ=========================================
const int SensorValueLow = 463; 
const int SensorValueDiff = 36; 
const int TempValueDiff = 42; 
const int TempValueLow = 9;
int sensorValue = 0;
double Temp = 0;
int sensorHumidity = 0;
int Humidity = 0;
String CONTENT;                 // khai báo biến có dữ liệu là String(kiễu dữ liệu CHUỖI)
int relay = 7;                   // Khai báo chân led ở chân 12
int chuky;                      // Chu kỳ có nghĩa là 15 phút thì tưới 1 lần
int timechuky;                  // Time chu kỳ có nghĩa là 1 lần tưới là tưới 15 phút
int e, mode;                    // Biến hỗ trợ cho việc lập chu kỳ
int a;
const int analogInPin = A0;     // chân tín hiệu của pt100 nối với chân A0
const int analogA1 = A1;  // chân tín hiệu của CB_DO_AM nối với chân A1
int T;
int TIMET;
// dòng này để hiển thị kí tự độ C
byte degree[8] =
{ 
  0B01110,
  0B01010,
  0B01110,
  0B00000,
  0B00000,
  0B00000,
  0B00000,
  0B00000
};