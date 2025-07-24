# print('''Dashing through the snow
# In a one-horse open sleigh
# O’er the fields we go
# Laughing all the way

# Bells on bob tail ring
# Making spirits bright
# What fun it is to ride and sing
# A sleighing song tonight!

# Jingle bells, jingle bells,
# Jingle all the way.
# Oh! what fun it is to ride
# In a one-horse open sleigh.

# Jingle bells, jingle bells,
# Jingle all the way;
# Oh! what fun it is to ride
# In a one-horse open sleigh.''')
from colorama import Fore, Back, Style, init

init()  

print(Fore.CYAN + "This is red text.")
print(Fore.GREEN + "This is green text.")
print(Fore.YELLOW + "This is yellow text on default background.")
print(Back.BLUE + Fore.WHITE + "White text on blue background" + Style.RESET_ALL)
print( Fore.LIGHTMAGENTA_EX + "This is normal text again.")
import pyttsx3

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Set the text to be spoken
text = "Hello! jyoti how are you doing."

# Speak the text
engine.say(text)

# Run the speech engine
engine.runAndWait()
