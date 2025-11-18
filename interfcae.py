import serial
import autotable

com = serial.Serial('COM6', 9600)
print(com.read())
com.close()
