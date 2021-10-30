//=================================KHI KHOI DONG THI GUI TIN NHAN 1 LAN===============================//
  g = rtc.getTime ();
   if(e==0)   // CHU KY KHOI DONG
  {
    chuky=g.min+T;// set thoi gian cach 15 phut tuoi 1 lan 
    if(chuky>59)
    {
      chuky=chuky-59;
    }
    else 
    {
      chuky=chuky;
    }
    e=1;
  }
//=================================THUẬT TOÁN TẮT MỞ CHU KỲ SỬ DỤNG DS1302===============================//
if(t.min==chuky&&e==1)  // THOI GIAN CUA CHU KY
 {
  mode++;
  timechuky=g.min+TIMET;      // set thoi gian cach 15 phut tuoi 1 lan moi lan la 5 phut
  if(timechuky>59)
  {
    timechuky=timechuky-59;
  }
  else{timechuky=timechuky;}
   e=2;
 }
 if(t.min==timechuky&&e==2)     // thoi gian phut = time chu ky
 {
  mode--;
  e=0;                          // khi mà nó tắt rồi mới bắt đầu đếm lại
 }
 if(mode%2==0)
 {
  digitalWrite(relay,1);// bat dong co
 }
  else if(mode%2!=0)
  {
    digitalWrite(relay,0);// tat dong co
  }
