#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'A','B','C','D'},
  {'E','F','G','H'},
  {'I','J','K','L'},
  {'M','N','O','P'}
};
byte rowPins[ROWS] = {D1, D2, D3, D4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {D8, D7, D6, D5}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(115200);
}

void loop(){
  char key = keypad.getKey();

  
  if (key != NO_KEY){
    Serial.println(key);
  }
}
