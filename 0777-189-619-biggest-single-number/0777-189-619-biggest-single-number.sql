# Write your MySQL query statement below
select MAX(num) as num
from(
    select num 
    from MyNumbers
    GROUP BY num
    HAVING count(*)=1
) as Numbers;




