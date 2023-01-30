# QR code = Quick Response code
# converting any text to the square box QR format
# on scanning, you will be retrackted to the original text
# syntax:


import qrcode

qr = qrcode.QRCode(
    version = 1, box_size = 10, border = 2
)

qr.add_data(input("Enter your text: "))
img = qr.make_image()
img.save = ("qr/QR.png")
img.show()