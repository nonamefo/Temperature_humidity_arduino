# Arduino Nano Temperature and Humidity Display

This project demonstrates how to display temperature and humidity readings on a 16x2 LCD screen using an Arduino Nano. The project utilizes I2C communication for simplicity.

*Hardware Required:*

* Arduino Nano (ATmega328)
* 16x2 LCD display (HJ1602A with I2C interface)
* AM2302 Digital Temperature and Humidity Sensor
* Connecting wires

*Wiring Diagram:*

(Include a clear wiring diagram here. A hand-drawn image is fine, but a professionally-made diagram is better. You can use a tool like Fritzing to create one.)

* *Example Wiring (replace with your actual connections):*
    * *Arduino Nano:* [Pin Connections]
    * *LCD:* [Pin Connections]
    * *AM2302:* [Pin Connections]


*Software:*

The Arduino code is designed to read data from the AM2302 sensor and display it on the I2C LCD. The libraries used are:

* *LiquidCrystal_I2C:* For controlling the I2C LCD. (Ensure you add this library to your Arduino IDE.)
* *DHT sensor library:* (Specify the exact library name and version if possible. You may need to install this via the Library Manager in the Arduino IDE).

*How to connect:*

![{F0596EEC-4550-492F-9DF6-C70B91C39AA5}](https://github.com/user-attachments/assets/878ef768-ccd0-40bb-b756-9963a8a73805)
