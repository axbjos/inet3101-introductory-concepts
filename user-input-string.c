int main() {

    // create a string
    char firstName[30];

    // ask the user to input some text
    printf("Enter your first name: \n");

    // get and save the text
    scanf("%s", firstName);

    // print it
    printf("Hello %s", firstName);

    // why don't we need the & symbol above? because an array name IS a pointer

}