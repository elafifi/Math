/**
* Name: Ahmed ELafifi
* date: 10/9/2018 
*/
=======================================sum of (a,b) && gcd(a,b) relation===========================================================
1-The sum of two positive integers is 588 and their greatest common factor is 49. How many such pairs of numbers can be formed?
=============================================================================================================================

We are told that the greatest common factor of two integers is 49. So, these integers are 49x49x and 49y49y, 
for some positive integers xx and yy. Notice that xx and yy must not share any common factor but 1, because if they do 
then GCF of 49x49x and 49y49y will be more that 49.

Next, we know that 49x+49y=58849x+49y=588 --> x+y=12x+y=12 --> since xx and yy don't share any common factor 
but 1 then (x, y) can be only (1, 11) and (5, 7) (all other pairs (2, 10), (3, 9), (4, 8), (6, 6) do share common factor greater than 1).
So, there are only two pairs of such numbers possible: 49*1=49 and 49*11=539 AND 49*5=245 and 49*7=343.
=====================================================================================================================================
the area of triangle by its vertices
area = |Ax*(By - Cy) + Bx*(By - Cy) + Cx(Ay - By)|

ll Area(int a,int b,int c)
{
   ll area=abs(x[a]*(y[b]-y[c])+x[b]*(y[c]-y[a])+x[c]*(y[a]-y[b]));
    return area/2;
}
=====================================================================================================================================
