#!/usr/bin/python3


def canUnlockAll(boxes):
    """ method that determines if all the boxes can be opened """
    open_boxes = [0]
    for i in open_boxes:
        for box in boxes[i]:
            if box not in open_boxes and box < len(boxes):
                open_boxes.append(box)
    if (len(boxes) == len(open_boxes)):
        return True
    else:
        return False
