int a = 1, b,c;
char d;
int a[10];
float m,n;
int fibo(int a){
    if(a == 1|| a==2){
        return 1;
    }
    return fibo(a-1)+fibo(a-2);
}
//this is  
/*aaa*/
int main() {
    int m = 0,n,i;
    char d;
    int a[10];
    m = read();
    i =1;
    d = '1';

    while (i<= m)
    {
        n = fibo(i);
        write(n);
        i = i+1;
    }
    for(i<8){
        i++;
    }
    i++;
    return 1;
}
