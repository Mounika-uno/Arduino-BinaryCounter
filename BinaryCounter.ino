
int ledPin[] = {1,2,3,4,5,6,7,8};
int maxCount= 256;
int delay_val = 100;

void setup() {
  // put your setup code here, to run once:
  // setting each pin as output pin,..... don"t know why should we do this
  for (int i=0; i<9; i++){
    pinMode(ledPin[i],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  // Loop through each number (0 to 255)
  for(int counter=0;counter<maxCount; counter++){
    // pass the count number to displayBinary function
    displayBinary(counter);
    delay(delay_val);
    }
}


void displayBinary(byte numToShow){
  for(int i=0; i<8; ++){

    if(bitRead(numToShow,i)==1){
      digitalWrite(ledPin[i],HIGH)
      }
     else{
            digitalWrite(ledPin[i],LOW)
      }
    }
  }
