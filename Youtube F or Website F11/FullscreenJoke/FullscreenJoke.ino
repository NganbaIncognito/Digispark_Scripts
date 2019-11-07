
//This DigiSpark script can be used for YoutubeLinks to fullscreen(F), or to use it for FakeUpdate for example with F11
//Credits : Steven (ThanatosBE)
String url = "http://fakeupdate.net/windows98/";
bool isYoutube = false;

#define LAYOUT_FRENCH_BELGIAN
#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("" + url + "");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  if(isYoutube){
    DigiKeyboard.sendKeyStroke(KEY_F);
  }else{
    DigiKeyboard.sendKeyStroke(KEY_F11);
  }
  DigiKeyboard.delay(3000);
   for (;;) {
    /*empty*/
  }
};

void loop(){
  
}
