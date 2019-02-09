#include <Wire.h>
// constants won't change. They're used here to set pin numbers:
double receivedValue = 0;
const int SW1 = 22; int SWState1 = 0;
const int SW2 = 23; int SWState2 = 0;
const int SW3 = 24; int SWState3 = 0;
const int SW4 = 25; int SWState4 = 0;
const int SW5 = 26; int SWState5 = 0;
const int SW6 = 27; int SWState6 = 0;
const int SW7 = 28; int SWState7 = 0;
const int SW8 = 29; int SWState8 = 0;
const int SW9 = 30; int SWState9 = 0;
const int SW10 = 31; int SWState10 = 0;
const int SW11 = 32; int SWState11 = 0;
const int SW12 = 33; int SWState12 = 0;
const int SW13 = 34; int SWState13 = 0;
const int SW14 = 35; int SWState14 = 0;
const int SW15 = 36; int SWState15 = 0;
const int SW16 = 37; int SWState16 = 0;
const int SW17 = 38; int SWState17 = 0;
const int SW18 = 39; int SWState18 = 0;
const int SW19 = 40; int SWState19 = 0;
const int SW20 = 41; int SWState20 = 0;
const int SW21 = 42; int SWState21 = 0;
const int SW22 = 43; int SWState22 = 0;
const int SW23 = 44; int SWState23 = 0;
const int SW24 = 45; int SWState24 = 0;
const int SW25 = 46; int SWState25 = 0;
const int SW26 = 47; int SWState26 = 0;
const int SW27 = 48; int SWState27 = 0;
const int SW28 = 49; int SWState28 = 0;
const int SW29 = 50; int SWState29 = 0;
const int SW30 = 51; int SWState30 = 0;
const int SW31 = 52; int SWState31 = 0;
const int SW32 = 53; int SWState32 = 0;

const int SW33 = 2; int SWState33 = 0;
const int SW34 = 3; int SWState34 = 0;
const int SW35 = 4; int SWState35 = 0;
const int SW36 = 5; int SWState36 = 0;
const int SW37 = 6; int SWState37 = 0;
const int SW38 = 7; int SWState38 = 0;
const int SW39 = 8; int SWState39 = 0;
const int SW40 = 9; int SWState40 = 0;
const int SW41 = 10; int SWState41 = 0;
const int SW42 = 11; int SWState42 = 0;
const int SW43 = 12; int SWState43 = 0;

const int SW44 = A0; int SWState44 = 0;
const int SW45 = A1; int SWState45 = 0;
const int SW46 = A2; int SWState46 = 0;
const int SW47 = A3; int SWState47 = 0;
const int SW48 = A4; int SWState48 = 0;
const int SW49 = A5; int SWState49 = 0;
const int SW50 = A6; int SWState50 = 0;
const int SW51 = A7; int SWState51 = 0;
const int SW52 = A8; int SWState52 = 0;

// bool value. They're used here to set initial SW value:
bool DataTrans1 = false;
bool DataTrans2 = false;
bool DataTrans3 = false;
bool DataTrans4 = false;
bool DataTrans5 = false;
bool DataTrans6 = false;
bool DataTrans7 = false;
bool DataTrans8 = false;
bool DataTrans9 = false;
bool DataTrans10 = false;
bool DataTrans11 = false;
bool DataTrans12 = false;
bool DataTrans13 = false;
bool DataTrans14 = false;
bool DataTrans15 = false;
bool DataTrans16 = false;
bool DataTrans17 = false;
bool DataTrans18 = false;
bool DataTrans19 = false;
bool DataTrans20 = false;
bool DataTrans21 = false;
bool DataTrans22 = false;
bool DataTrans23 = false;
bool DataTrans24 = false;
bool DataTrans25 = false;
bool DataTrans26 = false;
bool DataTrans27 = false;
bool DataTrans28 = false;
bool DataTrans29 = false;
bool DataTrans30 = false;
bool DataTrans31 = false;
bool DataTrans32 = false;
bool DataTrans33 = false;
bool DataTrans34 = false;
bool DataTrans35 = false;
bool DataTrans36 = false;
bool DataTrans37 = false;

