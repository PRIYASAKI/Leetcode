# Write your MySQL query statement below
select class 
from Courses
GROUP BY class
HAVING count(Student)>=5;