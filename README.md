**Gas Leakage Detector System using MQ-2 Sensor**

This project simulates a **Gas Leakage Detector System** using the **MQ-2 sensor** and an **Arduino UNO**, built and tested using **Proteus**. It detects dangerous gas levels (like LPG or smoke) and triggers an alarm via a buzzer when unsafe conditions are detected.

**Project Overview**

**Sensor Used**: MQ-2 Gas Sensor (detects LPG, smoke, alcohol, methane, etc.)
**Simulation Tool**: Proteus 8
**Microcontroller**: Arduino UNO
**Output**: Buzzer alarm and LCD output

**Components Used**

| Component        | Description                      |
|------------------|----------------------------------|
| MQ-2 Sensor      | Gas detection sensor             |
| Arduino UNO      | Main controller board            |
| Buzzer           | Audible alarm output             |
| Proteus 8        | Simulation software              |
| LCD Display      | for serial monitoring            |
| Resistors/Wires  | For basic connections            |

**Working Of Project**

1. The MQ-2 continuously monitors gas concentration.
2. If gas levels exceed a set threshold, the buzzer is triggered.
3. Serial monitor displays gas status (if included).
4. The alarm turns off when levels return to normal.

**Simulation in Proteus:**

1. Open `Gas Detector.pdsprj` in **Proteus 8**.
2. Make sure the `.ino` file is compiled in **Arduino IDE** to generate `.hex`.
3. Load the `.hex` file into the Arduino inside Proteus.
4. Run the simulation and vary the sensor input to test.

**Code in Arduino IDE:**

1. Open `Gas_Detector.ino` in the **Arduino IDE**.
2. Upload to an actual Arduino board (optional for hardware test).
3. Connect MQ-2 sensor and buzzer as per circuit.

**Author**
**HIMANSHU NARAYAN**  

