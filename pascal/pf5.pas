uses crt;
var
        n:byte;
function silnia(n:byte):longint;
var
        s:longint;
        i:byte;
Begin
s:=1;
for i:=n downto 1 do
        s:=s*i;
silnia:=s;
End;
Begin
clrscr;
write('podaj liczbe: ');
readln(n);
writeln('silnia z liczby wynosi: ',silnia(n));
readkey;
END.