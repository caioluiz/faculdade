program task_combustivel;

VAR tempo: INTEGER;
VAR velocidadeMedia: INTEGER;
VAR combustivel: REAL;
VAR distancia: REAL;

BEGIN
  readln(tempo);
  readln(velocidadeMedia);
  
  distancia := (tempo*velocidadeMedia);
  combustivel := (distancia/12);
  
  writeln('Horas gastas na viagem: ',tempo);
  writeln('Velocidade Média: ',velocidadeMedia);
  writeln('Combustivel Gasto: ',combustivel);
  writeln('Distância percorrida: ',distancia);
END.
