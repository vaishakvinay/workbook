def equilateral(sides):
    return sides[0] == sides[1] == sides[2] and sides[0] > 0


def isosceles(sides):
    a, b, c = sides

    # check valid triangle
    if a <= 0 or b <= 0 or c <= 0:
        return False
    if a + b <= c or a + c <= b or b + c <= a:
        return False

    # check at least two equal
    return a == b or b == c or a == c


def scalene(sides):
    a, b, c = sides
        # check valid triangle
    if a <= 0 or b <= 0 or c <= 0:
        return False
    if a + b <= c or a + c <= b or b + c <= a:
        return False

    return a != b and b != c and a != c
