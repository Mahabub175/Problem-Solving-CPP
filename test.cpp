#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     int *A = new int[N];
//     for (int i = 0; i < N; ++i)
//     {
//         cin >> A[i];
//     }

//     sort(A, A + N);
//     for (int i = 0; i < N; ++i)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     reverse(A, A + N);
//     for (int i = 0; i < N; ++i)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     delete[] A;
//     return 0;
// }

// int *sort_it(int N)
// {
//     int *A = new int[N];

//     for (int i = 0; i < N; ++i)
//     {
//         cin >> A[i];
//     }

//     sort(A, A + N);
//     reverse(A, A + N);

//     return A;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     int *sortedArray = sort_it(N);

//     for (int i = 0; i < N; ++i)
//     {
//         cout << sortedArray[i] << " ";
//     }
//     cout << endl;

//     delete[] sortedArray;

//     return 0;
// }

// int main()
// {
//     for (string S; getline(cin, S);)
//     {
//         int charCount[26] = {0};

//         for (char c : S)
//         {
//             charCount[c - 'a']++;
//         }

//         for (int i = 0; i < 26; i++)
//         {
//             for (int j = 0; j < charCount[i]; j++)
//             {
//                 cout << char('a' + i);
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int topStudentId = 0;
//         string topStudentName = "";
//         char topStudentSection = 'A';
//         int topStudentMark = -1;

//         for (int i = 0; i < 3; i++)
//         {
//             int ID, TotalMarks;
//             string Name;
//             char Section;

//             cin >> ID >> Name >> Section >> TotalMarks;

//             if (TotalMarks > topStudentMark)
//             {
//                 topStudentMark = TotalMarks;
//                 topStudentId = ID;
//                 topStudentName = Name;
//                 topStudentSection = Section;
//             }
//             else if (TotalMarks == topStudentMark && ID < topStudentId)
//             {
//                 topStudentId = ID;
//                 topStudentName = Name;
//                 topStudentSection = Section;
//             }
//         }

//         cout << topStudentId << " " << topStudentName << " " << topStudentSection << " " << topStudentMark << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N, S;
//         cin >> N >> S;
//         int A[100];

//         for (int i = 0; i < N; i++)
//         {
//             cin >> A[i];
//         }

//         bool possible = false;

//         for (int i = 0; i < N && !possible; i++)
//         {
//             for (int j = i + 1; j < N && !possible; j++)
//             {
//                 for (int k = j + 1; k < N && !possible; k++)
//                 {
//                     if (A[i] + A[j] + A[k] == S)
//                     {
//                         possible = true;
//                     }
//                 }
//             }
//         }

//         cout << (possible ? "YES" : "NO") << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     string S;
//     getline(cin, S);

//     string word = "";

//     for (int i = 0; i <= S.length(); i++)
//     {
//         if (i < S.length() && S[i] != ' ')
//         {
//             word += S[i];
//         }
//         else
//         {
//             if (word == "Jessica")
//             {
//                 cout << "YES" << endl;
//                 return 0;
//             }
//             word = "";
//         }
//     }

//     cout << "NO" << endl;

//     return 0;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     string nm[100], cls[100], sec[100], id[100];

//     for (int i = 0; i < N; i++)
//     {
//         cin >> nm[i] >> cls[i] >> sec[i] >> id[i];
//     }

//     for (int i = 0; i < N / 2; i++)
//     {
//         swap(sec[i], sec[N - 1 - i]);
//     }

//     for (int i = 0; i < N; i++)
//     {
//         cout << nm[i] << " " << cls[i] << " " << sec[i] << " " << id[i] << "\n";
//     }

//     return 0;
// }

// class Student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;

//     int totalMarks() const
//     {
//         return math_marks + eng_marks;
//     }
// };

// bool compare(const Student &a, const Student &b)
// {
//     if (a.totalMarks() != b.totalMarks())
//         return a.totalMarks() > b.totalMarks();
//     return a.id < b.id;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     Student students[100];

