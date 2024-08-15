#include <LedControl.h>

int DIN = 11;
int cs = 10;
int CLK = 13;
LedControl lc=LedControl(DIN, CLK, cs,4);

int position=0;

int Marios_ideas [1] [8] ={
  {0,0,0,0,0,0,0,1}
  };


void setup() {

  for(int i=0;i<4;i++){
  lc.shutdown(i,false);
  lc.setIntensity(i,1);
  lc.clearDisplay(i);
  }
  delay(3000);
}

void loop() {
  for (int k=0;k<4;k++){
    for (int i=7;i>-1;i--){
      for(int j=0;j<8;j++){
      lc.setLed(k,j,i, 1);
      delay(100);
      }
    }
  }
  delay(20);
  position=position+1;
}  