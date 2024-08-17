/*
 * Keep in mind this payload is made to stop it with a button in pin 3 to stop the payload to execute <3
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
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


  // Ending stream
  Keyboard.end();
}
/* Unused endless loop */
