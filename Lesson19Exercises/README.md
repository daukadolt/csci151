# A way to solve the issue with GDB compiler error in Eclipse debugging mode for OSX

1. Run through [this](https://www.ics.uci.edu/~pattis/common/handouts/macmingweclipse/allexperimental/mac-gdb-install.html) guide (You may want to restart your mac if **taskgated** is not restarting )

2. Now you'll have to create a file _.gdbinit_ in your project's directory with the following inside:

` set startup-with-shell off `


3. You are good to go! Now you can run the debugging mode
