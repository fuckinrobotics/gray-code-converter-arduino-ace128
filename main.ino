void setup() {
  for (int i = 2; i < 10; i++)
  pinMode(i, OUTPUT);               
  Serial.begin(9600);
}

void loop() {
  byte c =0b00000000 ;
  for (int i = 2; i < 10; i++){
    c=c<<1;
    int b =digitalRead(i);
    if (b==1){
      c=c+0b00000001;
    }
  }
  Serial.println(c,DEC);  
}
