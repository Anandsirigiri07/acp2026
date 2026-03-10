#!/usr/bin/env bats

@test "Test case 1: normal float values" {
  run ./max_index <<EOF
5
1.2
3.5
2.8
9.1
4.0
EOF

  [[ "$output" == *"Maximum value = 9.10"* ]]
  [[ "$output" == *"Index of maximum value = 3"* ]]
}

@test "Test case 2: negative numbers" {
  run ./max_index <<EOF
4
-5.2
-2.3
-8.1
-1.0
EOF

  [[ "$output" == *"Maximum value = -1.00"* ]]
  [[ "$output" == *"Index of maximum value = 3"* ]]
}

@test "Test case 3: single element" {
  run ./max_index <<EOF
1
7.5
EOF

  [[ "$output" == *"Maximum value = 7.50"* ]]
  [[ "$output" == *"Index of maximum value = 0"* ]]
}

@test "Test case 4: all equal values" {
  run ./max_index <<EOF
3
4.4
4.4
4.4
EOF

  [[ "$output" == *"Maximum value = 4.40"* ]]
  [[ "$output" == *"Index of maximum value = 0"* ]]
}