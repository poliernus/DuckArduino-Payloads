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
  Keyboard.press(KEY_LEFT_GUI);
  STRING terminal
  DELAY 100
  ENTER
  STRING nano octo.txt
  DELAY 100
  ENTER
  STRING                        ___
  ENTER
  STRING                     .-'   `'.
  ENTER
  STRING                    /         \
  ENTER
  STRING                    |         ;
  ENTER
  STRING                    |         |   
  ENTER
  STRING        ___.--,
  ENTER
  STRING           _.._     |0) ~ (0) |    _.---'`__.-( (_.
  ENTER
  STRING    __.--'`_.. '.__.\    '--. \_.-' ,.--'`     `""`
  ENTER
  STRING   ( ,.--'`   ',__ /./;   ;, '.__.'`    __
  ENTER
  STRING   _`) )  .---.__.' / |   |\   \__..--""  """--.,_
  ENTER
  STRING  `---' .'.''-._.-'`_./  /\ '.  \ _.-~~~````~~~-._`-.__.'
  ENTER
  STRING        | |  .' _.-' |  |  \  \  '.               `~---`
  ENTER
  STRING         \ \/ .'     \  \   '. '-._)
  ENTER
  STRING          \/ /        \  \    `=.__`~-.
  ENTER
  STRING          / /\         `) )    / / `"".`\
  ENTER
  STRING    , _.-'.'\ \        / /    ( (     / /
  ENTER
  STRING     `--~`   ) )    .-'.'      '.'.  | (
  ENTER
  STRING            (/`    ( (`          ) )  '-;
  ENTER
  STRING             `      '-;         (-'
  ENTER
  ENTER
  STRING  really shouldn't plug random usbs into ur compter :/
  ENTER
  Keyboard.press(ctrlKey);
  Keyboard.press('x');
  STRING y
  DELAY 100
  ENTER

  // Ending stream
Keyboard.end();
}
/* Unused endless loop */
