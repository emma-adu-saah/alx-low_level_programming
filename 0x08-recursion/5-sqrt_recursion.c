/*******************************************************************************
** Function: _sqrt_recursion()
** Description:
**   Returns the natural square root of the given number, or -1 if the number
**   does not have a natural square root.
**
** Parameters:
**   n: The number to find the square root of.
**
** Returns:
**   The natural square root of n, or -1 if n does not have a natural square root.
**
** Notes:
**   This function uses a recursive algorithm to find the square root.
**
*******************************************************************************/
int _sqrt_recursion(int n)
{
    /* Check if n is a perfect square. If so, return its square root. */
    if (n >= 0 && n * n == n) {
        return n;
    }

    /* If n is negative, it does not have a natural square root. */
    if (n < 0) {
        return -1;
    }

    /* Otherwise, recursively search for the square root of n. */
    int mid = n / 2;

    /* If mid squared is less than n, the square root is greater than mid. */
    if (mid * mid < n) {
        return _sqrt_recursion(n - mid * mid);
    }

    /* Otherwise, the square root is less than mid. */
    else {
        return _sqrt_recursion(mid);
    }
}
