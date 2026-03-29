#!/usr/bin/env bats

@test "Test case 1: r1 has largest area" {
  run bash -c "echo -e 'A\n2\n3\nB\n1\n2\nC\n2\n2' | ./rectangle"
  [ "$status" -eq 0 ]
  [[ "$output" == *"A = 6.00 has the largest area."* ]]
}

@test "Test case 2: r2 has largest area" {
  run bash -c "echo -e 'A\n1\n1\nB\n4\n2\nC\n2\n2' | ./rectangle"
  [ "$status" -eq 0 ]
  [[ "$output" == *"B = 8.00 has the largest area."* ]]
}

@test "Test case 3: r3 has largest area" {
  run bash -c "echo -e 'A\n1\n2\nB\n2\n2\nC\n5\n2' | ./rectangle"
  [ "$status" -eq 0 ]
  [[ "$output" == *"C = 10.00 has the largest area."* ]]
}

@test "Test case 4: tie between r1 and r2 (r1 should print)" {
  run bash -c "echo -e 'A\n2\n3\nB\n3\n2\nC\n1\n1' | ./rectangle"
  [ "$status" -eq 0 ]
  [[ "$output" == *"A = 6.00 has the largest area."* ]]
}

@test "Test case 5: all equal areas (r1 should print)" {
  run bash -c "echo -e 'A\n2\n2\nB\n2\n2\nC\n2\n2' | ./rectangle"
  [ "$status" -eq 0 ]
  [[ "$output" == *"A = 4.00 has the largest area."* ]]
}