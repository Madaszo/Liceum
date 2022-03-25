uses crt;
var
        l,s:word;
BEGIN
clrscr;
write('podaj liczbe: ');
readln(l);
while l>0 do
        begin
        s:=s+ l mod 10;
        l:= l div 10;
        end;
writeln('suma cyfr wynosi: ',s);
readkey;
END.
