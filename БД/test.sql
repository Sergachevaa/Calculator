DROP TABLE IF EXISTS test CASCADE;

CREATE TABLE test (
    id SERIAL PRIMARY KEY,
    value TEXT
);

-- Случайные числа от 100 до 999 как строки
DO $$
BEGIN
    FOR i IN 1..10 LOOP
        INSERT INTO test (value)
        VALUES (TRUNC(RANDOM() * 900 + 100)::INT::TEXT);
    END LOOP;
END $$;
