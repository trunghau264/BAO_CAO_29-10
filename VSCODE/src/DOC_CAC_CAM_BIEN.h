//===============================ĐỌC VÀ BIẾN ĐỔI CÁC GIÁ TRỊ ANALONG===============================//
  sensorValue = analogRead(analogInPin);
  Temp = sensorValue-SensorValueLow;
  Temp = Temp/SensorValueDiff;
  Temp = Temp*TempValueDiff;
  Temp = Temp+TempValueLow;
  Temp = Temp - 32;
  Temp = Temp +20;

  sensorHumidity = analogRead(analogA1);
  Humidity = map(sensorHumidity, 0, 1023, 0, 100); //BIEN DOI GIA TRI ANALOG VE DO AM
  