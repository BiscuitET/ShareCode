array = [[1,2,3,4],[5,6,7,8]]

row = len(array) - 1
col = 0
print "row = %d " % row
print "col = %d " % len(array[0])

target = raw_input("Input the target:")
target = int(target)

while row >= 0 and col <= len(array[0]) - 1 :
    print "target =%d  check = %d" % (target, int(array[row][col]))
    print "row = %d  col = %d" %(row, col)
    if target > int(array[row][col]):
        col = col + 1
        print "col++"
    elif target < int(array[row][col]):
        row = row - 1
        print "row--"
    else :
        print "True"
        break

print "False"
