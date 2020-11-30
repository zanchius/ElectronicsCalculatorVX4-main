int main()
{
    int sp;
    int ch;

    clrscr();

    printf("Electronics Calculator\n");
    printf("Written by FVSZ\n");
    printf("Hit space to continue...\n");

    sp = getchar();

    if(sp == 32)
    {
        printf("Choose the section:\n");
        printf("1)Basic Elec, 2)Electromag\n");

        scanf("%d",&ch);
        if(ch == 1)
        {
            basicelec();
        }
        else if (ch == 2)
        {
            electromag();
        }
        else
        {
            printf("Invalid selection, Play it again Sam...\n");
            exit();
        }
    }
}

int basicelec()
{
    float ohm, volt, amp, watt;
    int choice;

    printf("Chose option:\n");
    printf("1) Ohm  2) Volt\n");
    printf("3) Amp  4) Watt\n");
    scanf("%d",&choice);

    if(choice == 1)
{
printf("Enter voltage: ");
        scanf("%f",&volt);
        printf("Enter current: ");
        scanf("%f",&amp);
        printf("You entered: %.2fV and %.2fA\n", volt, amp);
        ohm = volt / amp;
        printf("Resistance is: %.2f", ohm);
}
    else if(choice == 2)
{
        printf("Enter resistance: ");
        scanf("%f",&ohm);
        printf("Enter current: ");
        scanf("%f",&amp);
        printf("You entered: %.2f%c and %.2fA\n", ohm, 133, amp);
        volt = amp * ohm;
        printf("Voltage is: %.2f", volt);
}
    else if(choice == 3)
{
        printf("Enter resistance: ");
        scanf("%f",&ohm);
        printf("Enter voltage: ");
        scanf("%f",&volt);
        printf("You entered: %.2f%c and %.2fV\n", ohm, 133, volt);
        amp = volt / ohm;
        printf("Current is: %.2f", amp);
}
    else if(choice == 4)
{
printf("Enter current: ");
        scanf("%f",&amp);
        printf("Enter voltage: ");
        scanf("%f",&volt);
        printf("You entered: %.2fA and %.2fV\n", amp, volt);
        watt = volt * amp;
        printf("Watts is: %.2f", watt);
    }
}

int electromag()
{

}
