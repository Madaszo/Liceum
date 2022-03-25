uses crt;
var
        a,b,c,s,p:real;
BEGIN
clrscr;
writeln('podaj 3 boki');
write('a: ');
readln(a);
write('b: ');
readln(b);
write('c: ');
readln(c);
if (a+b>c) and (a+c>b) and (b+c>a) then
        begin
        p:=(a+b+c)/2;
        s:=sqrt(p*(p-a)*(p-b)*(p-c));
        writeln('pole wynosi: ',s:0:3);
        end
else
        writeln('nie udaˆo si© stworzy† tr¢jk¥ta');
readkey;
END.