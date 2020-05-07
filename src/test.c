int a  , b,c;
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
    int m,n,i;
    m = read();
    i =1;
    // int a[10];
    while (i<= m)
    {
        n = fibo(i);
        write(n);
        i = i+1;
    }
    return 1;
}