void setup() {
 
  Wire.begin(); 
  // initialize the pushbutton pin as an input:
  pinMode(SW1, INPUT); pinMode(SW27, INPUT);
  pinMode(SW2, INPUT); pinMode(SW28, INPUT);
  pinMode(SW3, INPUT); pinMode(SW29, INPUT); 
  pinMode(SW4, INPUT); pinMode(SW30, INPUT);
  pinMode(SW5, INPUT); pinMode(SW31, INPUT);
  pinMode(SW6, INPUT); pinMode(SW32, INPUT);
  pinMode(SW7, INPUT); pinMode(SW33, INPUT);
  pinMode(SW8, INPUT); pinMode(SW34, INPUT);
  pinMode(SW9, INPUT); pinMode(SW35, INPUT);
  pinMode(SW10, INPUT); pinMode(SW36, INPUT);
  pinMode(SW11, INPUT); pinMode(SW37, INPUT); 
  pinMode(SW12, INPUT); pinMode(SW38, INPUT);
  pinMode(SW13, INPUT); pinMode(SW39, INPUT);
  pinMode(SW14, INPUT); pinMode(SW40, INPUT);
  pinMode(SW15, INPUT); pinMode(SW41, INPUT);
  pinMode(SW16, INPUT); pinMode(SW42, INPUT); 
  pinMode(SW17, INPUT); pinMode(SW43, INPUT); 
  pinMode(SW18, INPUT); pinMode(SW44, INPUT);
  pinMode(SW19, INPUT); pinMode(SW45, INPUT);
  pinMode(SW20, INPUT); pinMode(SW46, INPUT);
  pinMode(SW21, INPUT); pinMode(SW47, INPUT);
  pinMode(SW22, INPUT); pinMode(SW48, INPUT); 
  pinMode(SW23, INPUT); pinMode(SW49, INPUT); 
  pinMode(SW24, INPUT); pinMode(SW50, INPUT);
  pinMode(SW25, INPUT); pinMode(SW51, INPUT);
  pinMode(SW26, INPUT); pinMode(SW52, INPUT);
 Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(9, 4);

  while (Wire.available()) { // slave may send less than requested
    receivedValue = Wire.read(); // receive a byte as int
    Serial.println(receivedValue);         // print the int
  }
 //  read the state of the pushbutton value:
  SWState1 = digitalRead(SW1); SWState27 = digitalRead(SW27);
  SWState2 = digitalRead(SW2); SWState28 = digitalRead(SW28);
  SWState3 = digitalRead(SW3); SWState29 = digitalRead(SW29);
  SWState4 = digitalRead(SW4); SWState30 = digitalRead(SW30);
  SWState5 = digitalRead(SW5); SWState31 = digitalRead(SW31);
  SWState6 = digitalRead(SW6); SWState32 = digitalRead(SW32);
  SWState7 = digitalRead(SW7); SWState33 = digitalRead(SW33);
  SWState8 = digitalRead(SW8); SWState34 = digitalRead(SW34);
  SWState9 = digitalRead(SW9); SWState35 = digitalRead(SW35);
  SWState10 = digitalRead(SW10); SWState36 = digitalRead(SW36);
  SWState11 = digitalRead(SW11); SWState37 = digitalRead(SW37);
  SWState12 = digitalRead(SW12); SWState38 = digitalRead(SW38);
  SWState13 = digitalRead(SW13); SWState39 = digitalRead(SW39);
  SWState14 = digitalRead(SW14); SWState40 = digitalRead(SW40);
  SWState15 = digitalRead(SW15); SWState41 = digitalRead(SW41);
  SWState16 = digitalRead(SW16); SWState42 = digitalRead(SW42);
  SWState17 = digitalRead(SW17); SWState43 = digitalRead(SW43);
  SWState18 = digitalRead(SW18); SWState44 = digitalRead(SW44);
  SWState19 = digitalRead(SW19); SWState45 = digitalRead(SW45);
  SWState20 = digitalRead(SW20); SWState46 = digitalRead(SW46);
  SWState21 = digitalRead(SW21); SWState47 = digitalRead(SW47);
  SWState22 = digitalRead(SW22); SWState48 = digitalRead(SW48);
  SWState23 = digitalRead(SW23); SWState49 = digitalRead(SW49);
  SWState24 = digitalRead(SW24); SWState50 = digitalRead(SW50);
  SWState25 = digitalRead(SW25); SWState51 = digitalRead(SW51);
  SWState26 = digitalRead(SW26); SWState52 = digitalRead(SW52);

  // AND program :
  if(SWState1 == HIGH && SWState2 == HIGH){
    DataTrans1 = true; delay (50);
  }else{DataTrans1 = false;
  }
 // NAND program :
if(!(SWState3 == HIGH && SWState4 == HIGH)){
    DataTrans2 = true;delay (50);
  }else {DataTrans2 = false;
  }
// OR program :
    if(SWState5 == HIGH || SWState6 == HIGH){
    DataTrans3 = true; delay (50);
  }else{DataTrans3 = false;
  }
// NOR program :
if(!(SWState7 == HIGH || SWState8 == HIGH)){
    DataTrans4 = true; delay (50);
  }else{DataTrans4 = false;
  }
// XOR program :
 if ((!SWState9 == HIGH && SWState10 == HIGH)||(SWState9 == HIGH && ! SWState10 == HIGH)) {
    DataTrans5 = true;
  } else {
    DataTrans5 = false;
  }
// XNOR program :
   if ((SWState11 == HIGH && SWState12 == HIGH)||(! SWState11 == HIGH && ! SWState12 == HIGH)) {
    DataTrans6 = true;
  } else {
    DataTrans6 = false;
  }
// NOT program :
  if (! SWState13 == HIGH) {
    DataTrans7 = true;
  } else {
    DataTrans7 = false;
  }

// MUX program :

if (SWState14){
if ((! SWState23 == HIGH && ! SWState24 == HIGH && ! SWState25 == HIGH && SWState15 == HIGH) ||
  (SWState23 == HIGH && ! SWState24 == HIGH && !SWState25 == HIGH && SWState16 == HIGH) ||
  (! SWState23 == HIGH && SWState24 == HIGH && !SWState25 == HIGH && SWState17 == HIGH) ||
  ( SWState23 == HIGH && SWState24 == HIGH && !SWState25 == HIGH && SWState18 == HIGH)||
  ( !SWState23 == HIGH && !SWState24 == HIGH && SWState25 == HIGH && SWState19 == HIGH)||
  ( SWState23 == HIGH && !SWState24 == HIGH && SWState25 == HIGH && SWState20 == HIGH)||
  ( !SWState23 == HIGH && SWState24 == HIGH && SWState25 == HIGH && SWState21 == HIGH)||
  ( SWState23 == HIGH && SWState24 == HIGH && SWState25 == HIGH && SWState22 == HIGH))
 {
     DataTrans8 = true;
  } else {
    DataTrans8 = false;}}
  else if (!SWState14) {DataTrans8 = false;}

// DECODER program :
if (SWState26){
if (! SWState27 == HIGH && ! SWState28 == HIGH && ! SWState29 == HIGH ) { DataTrans9 = true;}
else  {DataTrans9 = false;}
if(SWState27 == HIGH && ! SWState28 == HIGH && !SWState29 == HIGH ) {DataTrans10 = true; }
  else   {DataTrans10 = false; }
if (! SWState27 == HIGH && SWState28 == HIGH && !SWState29 == HIGH ) {DataTrans11 = true; }
  else {DataTrans11 = false; }
if( SWState27 == HIGH && SWState28 == HIGH && !SWState29 == HIGH ){DataTrans12 = true; }
  else {DataTrans12 = false; }
if( !SWState27 == HIGH && !SWState28 == HIGH && SWState29 == HIGH ){DataTrans13 = true; }
  else  {DataTrans13 = false; }
if( SWState27 == HIGH && !SWState28 == HIGH && SWState29 == HIGH ){DataTrans14 = true; }
 else  {DataTrans14 = false; }
if( !SWState27 == HIGH && SWState28 == HIGH && SWState29 == HIGH ){DataTrans15 = true; }
 else  {DataTrans15 = false; }
if( SWState27 == HIGH && SWState28 == HIGH && SWState29 == HIGH ){DataTrans16 = true; }
 else  {DataTrans16 = false; }
 }
if (!SWState26 ) {DataTrans9 = false;
  DataTrans10 = false;
  DataTrans11 = false;
  DataTrans12 = false;
  DataTrans13 = false;
  DataTrans14 = false;
  DataTrans15 = false;
  DataTrans16 = false;}


// ENCODER program :

if (SWState33){
  
if (SWState34 == HIGH ) {DataTrans17 = false;  DataTrans18 = false ; DataTrans19 = false;}
if (SWState35 == HIGH ) {DataTrans17 = true;  DataTrans18 = false ; DataTrans19 = false;}
if (SWState36 == HIGH ) {DataTrans17 = false;  DataTrans18 = true ; DataTrans19 = false;}
if (SWState37 == HIGH ) {DataTrans17 = true;  DataTrans18 = true ; DataTrans19 = false;}
if (SWState38 == HIGH ) {DataTrans17 = false;  DataTrans18 = false ; DataTrans19 = true;}
if (SWState39 == HIGH ) {DataTrans17 = true;  DataTrans18 = false ; DataTrans19 = true;}
if (SWState40 == HIGH ) {DataTrans17 = false;  DataTrans18 = true ; DataTrans19 = true;}
if (SWState41 == HIGH ) {DataTrans17 = true;  DataTrans18 = true ; DataTrans19 = true;}
}
if (SWState34 == LOW && SWState35 == LOW &&  SWState36 == LOW && SWState37 == LOW &&
SWState38 == LOW && SWState39 == LOW && SWState40 == LOW && SWState41 == LOW )
{DataTrans17 = false;  DataTrans18 = false ; DataTrans19 = false;}
  if (!SWState33) {DataTrans17 = false;  DataTrans18 = false ; DataTrans19 = false;}







// J-K FF program :









  
  

  Wire.beginTransmission(9); 
  
  Wire.write(DataTrans1);
  Wire.write(DataTrans2);
  Wire.write(DataTrans3);  
  Wire.write(DataTrans4);
  Wire.write(DataTrans5);
  Wire.write(DataTrans6);
  Wire.write(DataTrans7);
  Wire.write(DataTrans8);
  Wire.write(DataTrans9);
  Wire.write(DataTrans10);
  Wire.write(DataTrans11);
  Wire.write(DataTrans12);
  Wire.write(DataTrans13); 
  Wire.write(DataTrans14);
  Wire.write(DataTrans15);
  Wire.write(DataTrans16);
  Wire.write(DataTrans17);
  Wire.write(DataTrans18);   
  Wire.write(DataTrans19);
  Wire.write(DataTrans20);
  Wire.write(DataTrans21);
  Wire.write(DataTrans22);
  Wire.write(DataTrans23);
  Wire.write(DataTrans24);
  Wire.write(DataTrans25);
  Wire.write(DataTrans26);
  Wire.write(DataTrans27);
  Wire.write(DataTrans28);
  Wire.write(DataTrans29);
  Wire.write(DataTrans30);
  Wire.write(DataTrans31);
  Wire.write(DataTrans32);
  Wire.write(DataTrans33);
  Wire.write(DataTrans34);
  Wire.write(DataTrans35); 
  Wire.write(DataTrans36);
  Wire.write(DataTrans37);
  
  Wire.endTransmission();   
 //Serial.print(DataTrans1);Serial.print(SWState2);Serial.print(SWState1);
  delay(30);
}
