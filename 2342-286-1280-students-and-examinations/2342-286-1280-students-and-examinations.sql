# Write your MySQL query statement below
select s.student_id,s.student_name,r.subject_name,COUNT(e.subject_name) as attended_exams
from Students s
cross join Subjects r
left join Examinations e
On s.student_id=e.student_id AND r.subject_name=e.subject_name
GROUP BY s.student_id,s.student_name,r.subject_name
ORDER BY s.student_id ASC;

