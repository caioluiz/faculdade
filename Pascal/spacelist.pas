program spacelist;

CONST valorCombustivel= 2.90;

VAR
  odometroInicioDia: REAL;
  odometroFimDia: REAL;
  litrosCombustivel: REAL;
  valorRecebidoDoPassageiro: REAL;
  mediaCombustivel: REAL;
  lucroLiquido: REAL;

begin
  write('Odometro no inicio do dia: ');
  readln(odometroInicioDia);
  write('Odometro no final do dia: ');
  readln(odometroFimDia);
  write('Litros de combustível gastos: ');
  readln(litrosCombustivel);
  write('Valor recebido do passageiro: ');
  readln(valorRecebidoDoPassageiro);

  mediaCombustivel := ((odometroFimDia - odometroInicioDia) / litrosCombustivel);
  writeln('A média de combustível é de: ', mediaCombustivel:1:2);
  lucroLiquido := (valorRecebidoDoPassageiro - (litrosCombustivel * valorCombustivel));
  writeln('O lucro Líquido foi de: ', lucroLiquido:1:2);
end.