//     for (int i = 0; i < N; i++)
//     {
//         cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }

//     sort(students, students + N, compare);

//     for (int i = 0; i < N; i++)
//     {
//         cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " "
//              << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << "\n";
//     }

//     return 0;
// }

// class Student
// {
// public:
//     string nm;
//     int cls;
//     char s;
//     long long id;
//     int math_marks;
//     int eng_marks;
// };

// bool compare(Student &a, Student &b)
// {
//     if (a.eng_marks != b.eng_marks)
//         return a.eng_marks > b.eng_marks;
//     if (a.math_marks != b.math_marks)
//         return a.math_marks > b.math_marks;
//     return a.id < b.id;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     Student students[1000];

//     for (int i = 0; i < N; i++)
//     {
//         cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }

//     sort(students, students + N, compare);

//     for (int i = 0; i < N; i++)
//     {
//         cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " "
//              << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string S, X;
//         cin >> S >> X;

//         string result;
//         int n = S.size();
//         int m = X.size();

//         for (int i = 0; i < n;)
//         {
//             if (i + m <= n && S.substr(i, m) == X)
//             {
//                 result += '#';
//                 i += m;
//             }
//             else
//             {
//                 result += S[i];
//                 i++;
//             }
//         }

//         cout << result << "\n";
//     }
//     return 0;
// }

// int main()
// {
//     int N;
//     cin >> N;

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (j == i && j == N - i - 1)
//             {
//                 cout << "X";
//             }
//             else if (j == i)
//             {
//                 cout << "\\";
//             }
//             else if (j == N - i - 1)
//             {
//                 cout << "/";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//         cin >> A[i];

//     int M;
//     cin >> M;
//     vector<int> B(M);
//     for (int i = 0; i < M; i++)
//         cin >> B[i];

//     int X;
//     cin >> X;

//     A.insert(A.begin() + X, B.begin(), B.end());

//     for (int num : A)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int N;
//         cin >> N;
//         int A[1000];
//         for (int i = 0; i < N; i++)
//             cin >> A[i];

//         bool sorted = true;
//         for (int i = 1; i < N; i++)
//         {
//             if (A[i] < A[i - 1])
//             {
//                 sorted = false;
//                 break;
//             }
//         }

//         if (sorted)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<long long> arr(n);

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 1; i < n; i++)
//         arr[i] += arr[i - 1];

//     for (int i = n - 1; i >= 0; i--)
//         cout << arr[i] << " ";

//     cout << "\n";

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     sort(arr.begin(), arr.end());

//     bool duplicate = false;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1])
//         {
//             duplicate = true;
//             break;
//         }
//     }

//     cout << (duplicate ? "YES" : "NO") << "\n";

//     return 0;
// }

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// void insert(Node *&head, int val)
// {
//     if (!head)
//     {
//         head = new Node(val);
//         return;
//     }

//     Node *tmp = head;
//     while (tmp->next)
//         tmp = tmp->next;

//     tmp->next = new Node(val);
// }

// int main()
// {
//     Node *head = nullptr;
//     int x;
//     while (cin >> x && x != -1)
//         insert(head, x);

//     int mn = INT_MAX, mx = INT_MIN;

//     for (Node *t = head; t; t = t->next)
//     {
//         if (t->val < mn)
//             mn = t->val;
//         if (t->val > mx)
//             mx = t->val;
//     }

//     cout << mx - mn << endl;
// }

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         Node *head = nullptr, *tail = nullptr;
//         int x, v;

//         while (cin >> v && v != -1)
//         {
//             Node *node = new Node(v);
//             if (!head)
//                 head = tail = node;
//             else
//                 tail = tail->next = node;
//         }

//         cin >> x;
//         int i = 0, found = -1;

