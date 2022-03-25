uses crt;
var
        p,w:byte;

Function Potega(p,w:byte):longint;
var
                i:byte;
                wynik:longint;
Begin
wynik:=1;
for i:=1 to w do
        wynik:=wynik*p;
Potega:=wynik;
End;

BEGIN
clrscr;
write('podaj podstawe: ');
readln(p);
write('podaj wykˆadnik: ');
readln(w);
writeln('wynik: ',Potega(p,w));
write('qäiec');
readkey;
END.
