

**📌 Description**
This DigiSpark script automates the following process:

*Opens Chrome (or default browser)

*Navigates to DeepSeek Chat

*Submits a prompt for a 400-word funny, clean essay

*Copies the AI response (using keyboard/mouse fallbacks)

*Pastes it into a new blank page

*Perfect for quickly generating AI-written essays with minimal manual input!

**🛠️ Hardware Requirements**
*DigiSpark (ATTiny85) (or compatible USB dev board)

*Arduino IDE with Digistump packages installed

**⚙️ Installation & Usage**
1. Flash the DigiSpark
  Install Arduino IDE + Digistump Drivers

  Upload the script (DigiSpark_DeepSeek_Essay_Writer.ino)

  Plug into target PC (script auto-runs)

2. What It Does Automatically
  ✅ Opens Chrome
  ✅ Writes & submits prompt
  ✅ Copies AI response
  ✅ Pastes into a blank page

🔧 Customization
To modify the Prompt edit this line in the code:

cpp
DigiKeyboard.print("write me a funny clean essay...");
Change the prompt to whatever you want!

Adjust Timing (if needed)
If the script fails:

*Increase delays (e.g., DigiKeyboard.delay(5000) → 8000)

*Test on your system first

**⚠️ Important Notes**
*Works best with US keyboard layout (adjust if needed)

*DeepSeek’s UI may change, requiring script updates


**Repo Structure**
📂 DigiSpark-DeepSeek-Writer/  
├── 📄 DigiSpark_DeepSeek_Essay_Writer.ino  # Main script  
├── 📄 README.md                            # This guide  
└── 📄 LICENSE                              # MIT License  

**🎯 Use Cases**
*Automate AI content generation

*Have fun!

USB automation projects

DigiSpark / Rubber Ducky testing

