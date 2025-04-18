# Write your MySQL query statement below
select t.id 
from Weather t
join Weather v
ON t.recordDate=DATE_ADD(v.recordDate,INTERVAL 1 DAY)
where t.temperature>v.temperature;