//         for (Node *t = head; t; t = t->next, i++)
//             if (t->val == x)
//             {
//                 found = i;
//                 break;
//             }
//         cout << found << endl;
//     }
// }

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// int main()
// {
//     Node *a = nullptr, *b = nullptr, *t;
//     int v;

//     while (cin >> v && v != -1)
//     {
//         Node *n = new Node(v);
//         if (!a)
//             a = t = n;
//         else
//             t = t->next = n;
//     }

//     while (cin >> v && v != -1)
//     {
//         Node *n = new Node(v);
//         if (!b)
//             b = t = n;
//         else
//             t = t->next = n;
//     }

//     Node *p = a, *q = b;
//     while (p && q && p->val == q->val)
//         p = p->next, q = q->next;

//     cout << (p || q ? "NO" : "YES") << endl;
// }

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// int main()
// {
//     int Q, x, v;
//     cin >> Q;
//     Node *head = nullptr;

//     while (Q--)
//     {
//         cin >> x >> v;
//         if (x == 0)
//         {
//             Node *n = new Node(v);
//             n->next = head;
//             head = n;
//         }
//         else if (x == 1)
//         {
//             Node *n = new Node(v);
//             if (!head)
//                 head = n;
//             else
//             {
//                 Node *t = head;
//                 while (t->next)
//                     t = t->next;
//                 t->next = n;
//             }
//         }
//         else if (x == 2)
//         {
//             if (v == 0 && head)
//             {
//                 Node *d = head;
//                 head = head->next;
//                 delete d;
//             }
//             else
//             {
//                 Node *t = head;
//                 for (int i = 0; t && i < v - 1; i++)
//                     t = t->next;
//                 if (t && t->next)
//                 {
//                     Node *d = t->next;
//                     t->next = t->next->next;
//                     delete d;
//                 }
//             }
//         }

//         for (Node *t = head; t; t = t->next)
//             cout << t->val << " ";
//         cout << "\n";
//     }
// }

// struct Node
// {
//     int V;
//     Node *next;
//     Node(int val) : V(val), next(nullptr) {}
// };

// int main()
// {
//     Node *head = nullptr, *tail = nullptr;
//     int V;

//     while (cin >> V && V != -1)
//     {
//         Node *n = new Node(V);
//         if (!head)
//             head = tail = n;
//         else
//             tail = tail->next = n;
//     }

//     for (Node *c = head; c; c = c->next)
//     {
//         Node *p = c, *t = c->next;
//         while (t)
//         {
//             if (t->V == c->V)
//             {
//                 Node *d = t;
//                 p->next = t->next;
//                 t = t->next;
//                 delete d;
//             }
//             else
//                 p = t, t = t->next;
//         }
//     }

//     for (Node *t = head; t; t = t->next)
//         cout << t->V << " ";
// }

// struct Node
// {
//     int val;
//     Node *next;
//     Node(int v) : val(v), next(nullptr) {}
// };

// int main()
// {
//     Node *head = nullptr;
//     Node *tail = nullptr;
//     int v;

//     while (cin >> v && v != -1)
//     {
//         Node *n = new Node(v);
//         if (!head)
//             head = tail = n;
//         else
//             tail = tail->next = n;
//     }

//     int mn = INT_MAX, mx = INT_MIN;

//     for (Node *t = head; t; t = t->next)
//     {
//         if (t->val < mn)
//             mn = t->val;
//         if (t->val > mx)
//             mx = t->val;
//     }

//     cout << mx - mn << "\n";
// }

// int main()
// {
//     typedef int *Node;
//     Node head = nullptr, tail = nullptr;
//     int v;

//     while (cin >> v && v != -1)
//     {
//         Node n = (int *)malloc(sizeof(int) * 2);
//         n[0] = v;
//         *((intptr_t *)&n[1]) = (intptr_t)nullptr;

