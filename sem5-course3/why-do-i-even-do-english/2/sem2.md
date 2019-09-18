- https://www.defcon.org/images/defcon-22/dc-22-presentations/Bugher/DEFCON-22-Grant-Bugher-Detecting-Bluetooth-Surveillance-Systems-Updated.pdf

Slide 0 Bluetooth survrillance systems

![](0.png)

Slide 1 What is bluetooth?

![](1.png)

![](2.png)

![](3.png)

Bluetooth is a standart wire replacement technology designed for low power consumption.
There are three widely used bluetooth classes. 
Class one is a high power bluetooth for connection over up to hundred meters.
Class two is a mid-powed bluetooth connection over up to tem meters.
And class three is a low power bluetooth for connection over up to one meter.
Class 2 is the most popular among electronic devices that utilises bluetooth tecnology due to it's optimal price and good enought effective range.

Slide 2 How bluetooth works?

You can see sequence diagramm for bluetooth handshake. Master-slave notation is used for actor identification. Master is a primery device, slave is a pereferal device, for example, your headphones. Please note "SMP Pairing request" and "SMP Pairing responce"

Slide 3 LAP/UAP and anonimous pairing

There are two kind of pairing requests: direct and anonimous. Basicly, direct is used if you already know device, anonimous otherwise.
For anonimous pairing requests general anonimous addres is broadcasted. You can see this address aat the top.
But what is bluetooth address? At the bottom you can see general info on that, but long story short there is LAP, UAP and NAP which is irrelevant. Note that LAP is only 6 hex digit long which gives us 24 bites of entropy.

Slide 4-5 Bluetooth surveillance applications

Here and here you can see bluetooth sniffers. They are all small, relatevelly inexpensive and quite effective. They all look kinda simmilarly: white box with or without solar array over it on the road side.

