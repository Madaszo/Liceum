uses crt;
var
        p,w:integer;
        tak:boolean;
Function Potega(p,w:integer):real;
var
                i:byte;
                wynik:real;
Begin
case p of
1:Potega:=1;
0:Potega:=0;
else
        begin
        wynik:=1;
        for i:=1 to abs(w) do
                wynik:=wynik*p;
        if w<0 then
                Potega:=1/wynik
        else
                Potega:=wynik;
        end;
end;
End;

BEGIN
repeat
tak:=true;
clrscr;
write('podaj podstawe: ');
readln(p);
write('podaj wykˆadnik: ');
readln(w);
if (p=0) and (w=0) then
        begin
        tak:=false;
        gotoxy(25,10);
        textcolor(red);
        writeln('podano bˆ©dne dane');
        delay(2000);
        textcolor(7);
        end;
until tak;
writeln('wynik: ',Potega(p,w):0:3);
write('qäiec');
readkey;
END.
