void setup() {
  // initialize serial communication at 9600 bits per second:
Serial.begin(9600);
pinMode(10,INPUT);//Setup for leads off detection L0+
pinMode(11,INPUT);//Setup for leads off detection L0-
}

void loop() {
 if((digitalRead(10)==1)||(digitalRead(11)==1)){
  Serial.println('!');
 }
 else{
 Serial.println(analogRead(A0));//send the value of analog input 0;
 }
delay(1);//wait for a bit to keep serial data from saturating

}