//         if (!head)
//         {
//             head = tail = n;
//         }
//         else
//         {
//             *((intptr_t *)&tail[1]) = (intptr_t)n;
//             tail = n;
//         }
//     }

//     int mn = INT_MAX, mx = INT_MIN;
//     Node t = head;

//     while (t)
//     {
//         if (t[0] < mn)
//             mn = t[0];
//         if (t[0] > mx)
//             mx = t[0];
//         t = (Node)(*((intptr_t *)&t[1]));
//     }

//     cout << mx - mn << endl;

//     t = head;

//     while (t)
//     {
//         Node next = (Node)(*((intptr_t *)&t[1]));
//         free(t);
//         t = next;
//     }

//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         typedef void **Node;
//         Node head = nullptr, tail = nullptr;
//         int v;

//         while (cin >> v && v != -1)
//         {
//             Node n = (Node)malloc(sizeof(void *) * 2);
//             n[0] = (void *)(intptr_t)v;
//             n[1] = nullptr;

//             if (!head)
//             {
//                 head = tail = n;
//             }
//             else
//             {
//                 tail[1] = (void *)n;
//                 tail = n;
//             }
//         }

//         int X;
//         cin >> X;

//         Node t = head;
//         int idx = 0, found = -1;

//         while (t)
//         {
//             int val = (int)(intptr_t)t[0];
//             if (val == X)
//             {
//                 found = idx;
//                 break;
//             }
//             t = (Node)t[1];
//             idx++;
//         }

//         cout << found << endl;

//         t = head;

//         while (t)
//         {
//             Node next = (Node)t[1];
//             free(t);
//             t = next;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     typedef void **Node;
//     Node head1 = nullptr, tail1 = nullptr;
//     Node head2 = nullptr, tail2 = nullptr;
//     int v;

//     while (cin >> v && v != -1)
//     {
//         Node n = (Node)malloc(sizeof(void *) * 2);
//         n[0] = (void *)(intptr_t)v;
//         n[1] = nullptr;
//         if (!head1)
//             head1 = tail1 = n;
//         else
//         {
//             tail1[1] = (void *)n;
//             tail1 = n;
//         }
//     }

//     while (cin >> v && v != -1)
//     {
//         Node n = (Node)malloc(sizeof(void *) * 2);
//         n[0] = (void *)(intptr_t)v;
//         n[1] = nullptr;
//         if (!head2)
//             head2 = tail2 = n;
//         else
//         {
//             tail2[1] = (void *)n;
//             tail2 = n;
//         }
//     }

//     Node a = head1, b = head2;
//     bool same = true;

//     while (a && b)
//     {
//         if ((int)(intptr_t)a[0] != (int)(intptr_t)b[0])
//         {
//             same = false;
//             break;
//         }
//         a = (Node)a[1];
//         b = (Node)b[1];
//     }

//     if (a || b)
//         same = false;

//     cout << (same ? "YES" : "NO") << endl;

//     while (head1)
//     {
//         Node next = (Node)head1[1];
//         free(head1);
//         head1 = next;
//     }

//     while (head2)
//     {
//         Node next = (Node)head2[1];
//         free(head2);
//         head2 = next;
//     }

//     return 0;
// }

// typedef void **Node;

// int main()
// {
//     int Q;
//     cin >> Q;
//     Node head = nullptr, tail = nullptr;

