// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// c++;
// }                                                            Time Complexity: O(logn)

//                                2 Solution

// int c = 0;
// for(int i = n; i > 1; i /= i) {
// c++;
// }                                                            Time Complexity: O(1)

//                                3 Solution

// int c = 0;
// for(int i = 0; i < n; i += k) {
// c++;
// }                                                            Time Complexity: O(n)

//                                4 Solution

// int c = 0;
// for(int i = 1; i < n; i *= 2) {
// c++;
// }                                                            Time Complexity: O(logn)

//                                5 Solution

// int c = 0;
// for(int i = 0; i < n; i++) {
// c +=i;
// }                                                            Time Complexity: O(n)


//                               Assigment :- 2


// for(int i = 0; i < n; i++) {
// for(int j = 0; j * j < n; j++) {
// cout << “PhysicsWallah ”;
// }
// }                                                            Time Complexity: O(n(rootn))

//                                2 Solution

// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j < n; j *= 2) {
// c++;
// }
// }                                                            Time Complexity: O(nlogn)

//                                 3 Solution

// int c = 0;
// for(int i = 0; i < n; i++) {
// for(int j = 1; j * j < n; j *= 2) {
// c++;
// }
// }                                                            Time Complexity: O(nlogn)

//                                 4 Solution

// int c = 0;
// for(int i = n; i > 0; i /= 2) {
// for(int j = 0; j < i; j ++) {
// c++;
// }
// }                                                            Time Complexity: O(n)

//                                 5 Solution

// int c = 0;
// for(int i = 1; i < n; i*=2) {
// for(int j = n; j > i; j--) {
// c++;
// }
// }                                                            Time Complexity: O(nlogn)