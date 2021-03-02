import pyautogui, time
mod = input("Do you want to \n1. click \n2. send\n")
mod = int(mod)

if mod == 1:
		spamNum = input("how many times do u want to click ? ")
		seconds = input("Enter the number of seconds: ")
		print("OK\nI will click " + spamNum + " times\n\nPROGRAM WILL START IN " + seconds + "SECONDS (prepare)")
		time.sleep(int(seconds))
		for i in range(1, (int(spamNum))+1, 1):
			pyautogui.click()

else:
	spamNum = input("how many times do u want to send a message ? ")
	seconds = input("Enter the number of seconds: ")
	mess = input("Enter the message: ")
	print("OK\nI will send " + spamNum + " times the message \"" + mess + "\" \n\nPROGRAM WILL START IN "+ seconds +" SECONDS (prepare)\n")
	time.sleep(int(seconds))
	for i in range(1, (int(spamNum))+1, 1):
		# pyautogui.click()
		# mess = bytes(mess, encoding='utf-8')
		# pyautogui.write(mess.decode('utf-8'))
		pyautogui.write(mess)
		pyautogui.press("ENTER")
