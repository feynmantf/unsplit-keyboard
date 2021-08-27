#WIP!! DOES NOT WORK - I will get back to working on it when the semester ends/when I have the time

# unsplit keyboard
USKB PCB, Layout, and Case files (plus other useful stuff like firmware/images)
(documentation in progress)

## name scheme
I wanted to make a split keyboard, but it was overly ambitious (considering the amount of pins on the microcontroller) so I made it a keyboard that can probably work as split (with modifications) but is just easier to make a single piece. Therefore, "unsplit." Also there is mention of microcontrollers but I removed them after the two that I bought were dead on arrival. The pcb and case have been modified in order to make the keyboard simpler/look better without the microcontrollers.

## sample images
**in progress !!**

### case images/renders
**none for now**

### pcb images/renders:
#### pcb front:
![pcb front](https://github.com/feynmantf/unsplit-keyboard/blob/main/final/images/uskb%20front.png)
#### pcb back:
![pcb back](https://github.com/feynmantf/unsplit-keyboard/blob/main/final/images/uskb%20back.png)

## parts needed to build the board (not included in these files)
### parts you must source
- keyswitches (x69)
- keycaps (base kit and spacebar in 6.25u)
- pcb or plate mount stabilizers (2u x3 and 6.25u x1)
- rotary knob (x1)
- rotary encoder (ec11 with switch) (x1)
- oled (0.91 inch, SSD1306) (x1)
### smt parts/sourced by pcb manufacturer
(specs for the following are in the BOM, along with the jlc part numbers)
- switch diodes (x70)
- capacitors (x11)
- resistors (x9)
- reset switch (x1)
- xtal crystal (x1)
- usb-c port (x1)
- atmega32-u4-au (x1)

## basic instructions
**in progress !!**
- buy all the parts listed above
- get the pcb printed (from jlcpcb or some other service) (BOM and CPL files included)
- get the plate and case printed
- flash firmware and test the board to make sure everything works
- clip stabilizers into plate or screw them into pcb as necessary
- align and place plate on top of pcb
- clip switches into place and slot them into the pcb
- solder switches to the pcb (locations marked on pcb)
- solder rotary encoder onto pcb (locations marked on pcb)
- solder oled panel onto pcb (locations marked on pcb)
- test everything again
- put assembled pcb and plate in the case, and screw the case together
- you should be done now !!
