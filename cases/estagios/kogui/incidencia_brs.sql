select br, count(br) 
from acidentes
group by br
having count(br)>0
order by count(br) desc;

-- a BR COM MAIOR NUMERO DE ACIDENTES É A 101