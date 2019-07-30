bool varre()
{
  bool flag = true;
 
  int leituraporta = analogRead(A3);
  float teclado = leituraporta * (5.0 / 1023.0);
 if(teclado >= 0.9 && teclado <= 1)
  {   
    delay(300);
    if(cont >= 4)
     cont = 1;
    else
     cont++;
  }
  else if(teclado >= 1.0 && teclado <= 1.20)
   dig = 0;
  else if(teclado >= 2.3 && teclado <= 2.5)
   dig = 1;
  else if(teclado >= 2.2 && teclado <= 2.3)
   dig = 2;
  else if(teclado >= 2.0 && teclado <= 2.1)
   dig = 3; 
  else if(teclado >= 3.7 && teclado <= 3.8)
   dig = 4;
  else if(teclado >= 3.3 && teclado <= 3.4)
   dig = 5;
  else if(teclado >= 3.0 && teclado <= 3.2)
   dig = 6;
  else if(teclado >= 4.8 && teclado <= 5.0)
   dig = 7;
  else if(teclado >= 4.5 && teclado <= 4.6)
   dig = 8;
  else if(teclado >= 4.1 && teclado <= 4.2)
   dig = 9;
  else if(teclado >= 2.7 && teclado <= 2.9)
   digitalWrite(16,HIGH);
  else if(teclado >= 1.8 && teclado <= 2 )
  { 
    int j = 1;
    counting = true;
    tempo = millis();
    int segundos = (segs[0] * 10) + segs[1];
    int minutos = (mins[0] * 10) + mins[1];
    while(j == 1)
   {    
    if(millis() - tempo >= 1000)
   {
//      Serial.println("Entrei");
      tempo = millis();
      if(segundos < 0)
      {
        segundos = 59;
        minutos = minutos - 1;
      }
      else if(segundos == 0 && minutos == 0)
      {
        j =0;
      }
        else if(analogRead(3) >= 553 && analogRead(3) <= 594)
        digitalWrite(16,HIGH);
      else 
      {
        segundos--;
      }
    }
    int decseg = segundos /10;
    seteseg(3);
    decod(decseg);
    int uniseg = segundos - decseg*10;
    seteseg(4);
    decod(uniseg);
    int decmin = minutos /10;
    seteseg(1);
    decod(decmin);
    int unimin = minutos - decmin*10;
    seteseg(2);
    decod(unimin);
    
   
  }
  
  }
  else
  {
    flag = false;
  }
  return flag;
}
