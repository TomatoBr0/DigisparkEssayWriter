# 🔥 DigiSpark DeepSeek Essay Writer

![DigiSpark](https://img.shields.io/badge/Platform-DigiSpark-00979D) ![License](https://img.shields.io/badge/License-MIT-green)

A USB automation script that generates AI essays with one plug! Perfect for DigiSpark (ATTiny85) projects.

## 📌 Description
This DigiSpark script automates:
- ✨ Opens Chrome (or default browser)
- 🚀 Navigates to DeepSeek Chat
- ⌨️ Submits a prompt for a **400-word funny, clean essay**
- 📋 Copies the AI response (keyboard/mouse fallbacks)
- 🖥️ Pastes into a new blank page

*"Because sometimes you need an essay faster than you can type!"*

---

## 🛠️ Hardware Requirements
- **DigiSpark (ATTiny85)** or compatible USB dev board
- Arduino IDE with [Digistump packages](https://digistump.com/wiki/digispark/tutorials/connecting) installed

---

## ⚙️ Installation & Usage

### Flash the DigiSpark
1. **Install Arduino IDE** + Digistump drivers
2. **Upload** `DigiSpark_DeepSeek_Essay_Writer.ino`
3. **Plug into target PC** (script auto-runs)

### Automated Workflow
✅ Opens Chrome  
✅ Writes & submits prompt  
✅ Copies AI response  
✅ Pastes into blank page  


---

## 🔧 Customization
### Modify the Prompt
Edit in code:
```cpp
DigiKeyboard.print("Write me a funny clean essay on a random topic that is around 800 words, no notes from you before or after just the essay, no bold letters or anything, not about socks");
```
- Adjust Timing (if needed)

Increase delays: DigiKeyboard.delay(5000) → 8000

Test on your system first

## ⚠️ Important Notes
- 🔠 Works best with US keyboard layout

- 🕵️ DeepSeek’s UI may change → update script as needed

- ⚠️ For ethical/educational use only


## 🎯 Use Cases
- 🤖 Automate AI content generation

- 🎒 Quick essay drafts for students

- 🧪 USB automation experiments

- 🦆 DigiSpark/Rubber Ducky testing

## 📜 License
MIT License - Free for personal/educational use.
By using this, you agree to use it responsibly.

- 💡 Pro Tip: Add LED indicators for visual debugging!
- 🐛 Found an issue? Open a GitHub ticket!
