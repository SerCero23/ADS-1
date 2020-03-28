int cbinsearch(int* arr, int size, int value) {
int el_first = 0;
int el_last = size-1;
int n = 0;
while (el_first <= el_last)
{
int mid = el_first+(el_last-el_first)/2;
if (arr[mid]==value)
{
n+= 1;
int k=1;
while (arr[mid + k] == value)
{
n += 1;
k++;
}
while (arr[mid - k] == value)
{
n+= 1;
k++;
}
return n;
}
if (arr[mid] < value)
el_first = mid + 1;
else el_last = mid - 1;
}
return n;
}
