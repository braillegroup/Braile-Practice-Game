## Braille-Practice-Game. Embedded Systems Arduino Project

The idea is to create a braille practice game using LCD and 6 push buttons in 3x2 order, both of which are connected to Arduino. The LCD will show the alphabets one by one and a person has to enter the correct Braille pattern(pressing combination of buttons at the same time) using buttons in order to continue the game. The 7th button act as a check button.
The program can be created by taking inputs from the buttons and then compare it. For example, for Alaphabet 'A' only the 1st button needs to pressed. Similarly for 'B', First and third button needed to be pressed at the same time. 

### Braille Chart

<img width="525" alt="Braille" src="https://user-images.githubusercontent.com/50293642/57546492-2156cc00-735d-11e9-9ce4-f43ba44da212.png">

If the buttons are pressed in correct order at the same time, then “Correct” output will be generated and game continues. Otherwise there will be 3 tries and if all fails then "GAME OVER".

### Hardware requirements

Arduino Uno Board <br />
Breadboard <br />
LCD Screen (We used with 3.3v) <br />
7 Push buttons <br />
Seven 10k ohm resistor for buttons <br />
1k ohm resistor connected with 'A' pin on LCD. <br />
Hook-up wires

### Breadboard arrangement

![Breadboard-View](https://user-images.githubusercontent.com/50293642/57546461-14d27380-735d-11e9-89d4-a5cc50eb587b.png)

### Schematic
![Schematic](https://user-images.githubusercontent.com/50293642/57546484-1e5bdb80-735d-11e9-8ae0-0660376cbed1.png)
