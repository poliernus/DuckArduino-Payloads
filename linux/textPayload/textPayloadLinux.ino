/*
 * Keep in mind this payload is made to stop it with a button in pin 3 to stop the payload to execute <3
 */

#include "Keyboard.h"

void	typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
    pinMode(3, INPUT_PULLUP);
    if (digitalRead(3) == LOW){
        while(1);
    }
  // Begining the Keyboard stream
  // The keyboard is set to spanish!!!
  Keyboard.begin(KeyboardLayout_es_ES);

  delay(3500);    
  Keyboard.press(131); 
  Keyboard.releaseAll();  
  delay(1000);
  Keyboard.print(F("terminal"));
  typeKey(KEY_RETURN);
  delay(500);
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print(F("nano meow.txt"));
  delay(500);
  typeKey(KEY_RETURN);
  for (int i = 0; i <= 55; i++) {
    Keyboard.print(F(" meow meow :D "));
    typeKey(KEY_RETURN);
  }
  delay(500);
  Keyboard.press(128);
  Keyboard.press('X');
  delay(1500);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("y");
  delay(1000);
  typeKey(KEY_RETURN);
  Keyboard.print("cat meow.txt");
  delay(500);
  typeKey(KEY_RETURN);
  Keyboard.releaseAll();  
  // Ending stream
Keyboard.end();
}
void loop() {}

