#include <iostream>

using namespace std;

int main()
{
    // ============================================================
    // OPERATOR PRECEDENCE IN C++
    // ============================================================
    //
    // Higher precedence operators are evaluated first.
    //
    // Precedence order (highest → lowest):
    //
    // 1.  !, +, -          → Unary operators
    // 2.  *, /, %          → Multiplication, Division, Modulus
    // 3.  +, -             → Addition, Subtraction
    // 4.  <, <=, >, >=     → Relational operators
    // 5.  ==, !=           → Equality operators
    // 6.  &&               → Logical AND
    // 7.  ||               → Logical OR
    // 8.  =                → Assignment
    //
    // Associativity:
    //
    // Most operators → Left to Right
    // Unary operators and assignment → Right to Left
    //
    // ============================================================

    // ============================================================
    // 1. UNARY OPERATORS
    // ============================================================
    //
    // !  → Logical NOT
    // +  → Unary Plus
    // -  → Unary Minus
    //
    // Unary operators have high precedence.
    //

    int a = 5;

    cout << "1. Unary Operators" << endl;

    cout << "-a = " << -a << endl;
    cout << "+a = " << +a << endl;

    bool value = true;

    cout << "!true = " << !value << endl;

    cout << endl;

    // ============================================================
    // 2. MULTIPLICATION, DIVISION AND MODULUS
    // ============================================================
    //
    // *, / and % have higher precedence than + and -.
    //

    int result1 = 10 + 5 * 2;

    // Multiplication happens first:
    //
    // 10 + (5 * 2)
    // 10 + 10
    // 20

    cout << "2. Multiplication / Division / Modulus" << endl;
    cout << "10 + 5 * 2 = " << result1 << endl;

    // *, / and % have the same precedence.
    // Therefore, they are evaluated from LEFT to RIGHT.

    int result2 = 20 / 5 * 2;

    // Left to right:
    //
    // (20 / 5) * 2
    // 4 * 2
    // 8

    cout << "20 / 5 * 2 = " << result2 << endl;

    // Modulus example

    int result3 = 17 % 5;

    // 17 divided by 5 gives remainder 2

    cout << "17 % 5 = " << result3 << endl;

    cout << endl;

    // ============================================================
    // 3. ADDITION AND SUBTRACTION
    // ============================================================
    //
    // + and - have lower precedence than *, / and %.
    //
    // + and - have the same precedence.
    // Therefore, they are evaluated LEFT to RIGHT.
    //

    int result4 = 10 + 5 - 2;

    // Left to right:
    //
    // (10 + 5) - 2
    // 15 - 2
    // 13

    cout << "3. Addition / Subtraction" << endl;
    cout << "10 + 5 - 2 = " << result4 << endl;

    cout << endl;

    // ============================================================
    // 4. RELATIONAL OPERATORS
    // ============================================================
    //
    // <, <=, >, >=
    //
    // These operators compare values.
    // The result is either true (1) or false (0).
    //

    bool result5 = 10 + 5 > 12;

    // First addition:
    //
    // 10 + 5 = 15
    //
    // Then comparison:
    //
    // 15 > 12
    // true

    cout << "4. Relational Operators" << endl;
    cout << "10 + 5 > 12 = " << result5 << endl;

    bool result6 = 10 < 5;

    // 10 < 5 → false

    cout << "10 < 5 = " << result6 << endl;

    cout << endl;

    // ============================================================
    // 5. EQUALITY OPERATORS
    // ============================================================
    //
    // == → Equal to
    // != → Not equal to
    //

    bool result7 = 10 + 5 == 15;

    // First:
    //
    // 10 + 5 = 15
    //
    // Then:
    //
    // 15 == 15
    // true

    cout << "5. Equality Operators" << endl;
    cout << "10 + 5 == 15 = " << result7 << endl;

    bool result8 = 20 != 10;

    // 20 != 10 → true

    cout << "20 != 10 = " << result8 << endl;

    cout << endl;

    // ============================================================
    // 6. LOGICAL AND (&&)
    // ============================================================
    //
    // && returns true only when BOTH conditions are true.
    //
    // Relational operators have higher precedence than &&.
    //

    bool result9 = 10 > 5 && 20 > 15;

    // First:
    //
    // 10 > 5   → true
    // 20 > 15  → true
    //
    // Then:
    //
    // true && true
    // true

    cout << "6. Logical AND" << endl;
    cout << "10 > 5 && 20 > 15 = " << result9 << endl;

    cout << endl;

    // ============================================================
    // 7. LOGICAL OR (||)
    // ============================================================
    //
    // || returns true when at least ONE condition is true.
    //
    // && has higher precedence than ||.
    //

    bool result10 = 10 < 5 || 20 > 15;

    // First:
    //
    // 10 < 5   → false
    // 20 > 15  → true
    //
    // Then:
    //
    // false || true
    // true

    cout << "7. Logical OR" << endl;
    cout << "10 < 5 || 20 > 15 = " << result10 << endl;

    // ============================================================
    // IMPORTANT: && HAS HIGHER PRECEDENCE THAN ||
    // ============================================================

    bool result11 = false || true && true;

    // First evaluate &&:
    //
    // true && true
    // true
    //
    // Then:
    //
    // false || true
    // true

    cout << "false || true && true = " << result11 << endl;

    cout << endl;

    // ============================================================
    // 8. ASSIGNMENT OPERATOR (=)
    // ============================================================
    //
    // Assignment has the lowest precedence among the operators
    // covered in this chapter.
    //
    // Assignment is evaluated RIGHT TO LEFT.
    //

    int result12;

    result12 = 10 + 5 * 2;

    // First:
    //
    // 5 * 2 = 10
    //
    // Then:
    //
    // 10 + 10 = 20
    //
    // Finally:
    //
    // result12 = 20

    cout << "8. Assignment Operator" << endl;
    cout << "result12 = 10 + 5 * 2" << endl;
    cout << "result12 = " << result12 << endl;

    cout << endl;

    // ============================================================
    // RIGHT-TO-LEFT ASSOCIATIVITY OF ASSIGNMENT
    // ============================================================

    int x, y, z;

    x = y = z = 10;

    // Assignment happens from RIGHT to LEFT:
    //
    // z = 10
    // y = z
    // x = y
    //
    // Therefore:
    //
    // x = 10
    // y = 10
    // z = 10

    cout << "Right-to-Left Assignment" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    cout << endl;

    // ============================================================
    // 9. COMPLETE OPERATOR PRECEDENCE EXAMPLE
    // ============================================================
    //
    // Let's combine multiple operators.
    //

    bool result13 = 10 + 5 * 2 > 15 && 20 != 10 || false;

    // Let's solve it step by step.
    //
    // STEP 1: Multiplication
    //
    // 5 * 2 = 10
    //
    // Expression:
    //
    // 10 + 10 > 15 && 20 != 10 || false
    //
    //
    // STEP 2: Addition
    //
    // 10 + 10 = 20
    //
    // Expression:
    //
    // 20 > 15 && 20 != 10 || false
    //
    //
    // STEP 3: Relational
    //
    // 20 > 15
    // true
    //
    // Expression:
    //
    // true && 20 != 10 || false
    //
    //
    // STEP 4: Equality
    //
    // 20 != 10
    // true
    //
    // Expression:
    //
    // true && true || false
    //
    //
    // STEP 5: Logical AND
    //
    // true && true
    // true
    //
    // Expression:
    //
    // true || false
    //
    //
    // STEP 6: Logical OR
    //
    // true || false
    // true

    cout << "9. Complete Precedence Example" << endl;

    cout << "10 + 5 * 2 > 15 && 20 != 10 || false"
         << endl;

    cout << "Result = " << result13 << endl;

    cout << endl;

    // ============================================================
    // 10. USING PARENTHESES
    // ============================================================
    //
    // Parentheses can be used to explicitly control the order
    // of evaluation.
    //

    int normal = 10 + 5 * 2;

    int withParentheses = (10 + 5) * 2;

    // Without parentheses:
    //
    // 10 + (5 * 2)
    // = 20
    //
    // With parentheses:
    //
    // (10 + 5) * 2
    // = 30

    cout << "10. Parentheses Example" << endl;

    cout << "10 + 5 * 2 = " << normal << endl;

    cout << "(10 + 5) * 2 = "
         << withParentheses << endl;

    cout << endl;

    // ============================================================
    // FINAL QUICK REVISION
    // ============================================================
    //
    // Highest → Lowest:
    //
    // 1. !, +, -
    // 2. *, /, %
    // 3. +, -
    // 4. <, <=, >, >=
    // 5. ==, !=
    // 6. &&
    // 7. ||
    // 8. =
    //
    // Memory Trick:
    //
    // "Uncle Mohan Always Reads Every Answer On Assignment"
    //
    // U → Unary
    // M → Multiplication
    // A → Addition
    // R → Relational
    // E → Equality
    // A → AND
    // O → OR
    // A → Assignment
    //
    // Associativity:
    //
    // Most operators → Left to Right
    // Unary operators → Right to Left
    // Assignment      → Right to Left
    //
    // ============================================================

    return 0;
}