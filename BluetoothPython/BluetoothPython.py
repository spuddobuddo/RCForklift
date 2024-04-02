import keyboard

def on_key_press(event):
    if event.name == 'w':
        keyboard.send('backspace')
        keyboard.send('1')
        keyboard.send('enter')
    elif event.name == 's':
        keyboard.send('backspace')
        keyboard.send('2')
        keyboard.send('enter')
    elif event.name == 'q':
        keyboard.send('backspace')
        keyboard.send('0')
        keyboard.send('enter')

keyboard.on_press(on_key_press)

print("Press 'w' to trigger the action. Press 'q' to quit.")

while True:
    if keyboard.is_pressed('esc'):
        break
