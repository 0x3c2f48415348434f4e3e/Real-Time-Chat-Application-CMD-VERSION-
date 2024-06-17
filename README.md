#Real time chat application
Creating a real time chat application implemting the TCP/IP protocol.

#LINUX
Will be focusing on the Linux system before moving to windows

#Socket
When using the Linux system, to use the socket API, one must include the
header <sys/socket.h>

Lets focus on the server side for now. There are many ways to create a 
server socket, and the implementation of this will be base don whether
one wants the program to be within their local machine/local network or 
global network (The internet obviusly).
Here we will belooking at the internet.
Now to create a server  socket, we will be using the help of a function
called getaddrinfo(), and this function just returns to us a linkelist
of network address and we can loop over these given network address
to find a suitable one for the our server (This is to make sure our 
node is unique). we can use this also for the client.
To read more, look: 
https://www.man7.org/linux/man-pages/man3/getaddrinfo.3.html
Reading the documentation will really help one understand how the
eveything works under the hood, but might take a bit of reasearch and 
reading code to actually see how eveything fits togetyher
