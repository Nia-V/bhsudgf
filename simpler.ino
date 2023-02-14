int latch = 9; 
int clock = 8; 
int data= 10 ; 
int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;
bool stopper = 0;

unsigned char table[]=
{
  B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B1110000,  // 7
  B1111110,  // 8
  B11110110,   // 9
};
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(latch, OUTPUT);
    pinMode(clock, OUTPUT);
    pinMode(data, OUTPUT);
     pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
     pinMode(D4, OUTPUT);
}
void loop(){
   digitalWrite(D4, 1);
 digitalWrite(D3, 1);
 digitalWrite(D2, 1);
    digitalWrite(D1, 0);
      digitalWrite(latch, 0);
    shiftOut(data, clock, MSBFIRST, table[1]);
           digitalWrite(latch, 1);
           digitalWrite(D1, 1);
  
  
  
  
  
  }
