# open website

import webbrowser

def open_website(url):
    # Open Google
    google_url = "https://www.google.com"
    webbrowser.open_new_tab(google_url)

    # Open the provided URL
    webbrowser.open_new_tab(url)

if __name__ == "__main__":
    website_url = "https://eng.asu.edu.eg/login"
    open_website(website_url)

#first task 
from gtts import gTTS
import vlc
myobj = gTTS(text = 'My name is Ahmed Abdelmotelb ',lang ='en',slow = False)
#saving the Converted audio in a mp3 file named
myobj.save("Test.mp3")
#Playing the Converted file
p = vlc.MediaPlayer("./Test.mp3")
p.play()
while True:
	pass

'''
 when you run this code, it sends 
 a GET request to the CoinDesk API to fetch the current Bitcoin price in USD and then prints that value.
'''
import requests

url=requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
print(url.json()['bpi']['USD'])

import os
import subprocess

favorite_folders = [
    "E:/Ahmed abd elmotelb",
    "E:/Ahmed abd elmotelb/GP"
    ]

# Display available folders to the user
for i, folder in enumerate(favorite_folders):
    print(f"{i}: {folder}")

try:
    val = int(input("Please select your directory (index starts with 0): "))
    if val < 0 or val >= len(favorite_folders):
        raise ValueError("Invalid index")
except ValueError:
    print("Invalid input. Please enter a valid index.")
else:
    # Open the selected folder using the default file manager
    folder_path = favorite_folders[val]
    if os.name == 'nt':
        os.startfile(folder_path)
    elif os.name == 'posix':
        subprocess.run(["xdg-open", folder_path])
    else:
        print("Unsupported operating system.")
#add  short cut  
import keyboard
import subprocess
import datetime


def on_triggered():
	print("teiggered")
	file = open(r'E:\Ahmed abd elmotelb\GP\EL\02_containers-20240203T165007Z-001\date.txt','w')
	file.write(str(datetime.datetime.now()))
	file.close()


def listen_for_shortcut():
	shortcut = "ctrl + alt + s"
	keyboard.add_hotkey(shortcut,on_triggered)
	keyboard.wait()


listen_for_shortcut()

