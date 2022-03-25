uses crt;
type
        typ_osoba= record
                imie:string[20];
                nazwisko:string[50];
                nr_buta:byte;
                end;
        typ_klasa=array[1..30] of typ_osoba;
var
        pl:file of typ_klasa;
        klasa:typ_klasa;
        i:byte;
        n:byte;
BEGIN
clrscr;
assign(pl,'dane.bin');
rewrite(pl);
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
write(pl,klasa);
close(pl);
delay(2000);
readkey;
END.
