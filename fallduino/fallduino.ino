int sen =A0;
int fr = 0;

void setup(){

  Serial.begin(9600);
}

void loop(){

  fr = analogRead(sen);
  
  if(fr > 100){
      Serial.println(fr);
      fr = 0;
      delay(2000);
  }
}
