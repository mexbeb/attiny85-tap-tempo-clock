# ATTiny85 Clock with tap tempo function
A simple clock with tap tempo made with an ATTiny85 board, useful for eurorack systems.

![TapTemp](https://github.com/mexbeb/attiny85-tap-tempo-clock/assets/74735686/ccb76130-f23d-4054-9c35-94a5fcaccd98)

This is the cheapest (less than 5 euros in components) and smallest (building it with the PCB can be mounted in a 2HP panel) clock module ever made.

Demo video here: https://youtube.com/shorts/PZ5HyXFXe1c

### Features:
- BPM from 5 to 400 (can be edited in the code)
- One clock output and one auxiliary output
- Status LED
- Tap Tempo

## BOM
- ATTiny85 board (this blue one from AliExpress if you want to make the module with the attached PCB https://it.aliexpress.com/item/1005005850069809.html, the board should have no "ATTINY85" written near the P0 pin)

![TZT-Digispark-Kickstarter-scheda-di-sviluppo-Micro-ATTINY85-TINY85-modulo-per-Arduino-IIC-I2C-USB_jpg_640x640 jpg__webp](https://github.com/mexbeb/attiny85-tap-tempo-clock/assets/74735686/cb6370f3-b950-4005-8890-eee5656b04a0)
  
- 1 x 100 uF capacitor
- 3 x 1KΩ resistors
- 1 x 10 pin (2x5) 2.54mm IDC header
- 1 x 3mm LED (you can use a 5mm one as well)
- 1 x NO momentary switch
- 1 x 3.5mm female jack
- 1 x 3.5mm female jack PJ-316M (OPTIONAL, if you want to use the in-board jack)

Solder everything as reported in the schematic, upload the sketch through the Arduino IDE and enjoy!

You can upload the Gerber zip to JLCPCB and make your own PCBs just by ordering them.

## DISCLAIMER
The circuit is not perfect, it's as simple as it can be: there's no polarity protection and the switch is not debouncing well sometimes, but you know, it's DIY and really cheap and still does the job :D

