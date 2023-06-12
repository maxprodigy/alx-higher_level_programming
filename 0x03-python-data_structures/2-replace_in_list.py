#!/usr/bin/python3

def replace_in_list(my_list, dmx, element):
if dmx < 0 or dmx > (len(my_list) - 1):
    return (my_list)
else:
    my_list[dmx] = element
    return (my_list)
