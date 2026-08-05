# Switch statements
- alternative to multiple if-else statements
- switch statements allows executing one block of code from many based on the value of an expression.

- syntax:

        switch(expression){
            case value1;
                //code
                break;
            case value2;
                //code
                break
            default:
                //default code
        }

## Key Points
- works with int and char types only.
- Each case must have a unique value.
- break is optional but prevents **_fall-through_**.
- Nesting of switch is allowed.
- Defaault is optional; runs if no match.
- Default can be placed anywhere.