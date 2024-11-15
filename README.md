# smart-study-lamp
The **Smart Study Lamp** uses an **ultrasonic sensor** and **Arduino** to automatically turn the lamp on/off based on user proximity. If a user is within 100 cm, the lamp lights up; otherwise, it turns off. This project offers energy efficiency, hands-free operation, and easy customization for further features.

Code Overview:
- Ultrasonic Sensor (HC-SR04): Measures distance by emitting and receiving sound waves. The distance is calculated using the time it takes for the echo to return.
- Relay Module: The relay controls the lamp's power. If the detected distance is less than or equal to 100 cm, the relay turns the lamp on. If the distance exceeds 100 cm, the lamp is turned off.
- Serial Monitor: Displays the measured distance for debugging and monitoring.

Key Features:
- Proximity-Based Automation: The lamp turns on when a user is detected within 100 cm and turns off when no one is present.
- Relay Control: Controls the lamp’s power, providing a simple yet effective automation system.
- Energy Efficiency: The lamp only operates when necessary, reducing unnecessary power consumption.
- Simple Arduino Code: The system is easy to implement and can be modified for different distance thresholds or delay times.

Future Scope:
- Add adjustable brightness based on proximity.
- Integrate voice control or mobile app support for remote operation.
- Expand for multi-zone control or integration into larger smart home systems.

This project demonstrates how simple automation using Arduino and ultrasonic sensors can create practical, energy-efficient solutions in everyday life.