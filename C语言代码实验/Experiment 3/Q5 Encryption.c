int	main()
{
	char  a[80],ch;
	int i=0,end,amount;
	printf("Enter message to be encrypted: ");
	for (; 1; i++) {
		a[i] = getchar();
		if (a[i] == '\n')
			break;
	}
	end = i;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &amount);
	printf("Encrypted message: ");
	for (i=0; i <=end; i++) 
	{
		if (a[i] != '\n') {
			if (a[i] <= 'z'&&a[i] >= 'a')
				a[i] = ((a[i] - 'a') + amount) % 26 + 'a';
			else if (a[i] <= 'Z'&&a[i] >= 'A')
				a[i] = ((a[i] - 'A') + amount) % 26 + 'A';
		}
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}
