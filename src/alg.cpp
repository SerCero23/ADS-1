int cbinsearch(int* arr, int size, int value) {
    int El_First = 0;
    int El_Last = size - 1;
    int n = 0;
    while (El_First <= El_Last) {
    int Mid = (El_First+El_Last)/2;
    if(arr[Mid]==value)
    n+=1;
     int k =1;
        while(arr[Mid+k]==value){
        n+=1;
        k++;
        }
        while(arr[Mid-k]==value){
        n+=1;
        k++;
        }
    if(arr[Mid]<value)
    El_Last = Mid-1;
    else
    El_First = Mid+1;
        }
        return n;
        }
