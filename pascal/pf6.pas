uses crt;
var
        n:byte;
function Fibo(n:byte):longint;
Begin
if n<=2 then
        Fibo:=1
else
        Fibo:=Fibo(n-1)+Fibo(n-2);
End;
Begin
clrscr;
write('podaj liczbe: ');
readln(n);
writeln('Ta liczba ci¥gu wynosi: ',Fibo(n));
readkey;
END.