//     for (int i = 0; i < Q; i++)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X == 0)
//         {
//             Node n = (Node)malloc(sizeof(void *) * 2);
//             n[0] = (void *)(intptr_t)V;
//             n[1] = head;
//             head = n;
//             if (!tail)
//                 tail = n;
//         }
//         else if (X == 1)
//         {
//             Node n = (Node)malloc(sizeof(void *) * 2);
//             n[0] = (void *)(intptr_t)V;
//             n[1] = nullptr;
//             if (!head)
//                 head = tail = n;
//             else
//             {
//                 tail[1] = (void *)n;
//                 tail = n;
//             }
//         }
//         else if (X == 2)
//         {
//             if (V < 0)
//             {
//             }
//             else if (V == 0 && head)
//             {
//                 Node temp = head;
//                 head = (Node)head[1];
//                 free(temp);
//                 if (!head)
//                     tail = nullptr;
//             }
//             else
//             {
//                 Node cur = head;
//                 for (int i = 0; i < V - 1 && cur; i++)
//                     cur = (Node)cur[1];
//                 if (cur && cur[1])
//                 {
//                     Node temp = (Node)cur[1];
//                     cur[1] = temp[1];
//                     if (temp == tail)
//                         tail = cur;
//                     free(temp);
//                 }
//             }
//         }

//         Node t = head;

//         while (t)
//         {
//             cout << (int)(intptr_t)t[0] << " ";
//             t = (Node)t[1];
//         }
//         cout << "\n";
//     }

//     while (head)
//     {
//         Node next = (Node)head[1];
//         free(head);
//         head = next;
//     }

//     return 0;
// }

// typedef void **Node;

// int main()
// {
//     Node head = nullptr, tail = nullptr;
//     int v;

//     while (cin >> v && v != -1)
//     {
//         Node n = (Node)malloc(sizeof(void *) * 2);
//         n[0] = (void *)(intptr_t)v;
//         n[1] = nullptr;
//         if (!head)
//             head = tail = n;
//         else
//         {
//             tail[1] = (void *)n;
//             tail = n;
//         }
//     }

//     Node cur = head;

//     while (cur)
//     {
//         int val = (int)(intptr_t)cur[0];
//         Node prev = cur;
//         Node runner = (Node)cur[1];
//         while (runner)
//         {
//             if ((int)(intptr_t)runner[0] == val)
//             {
//                 Node toDelete = runner;
//                 prev[1] = runner[1];
//                 if (toDelete == tail)
//                     tail = prev;
//                 runner = (Node)runner[1];
//                 free(toDelete);
//             }
//             else
//             {
//                 prev = runner;
//                 runner = (Node)runner[1];
//             }
//         }
//         cur = (Node)cur[1];
//     }

//     cur = head;

//     while (cur)
//     {
//         cout << (int)(intptr_t)cur[0] << " ";
//         cur = (Node)cur[1];
//     }
//     cout << "\n";

//     while (head)
//     {
//         Node next = (Node)head[1];
//         free(head);
//         head = next;
//     }

//     return 0;
// }

// int main()
// {
//     std::list<int> lst;
//     int x;

//     while (std::cin >> x && x != -1)
//         lst.push_back(x);
//     lst.sort();
//     lst.unique();

//     for (int v : lst)
//         std::cout << v << " ";

//     return 0;
// }

// int main()
// {
//     std::list<int> dll;
//     int x;

//     while (std::cin >> x && x != -1)
//         dll.push_back(x);

//     std::vector<int> v(dll.begin(), dll.end());
//     int i = 0, j = v.size() - 1;

//     while (i < j)
//     {
//         if (v[i] != v[j])
//         {
//             std::cout << "NO";
//             return 0;
//         }
//         i++;
//         j--;
//     }

//     std::cout << "YES";

//     return 0;
// }

// int main()
// {
//     list<string> pages;
//     string s;

//     while (cin >> s && s != "end")
//         pages.push_back(s);

//     int q;
//     cin >> q;
//     auto cur = pages.begin();

//     while (q--)
//     {
//         string cmd;
//         cin >> cmd;

