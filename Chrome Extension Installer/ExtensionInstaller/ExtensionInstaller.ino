// This is a custom made extension installer, because Chrome disabled chrome.webstore.install() functionality
#define LAYOUT_FRENCH_BELGIAN //custom lib, you can comment this out.
#include "DigiKeyboard.h"

//url of the extension
String url = "https://chrome.google.com/webstore/detail/nicolas-cage-replacer/ggognilmkpjemcpjoaohmjljbonbgcgh";


void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(2000);
  DigiKeyboard.delay(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //windows run
  DigiKeyboard.delay(600);
  DigiKeyboard.print("chrome.exe " + url + ""); // dynamic url for testing
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //start chrome with url
  DigiKeyboard.delay(3000);
  for (int i = 0; i < 4 ; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB); // amount of tabs we need to perform to get to 'Install'
    DigiKeyboard.delay(50);
  };
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //press install button
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0x50); //goto confirm, left arrow
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //confirm
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ESC);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close chrome
  DigiKeyboard.sendKeyStroke(0); //release all keys, just to be safe
}

void loop() {
  // put your main code here, to run repeatedly. We dont need this.

}
