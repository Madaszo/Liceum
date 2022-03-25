uses crt;
var
        l,w:byte;
function potrek(l,w:byte):longint;
Begin
if w=0 then
        potrek:=1
else
        potrek:=potrek(l,w-1)*l;
End;
BEGIN
clrscr;
write('podaj liczbe: ');
readln(l);
write('podaj wykˆadnik: ');
readln(w);
writeln('liczba ',l,' do pot©gi ',w,' wynosi: ',potrek(l,w));
readkey;
END.
