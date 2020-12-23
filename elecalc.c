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
        printf("1)Basic Elec  2)Electromag\n");
        printf("3)LCR         4)RF\n");

        scanf("%d",&ch);
        if(ch == 1)
        {
            basicelec();
        }
        else if (ch == 2)
        {
            electromag();
        }
        else if (ch == 3)
        {
            lcr();
        }
        else if (ch == 4)
        {
            rf();
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
    float ohm, volt, amp, watt, res[50];
    int choice, input, i;

    printf("Chose option:\n");
    printf("1)Ohm 2)Volt 3)Amp 4)Watt\n");
    printf("5)Rpa 6)Cser 7)Lpar 8)RMS\n");
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
    else if(choice == 5)
    {
        printf("Enter resistors values (spc to stop): ");
        i=0;
        do
        {
            scanf("%d",&input);
            res[i] = input;
            i++;
        } while (input != 32);
        int n = sizeof(res) / sizeof(res[0]);
	printf("Parallel resistor value is: %l\n", findlcm(res, n));
    }
    else if(choice == 6)
    {

    }
    else if(choice == 7)
    {

    }
    else if(choice == 8)
    {

    }


}

int electromag()
{
    float ohm, volt, amp, watt;
    int choice;

    printf("Chose option:\n");
    printf("\n");
    printf("\n");
    scanf("%d",&choice);

}

int lcr()
{

}

int rf()
{

}

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

long findlcm(int arr[], int n)
{
	long ans = arr[0];

	for (int i = 1; i < n; i++)
	{
		ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
	}
	return ans;
}
