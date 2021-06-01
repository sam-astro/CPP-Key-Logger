# Key-Logger For Windows
Local network program that logs keystrokes.
It stores all key presses and clicks in a text document, and when the host becomes active it will send that data to them.

<b>IMPORTANT: If you try to run this, it will most likely be detected by your antivirus. Make sure to create an exception or turn of your antivirus if you decide to run it, or it may be deleted.</b>

<h1>In Development</h1>
This project is still in development, and has many flaws which keep it from being as good as it could be. I am currently working on a version which allows WAN connectivity, which shouldn't be too difficult once I do some research. I also want to allow for a completely invisible client <i>(the actual "logger")</i>. Although this can be enabled if you like by uncommenting a line of code in net.cpp then recompiling, it doen't work all of the time and I haven't even tested it for a while. Finally, I want to make a version or integrate a way to make it unrecognizable by any antivirus software, because currently it gets flagged and removed right away. You can use a workaround like making an exception for the CPP-Key-Logger folder on your system in your antivirus software.

<h1>Alternative Logger I Made</h1>
To create a keylogger that fully works, I have made the <a href="https://github.com/caffene-query/Python-Keylogger-That-Emails">emailer keylogger</a> in python that emails logged keys from anywhere in the world from the victims computer. Although it fully works, it requires the install of python3 on each system it infects which is not ideal since most systems don't have it and it is a large download. That is why I will most likely go back to this c++ project, since all windows machines can run it and builds (.exe's) all seem to work fine.
