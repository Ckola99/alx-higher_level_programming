for ascii_value in range(122, 96, -1):
    print("{:c}".format(ascii_value if ascii_value % 2 == 0 else ascii_value - 32), end="")
