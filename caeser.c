#include<stdio.h>
#include<string.h>
void caesar_encrypt(char *n, int k)
{
    int a=strlen(n);
    printf("Encrypted text: ");
    for(int i=0; i<a; i++)
    {
        char x=n[i];
        if(x>='a' && x<='z')
        {
            x+=k;
            if(x>=123)
                x=x-26;
        }
        else if(x>='A' && x<='Z')
        {
            x+=k;
            if(x>=91)
                x=x-26;
        }
        printf("%c", x);
    }
}
void caesar_decrypt(char* n)
{
    int a=strlen(n);
    printf("Decrypted Text using all Keys\n");
    for(int i=1; i<=26; i++)
    {
        printf("Key=%d: ", i);
        for(int j=0; j<a; j++)
        {
            char x=n[j];
            if(x>='a' && x<='z')
            {
                x-=i;
                if(x<=96)
                    x+=26;
            }
            else if(x>='A' && x<='Z')
            {
                x-=i;
                if(x<=64)
                    x+=26;
            }
            printf("%c", x);
        }
        printf("\n");
    }
}
int main()
{
    printf("Note: \n* Enter the text to be encrypted.\n* The shift key must be between 1 and 26.\n-------------------------------------------------------\n");
    char n[256]; int k, ch;
    printf("1. Encrypt Text \n2. Decrypt Text\n");
    scanf("%d", &ch);
    getchar();
    switch(ch)
    {
        case 1: 
            printf("Text : ");
            scanf("%[^\n]", n);
            getchar();
            printf("Shift: ");
            scanf("%d", &k);
            caesar_encrypt(n, k);
            break;
        case 2:
            printf("Text : ");
            scanf("%[^\n]", n);
            caesar_decrypt(n);
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}
