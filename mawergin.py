a=int(raw_input('1st no \n'))
b=int(raw_input('2nd no \n'))

def gcd(m,n):
    z=abs(m-n)
    if (m-n)==0:
        return n
    else:
        return gcd(z,min(m,n))

