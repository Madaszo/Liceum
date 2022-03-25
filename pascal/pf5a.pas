uses crt;
var
        n:byte;
function silnia(n:byte):longint;
Begin
if n=0 then
        silnia:=1
else
        silnia:=silnia(n-1)*n;
End;
Begin
clrscr;
write('podaj liczbe: ');
readln(n);
writeln('silnia z liczby wynosi: ',silnia(n));
readkey;
END.