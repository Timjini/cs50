import os
import qrcode

img = qrcode.make("https://learning.edx.org/")

img.save("qr.png", "PNG")