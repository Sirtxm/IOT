# 🌐 IoT Lab Projects – RMUTT

**Developer:** [Sirtxm](https://github.com/Sirtxm)  
**Institution:** Rajamangala University of Technology Thanyaburi (RMUTT)  
**Major:** Computer Engineering  

---

## 📘 Description

This repository contains code and experiments from Internet of Things (IoT) lab sessions.  
It covers a wide range of topics including:

- ✅ Wi-Fi-based device control  
- ✅ MQTT protocol communication  
- ✅ Sensor data acquisition and processing  
- ✅ Motor and relay control  
- ✅ RFID module integration  
- ✅ LCD display interfacing  
- ✅ Node-RED dashboard usage  
- ✅ State machine design  

---

## 🧪 Included Labs

### 🔹 Lab 1: Arduino Basics
- `Lab1_Hello_world`
- `Lab1_ch1` to `Lab1_ch3`
- `Lab1_led_builtin`

### 🔹 Lab 2: Digital Input Processing
- `Lab2_Debounce`
- `Lab2_count`
- `Lab2_digital_input`

### 🔹 Lab 3: Analog Input and Output
- `Lab3_Analog`
- `Lab3_LED_BATT`
- `Lab3_Motor`

### 🔹 Lab 4: Sensors and Displays
- `Lab4_DHT` – Temperature and humidity reading  
- `Lab4_LCD`, `Lab4_LCD_RMUTT` – Output to LCD screen

### 🔹 Lab 5: Actuators and RFID
- `LAB5_RELAY` – Relay control  
- `Lab5_RFID` – Read RFID tags

### 🔹 Lab 6: Networking and Communication
- `LAB6_MQTT` – MQTT communication via broker  
- `LAB6_WifiManager` – Manage Wi-Fi credentials

### 🔹 Lab 7: Node-RED for IoT
- `Lab7_Node-red` – Visual programming and monitoring via Node-RED

### 🔸 Other
- `State_Machine` – Demonstrates basic state machine implementation

---

## ⚙️ Installation & Usage

### 1️⃣ Install Arduino IDE  
Download from the [official Arduino website](https://www.arduino.cc/en/software)

### 2️⃣ Required Libraries  
Install the following libraries via Arduino Library Manager:

- `DHT sensor library` – For DHT11/DHT22  
- `LiquidCrystal` – For LCD display  
- `PubSubClient` – For MQTT  
- `WiFiManager` – For Wi-Fi setup  
- `MFRC522` – For RFID

### 3️⃣ Upload Code to Board

- Connect your **Arduino/ESP8266/ESP32** board via USB  
- Open the `.ino` file of the desired lab  
- Select the correct **board** and **port**  
- Click **Upload**

---
IOT/ <br>
├── Lab1_Hello_world/<br>
├── Lab1_ch1/<br>
├── Lab1_ch2/<br>
├── Lab1_ch3/<br>
├── Lab1_led_builtin/<br>
├── Lab2_Debounce/<br>
├── Lab2_count/<br>
├── Lab2_digital_input/<br>
├── Lab3_Analog/<br>
├── Lab3_LED_BATT/<br>
├── Lab3_Motor/<br>
├── Lab4_DHT/<br>
├── Lab4_LCD/<br>
├── Lab4_LCD_RMUTT/<br>
├── Lab5_RFID/<br>
├── LAB5_RELAY/<br>
├── LAB6_MQTT/<br>
├── LAB6_WifiManager/<br>
├── Lab7_Node-red/<br>
└── State_Machine/<br>


```markdown
![DHT Sensor Demo](images/lab4_dht_demo.gif)
