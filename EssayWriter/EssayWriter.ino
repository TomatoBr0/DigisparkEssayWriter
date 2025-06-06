#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(2000);  // Initial delay for device recognition
  DigiKeyboard.sendKeyStroke(0);  // Wake up computer if needed

  // Open Chrome via Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);  // Wait for Chrome to launch



  // Open new tab and navigate to DeepSeek
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);  // Ctrl+T
  DigiKeyboard.delay(500);
  DigiKeyboard.print("chat.deepseek.com");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);  // Wait for page load

  // Type the prompt
  DigiKeyboard.print("Write me a funny clean essay on a random topic that is around 800 words, no notes from you before or after just the essay, no bold letters or anything, not about socks");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(65000);  // Wait for response generation (adjust as needed)

  // Select and copy entire response
for(int i = 0; i < 4; i++) {
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);  // Correct shift+tab syntax
  DigiKeyboard.delay(1000);}
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Create new tab with blank page
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);  // Ctrl+T
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("data:text/html, <html contenteditable>");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);  // Wait for blank page

  // Paste content
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);  // Ctrl+V
}

void loop() {
  // Empty loop prevents repeated execution
  DigiKeyboard.delay(10000);
}