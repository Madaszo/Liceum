uses crt;
var
        a,b,c,x1,x2,delta,k,l:real;
        x,y:byte;
        kod:word;
        s:string;
BEGIN
clrscr;
write('podaj a: ');
x:=wherex;
y:=wherey;
{$I-}
repeat
        readln(a);
        kod:=ioresult;
        if (kod>0) or (a=0) then
                begin
                textcolor(red);
                gotoxy(20,10);
                write('Podano bˆ©dne dane. Podaj jeszcze raz');
                delay(2000);
                gotoxy(20,10);
                clreol;
                gotoxy(x,y);
                clreol;
                textcolor(7);
                end;
until (kod=0) and (a<>0);
{$I+}
write('podaj b: ');
x:=wherex;
y:=wherey;
repeat
        readln(s);
        val(s,b,kod);
        if kod>0 then
                begin
                textcolor(red);
                gotoxy(20,10);
                write('Podano bˆ©dne dane. Podaj jeszcze raz');
                delay(2000);
                gotoxy(20,10);
                clreol;
                gotoxy(x,y);
                clreol;
                textcolor(7);
                end;
until kod=0;
write('podaj c: ');
x:=wherex;
y:=wherey;
repeat
        readln(s);
        val(s,c,kod);
        if kod>0 then
                begin
                textcolor(red);
                gotoxy(20,10);
                write('Podano bˆ©dne dane. Podaj jeszcze raz');
                delay(2000);
                gotoxy(20,10);
                clreol;
                gotoxy(x,y);
                clreol;
                textcolor(7);
                end;
until kod=0;
gotoxy(1,wherey+3);
delta:=sqr(b)-4*a*c;
if delta>=0 then
        begin
        x1:=(-b-sqrt(delta))/(2*a);
        x2:=(-b+sqrt(delta))/(2*a);
        writeln('x1= ',x1:6:2);
        writeln('x2= ',x2:6:2);
        end
else
        begin
        k:=(-b)/(2*a);
        l:=(sqrt(-delta))/(2*a);
        if l>0 then
                begin
                writeln('x1= ',k:0:2,'-j',l:0:2);
                writeln('x2= ',k:0:2,'+j',l:0:2);
                end
        else
                begin
                writeln('x1= ',k:0:2,'+j',-l:0:2);
                writeln('x2= ',k:0:2,'-j',-l:0:2);
                end;
        end;

readkey;
END.

