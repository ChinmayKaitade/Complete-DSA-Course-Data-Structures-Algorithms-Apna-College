#include <iostream>

using namespace std;


// ============================================================
// GLOBAL SCOPE
// ============================================================
//
// A variable declared outside all functions and blocks
// belongs to the GLOBAL SCOPE.
//
// It can be accessed by multiple functions in the program.
//

int globalValue = 100;


// This function can access the global variable
void showGlobal()
{
    cout << "Inside showGlobal(): " << globalValue << endl;
}


// ============================================================
// FUNCTION SCOPE / LOCAL SCOPE
// ============================================================
//
// A variable declared inside a function is LOCAL to that
// function.
//
// It can only be accessed inside that function.
//

void functionExample()
{
    int localValue = 50;

    cout << "Inside function: " << localValue << endl;

    // localValue can be used here because it belongs
    // to this function.
}


// ============================================================
// MAIN FUNCTION
// ============================================================

int main()
{
    cout << "========== C++ SCOPE EXAMPLES ==========" << endl;


    // ========================================================
    // 1. LOCAL SCOPE
    // ========================================================
    //
    // Variables declared inside main() belong to the
    // local scope of main().
    //

    cout << "\n1. LOCAL SCOPE" << endl;

    int age = 25;

    cout << "Age = " << age << endl;

    // 'age' can be accessed anywhere inside main()
    // after its declaration.


    // ========================================================
    // 2. BLOCK SCOPE
    // ========================================================
    //
    // Anything inside { } creates a BLOCK.
    //
    // Variables declared inside the block are available
    // only inside that block.
    //

    cout << "\n2. BLOCK SCOPE" << endl;

    {
        int blockValue = 200;

        cout << "Inside block: "
             << blockValue << endl;
    }

    // blockValue cannot be accessed here.
    //
    // This would give an ERROR:
    //
    // cout << blockValue;
    //
    // Because blockValue exists only inside { }.


    // ========================================================
    // 3. IF-ELSE SCOPE
    // ========================================================
    //
    // The body of if and else is also a block.
    //

    cout << "\n3. IF-ELSE SCOPE" << endl;

    int marks = 75;

    if (marks >= 40)
    {
        // This variable belongs to the if block.
        int result = 1;

        cout << "Student passed." << endl;
        cout << "Result = " << result << endl;
    }
    else
    {
        // This is a different block.
        //
        // A variable declared inside the if block
        // cannot be accessed here.

        cout << "Student failed." << endl;
    }

    // 'result' cannot be accessed here.
    //
    // cout << result;   // ERROR


    // ========================================================
    // 4. LOOP SCOPE
    // ========================================================
    //
    // The body of a loop creates a block scope.
    //

    cout << "\n4. LOOP SCOPE" << endl;

    for (int i = 1; i <= 3; i++)
    {
        // 'i' belongs to the loop.
        //
        // 'i' can be accessed inside the loop.

        cout << "i = " << i << endl;
    }

    // 'i' cannot be accessed here.
    //
    // cout << i;   // ERROR
    //
    // Because i was declared inside the for loop.


    // ========================================================
    // 5. FUNCTION LOCAL SCOPE
    // ========================================================
    //
    // Variables declared inside a function are local
    // to that function.
    //

    cout << "\n5. FUNCTION LOCAL SCOPE" << endl;

    functionExample();

    // localValue cannot be accessed from main().
    //
    // cout << localValue;   // ERROR


    // ========================================================
    // 6. GLOBAL SCOPE
    // ========================================================
    //
    // globalValue was declared outside all functions.
    //
    // Therefore, it can be accessed from main() and
    // other functions.
    //

    cout << "\n6. GLOBAL SCOPE" << endl;

    cout << "Global value from main(): "
         << globalValue << endl;

    showGlobal();


    // ========================================================
    // 7. SAME VARIABLE NAME IN DIFFERENT SCOPES
    // ========================================================
    //
    // A local variable can have the same name as a
    // global variable.
    //
    // The local variable takes priority inside its scope.
    //

    cout << "\n7. SAME VARIABLE NAME" << endl;

    int value = 10;

    cout << "Main value = " << value << endl;

    {
        int value = 20;

        // The local 'value' inside this block is used.

        cout << "Block value = " << value << endl;
    }

    // Outside the block, the main() value is used again.

    cout << "Main value again = "
         << value << endl;


    // ========================================================
    // 8. ACCESSING GLOBAL VARIABLE USING ::
    // ========================================================
    //
    // The scope resolution operator :: can be used
    // to explicitly access a global variable when
    // a local variable has the same name.
    //

    cout << "\n8. SCOPE RESOLUTION OPERATOR" << endl;

    int number = 50;

    cout << "Local number = " << number << endl;

    // ::number refers to the global variable named number
    // if such a global variable exists.
    //
    // In this program we don't have a global variable
    // called 'number', so we use globalValue instead.

    cout << "Global value = " << globalValue << endl;


    // ========================================================
    // 9. NESTED BLOCK SCOPE
    // ========================================================
    //
    // Blocks can exist inside other blocks.
    //

    cout << "\n9. NESTED BLOCK SCOPE" << endl;

    int outer = 10;

    {
        int middle = 20;

        {
            int inner = 30;

            // All three variables are accessible here.

            cout << "Outer  = " << outer << endl;
            cout << "Middle = " << middle << endl;
            cout << "Inner  = " << inner << endl;
        }

        // outer and middle are accessible here.
        // inner is NOT accessible here.

        cout << "Outer  = " << outer << endl;
        cout << "Middle = " << middle << endl;
    }

    // Only outer is accessible here.
    //
    // middle and inner are no longer accessible.

    cout << "Outer = " << outer << endl;


    // ========================================================
    // 10. SCOPE SUMMARY
    // ========================================================
    //
    // GLOBAL SCOPE
    //     ↓
    // Variables declared outside functions.
    //
    //
    // LOCAL / FUNCTION SCOPE
    //     ↓
    // Variables declared inside a function.
    //
    //
    // BLOCK SCOPE
    //     ↓
    // Variables declared inside { }.
    //
    //
    // IF-ELSE SCOPE
    //     ↓
    // Variables declared inside if/else blocks.
    //
    //
    // LOOP SCOPE
    //     ↓
    // Variables declared inside loops.
    //
    //
    // IMPORTANT RULE:
    //
    // A variable is accessible from its declaration
    // until the end of its scope.
    //
    // ========================================================


    cout << "\n========== END ==========" << endl;

    return 0;
}