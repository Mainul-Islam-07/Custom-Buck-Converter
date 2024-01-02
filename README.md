# Custom-Buck-Converter

Features maintained:

1)Input 10V-75V to Output 0-60V

2)12A max (yet to be established) **

3) For pwm generation and digital control, use esp32. No need of the display. (used ATMEGA 328P chip in software simulation instead of esp 32)

4)For controlling output voltage and current, design a potentiometer based control system integrated with esp32 (the reference buck converter is pushbutton based) (to be implemented in hardware soon)

5)First potentiometer controls voltage , Second potentiometer controls maximum current (Current limiting facility yet to be done)

6)The pwm output from esp32 must be optically isolated. The pwm is followed by optocoupler but gives complete isolation of the esp32.

Software part is moderately completed.

Future updates include :

1) Analogue pid (so no need of microcontroller anymore)

2) Remote control using esp32
  
3) Current limiting and safety circuitry inclusion

![image](https://github.com/Mainul-Islam-07/Custom-Buck-Converter/assets/78782260/2769c959-510f-43a1-a006-3f3c2a8e44a3)

![image](https://github.com/Mainul-Islam-07/Custom-Buck-Converter/assets/78782260/c83aa222-178b-49b8-b564-70f4922abcd3)

