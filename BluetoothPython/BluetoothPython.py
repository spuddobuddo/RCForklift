import keyboard

def on_key_press(event):
    if event.name == 'w': #forward
        keyboard.send('backspace')
        keyboard.send('1')
        keyboard.send('enter')
    elif event.name == 's': #backward
        keyboard.send('backspace')
        keyboard.send('2')
        keyboard.send('enter')
    elif event.name == 'q': #turn off motors
        keyboard.send('backspace')
        keyboard.send('0')
        keyboard.send('enter')
    elif event.name == 'j': #servo left
        keyboard.send('backspace')
        keyboard.send('4')
        keyboard.send('enter')
    elif event.name == 'l': #servo right
        keyboard.send('backspace')
        keyboard.send('3')
        keyboard.send('enter')
    elif event.name == 'k': #servo neutral
        keyboard.send('backspace')
        keyboard.send('5')
        keyboard.send('enter')

keyboard.on_press(on_key_press)

while True:
    if keyboard.is_pressed('esc'): #break python macro
        break