//         if (cmd == "visit")
//         {
//             string addr;
//             cin >> addr;
//             auto it = find(pages.begin(), pages.end(), addr);
//             if (it != pages.end())
//             {
//                 cur = it;
//                 cout << *cur << "\n";
//             }
//             else
//                 cout << "Not Available\n";
//         }
//         else if (cmd == "next")
//         {
//             auto nxt = cur;
//             nxt++;
//             if (nxt != pages.end())
//             {
//                 cur = nxt;
//                 cout << *cur << "\n";
//             }
//             else
//                 cout << "Not Available\n";
//         }
//         else if (cmd == "prev")
//         {
//             if (cur != pages.begin())
//             {
//                 cur--;
//                 cout << *cur << "\n";
//             }
//             else
//                 cout << "Not Available\n";
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int Q;
//     cin >> Q;
//     list<int> dll;

//     while (Q--)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X < 0 || X > (int)dll.size())
//         {
//             cout << "Invalid\n";
//             continue;
//         }

//         auto it = next(dll.begin(), X);
//         dll.insert(it, V);

//         cout << "L -> ";
//         for (int val : dll)
//             cout << val << " ";
//         cout << "\n";

//         cout << "R -> ";
//         for (auto rit = dll.rbegin(); rit != dll.rend(); ++rit)
//             cout << *rit << " ";
//         cout << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     int Q;
//     cin >> Q;
//     list<long long> dll;

//     while (Q--)
//     {
//         int X;
//         long long V;
//         cin >> X >> V;

//         if (X == 0)
//             dll.push_front(V);
//         else if (X == 1)
//             dll.push_back(V);
//         else if (X == 2 && V < (int)dll.size())
//         {
//             auto it = dll.begin();
//             advance(it, V);
//             dll.erase(it);
//         }
//         cout << "L -> ";

//         for (auto &val : dll)
//             cout << val << " ";
//         cout << "\nR -> ";

//         for (auto rit = dll.rbegin(); rit != dll.rend(); ++rit)
//             cout << *rit << " ";
//         cout << "\n";
//     }

//     return 0;
// }

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     stack<int> s;
//     queue<int> q;

//     for (int i = 0, x; i < N; i++)
//     {
//         cin >> x;
//         s.push(x);
//     }

//     for (int i = 0, x; i < M; i++)
//     {
//         cin >> x;
//         q.push(x);
//     }

//     if (N != M)
//     {
//         cout << "NO";
//         return 0;
//     }

//     bool match = true;

//     for (int i = 0; i < N; i++)
//     {
//         if (s.top() != q.front())
//         {
//             match = false;
//             break;
//         }
//         s.pop();
//         q.pop();
//     }

//     cout << (match ? "YES" : "NO");
//     return 0;
// }

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     if (N != M)
//     {
//         cout << "NO";
//         return 0;
//     }

//     int a[1000000], b[1000000];

//     for (int i = 0; i < N; i++)
//         cin >> a[i];
//     for (int i = 0; i < M; i++)
//         cin >> b[i];

//     for (int i = 0; i < N; i++)
//     {
//         if (a[N - 1 - i] != b[i])
//         {
//             cout << "NO";
//             return 0;
//         }
//     }

//     cout << "YES";
//     return 0;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string S;
//         cin >> S;
//         stack<char> st;
//         for (char c : S)
//         {
//             if (!st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0')))
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(c);
//             }
//         }
//         cout << (st.empty() ? "YES" : "NO") << "\n";
//     }
//     return 0;
// }

// int main()
// {
//     int Q;
//     cin >> Q;
//     queue<string> q;

//     while (Q--)
//     {
//         int cmd;
//         cin >> cmd;
//         if (cmd == 0)
//         {
//             string name;
//             cin >> name;
//             q.push(name);
//         }
//         else
//         {
//             if (q.empty())
//                 cout << "Invalid\n";
//             else
//             {
//                 cout << q.front() << "\n";
//                 q.pop();
//             }
//         }
//     }

//     return 0;
// }

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;
        stack<char> st;

        for (char c : S)
        {
            if (c == '1' && !st.empty() && st.top() == '0')
                st.pop();
            else
                st.push(c);
        }
        cout << (st.empty() ? "YES\n" : "NO\n");
    }

    return 0;
}