from PIL import Image, ImageFilter

before = Image.open("image.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out-edge.jpg")