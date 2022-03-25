uses crt;
type
        typ_osoba= record
                imie:string[20];
                nazwisko:string[50];
                nr_buta:byte;
                end;
var
        klasa:array[1..30] of typ_osoba;
        i:byte;
        n:byte;
BEGIN
clrscr;
write('podaj liczb© os¢b: ');
readln(n);
writeln;
for i:=1 to n do
        begin
        writeln('Podaj dane ',i,' osoby:');
        write('imie: ');
        readln(klasa[i].imie);
        write('nazwisko: ');
        readln(klasa[i].nazwisko);
        write('nr buta: ');
        readln(klasa[i].nr_buta);
        writeln;
        end;
delay(2000);
writeln;
writeln;
textcolor(red);
textbackground(7);
for i:=1 to n do
        begin
        writeln('Oto dane ',i,' osoby:');
        writeln('imie: ',klasa[i].imie);
        writeln('nazwisko: ',klasa[i].nazwisko);
        writeln('nr buta: ',klasa[i].nr_buta);
        writeln;
        end;
readkey;
END.