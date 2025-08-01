WITH ct AS (
    SELECT *
    FROM Students A
    CROSS JOIN Subjects B
)

SELECT 
    ct.student_id,
    ct.student_name,
    ct.subject_name,
    SUM(CASE 
            WHEN e.subject_name IS NULL THEN 0 
            ELSE 1 
        END) AS attended_exams
FROM ct
LEFT JOIN Examinations e 
    ON ct.student_id = e.student_id 
   AND ct.subject_name = e.subject_name
GROUP BY 
    ct.student_id,
    ct.student_name,
    ct.subject_name;
