# WIP!! (firmware and schematic work but i havent gotten around to the new pcb layout) - I will get back to working on it when the semester ends/when I have the time
## all files in [early revisions/final but with microcontrollers](/early%20revisions/final%20but%20with%20microcontrollers) still work and can be manufactured (see [BOM](/early%20revisions/final%20but%20with%20microcontrollers/bom%20and%20cpl%20files) and [Gerber](/early%20revisions/final%20but%20with%20microcontrollers/gerber%20and%20drill%20files) folders), i just dont like the layout lol
## i plan on coming back to this project sometime before the end of 2024, but i cant promise it will look the same

# kaluza kb
kaluza kb pcb, layout, and case files (plus other useful stuff like firmware/images)
(documentation in progress)

## design logic
i wanted a keyboard that was both 65% and had extra function keys. i also wanted an oled panel and rotary encoder. and, as an added bonus, i love seeing through hole components on a keyboard. therefore, all of these features have been included

## sample images (they exist for the old revisions if you want to dig through the file tree)

### case images/renders:

### pcb images/renders:
#### pcb front:
![pcb front](/early%20revisions/final%20but%20with%20microcontrollers/images/USKB%20Final%20front.png)
#### pcb back:
![pcb back](/early%20revisions/final%20but%20with%20microcontrollers/images/USKB%20Final%20back.png)
### schematic:
![schematic](/final/images/schema.png)

### handwired circuit test images:
![handwired front](/early%20revisions/manual%20wiring%20images/final%20handwired%20front%20(no%20case).JPG)
![handwired back](early%20revisions/manual%20wiring%20images/final%20handwired%20back%20(its%20a%20mess).JPG)
![oled panel test](/early%20revisions/manual%20wiring%20images/working%20oled%20panel.JPG)


## parts needed to build the board (not included in these files)
### parts you must source
- keyswitches (x80)
- keycaps (base kit and spacebar)
- pcb stabilizers (2u x4 and 6.25u x1)
- rotary knob (x1)
- rotary encoder (ec11 with switch) (x1)
- oled (0.91 inch, SSD1306) (x1)
- switch diodes (x80)
- elite-c v4 (x1)

### parts to get manufactured
- pcb
- plate (carbon fiber or sheet metal) (2mm)
- case (3d printed)
- leaf springs (carbon fiber) (1mm)

## basic instructions
- buy all the parts listed above
- get the pcb printed (from jlcpcb or some other service)
- get the plate, case, and leaf springs printed
- flash firmware and test the board to make sure everything works
- screw stabilizers into pcb
- align and place plate on top of pcb
- clip switches into place and slot them into the pcb
- solder switches to the pcb (locations marked on pcb)
- solder rotary encoder onto pcb (locations marked on pcb)
- solder oled panel onto pcb (locations marked on pcb)
- test everything again
- screw leaf springs into pcb (locations marked on pcb)
- put assembled pcb and plate in the case, and screw the case together
- you should be done now !!
