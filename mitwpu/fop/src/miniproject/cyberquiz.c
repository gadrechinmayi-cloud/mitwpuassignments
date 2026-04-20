#include <stdio.h>

int main() {

    int level, a, score, m, l;
    char x, b;

    do {

        score = 0;
        m = 10;
        l = 3;   // Initialize lives

        printf("====================================\n");
        printf("        CYBERSECURITY QUIZ\n");
        printf("====================================\n");
        printf("Lives: %d\n\n", l);

        printf("Select Difficulty Level:\n");
        printf("1. Easy\n");
        printf("2. Medium\n");
        printf("3. Hard\n");
        printf("Enter your choice: ");
        scanf("%d", &level);

        switch(level) {

        case 1:
            printf("\nEASY LEVEL\n");

            // Question 1
            printf("\n1. What does WWW stand for?\n");
            printf("1) World Wide Web\n2) Wide World Web\n3) Web World Wide\n4) World Web Wide\n");
            scanf("%d", &a);
            if(a == 1){ score += 2; printf("Correct.\n"); }
            else {
                l--;
                printf("Wrong. Correct answer: World Wide Web.\n");
                printf("Lives left: %d\n", l);
            }
            if(l == 0) break;

            // Question 2
            printf("\n2. Which of these is a strong password?\n");
            printf("1) 123456\n2) password\n3) Ab@9kL!2\n4) qwerty\n");
            scanf("%d", &a);
            if(a == 3){ score += 2; printf("Correct.\n"); }
            else {
                l--;
                printf("Wrong. Correct answer: Ab@9kL!2.\n");
                printf("Lives left: %d\n", l);
            }
            if(l == 0) break;

            // Question 3
            printf("\n3. What should you do before clicking a suspicious link?\n");
            printf("1) Click immediately\n2) Ignore it\n3) Check the sender\n4) Share it\n");
            scanf("%d", &a);
            if(a == 3){ score += 2; printf("Correct.\n"); }
            else {
                l--;
                printf("Wrong. Correct answer: Check the sender.\n");
                printf("Lives left: %d\n", l);
            }
            if(l == 0) break;

            // Question 4
            printf("\n4. Antivirus software is used to:\n");
            printf("1) Delete games\n2) Protect against malware\n3) Speed up internet\n4) Create viruses\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else {
                l--;
                printf("Wrong. Correct answer: Protect against malware.\n");
                printf("Lives left: %d\n", l);
            }
            if(l == 0) break;

            // Question 5
            printf("\n5. Which device connects you to the internet?\n");
            printf("1) Router\n2) Printer\n3) Speaker\n4) Monitor\n");
            scanf("%d", &a);
            if(a == 1){ score += 2; printf("Correct.\n"); }
            else {
                l--;
                printf("Wrong. Correct answer: Router.\n");
                printf("Lives left: %d\n", l);
            }
            if(l == 0) break;

            // BONUS ROUND (NO LIVES)
            printf("\nDo you want to attempt the Bonus Round? (y/n): ");
            scanf(" %c", &b);

            if(b == 'y' || b == 'Y') {

                m += 15;
                printf("\n--- BONUS ROUND (5 points each) ---\n");

                printf("\nBonus 1. What does CPU stand for?\n");
                printf("1) Central Processing Unit\n2) Computer Personal Unit\n3) Control Program Utility\n4) Central Power User\n");
                scanf("%d", &a);
                if(a == 1){ score += 5; printf("Correct.\n"); }
                else printf("Wrong. Correct answer: Central Processing Unit.\n");

                printf("\nBonus 2. Which improves account security?\n");
                printf("1) Sharing passwords\n2) Two-factor authentication\n3) Using 123456\n4) Turning off firewall\n");
                scanf("%d", &a);
                if(a == 2){ score += 5; printf("Correct.\n"); }
                else printf("Wrong. Correct answer: Two-factor authentication.\n");

                printf("\nBonus 3. What does USB stand for?\n");
                printf("1) Universal Serial Bus\n2) United System Backup\n3) User Secure Board\n4) Universal Safe Browser\n");
                scanf("%d", &a);
                if(a == 1){ score += 5; printf("Correct.\n"); }
                else printf("Wrong. Correct answer: Universal Serial Bus.\n");
            }

            break;

        case 2:
            printf("\nMEDIUM LEVEL\n");

            printf("\n1. What is phishing?\n");
            printf("1) Fishing online\n2) Fake emails to steal information\n3) Video streaming\n4) Password encryption\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Fake emails to steal information.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n2. What does VPN stand for?\n");
            printf("1) Virtual Private Network\n2) Very Personal Network\n3) Virtual Public Node\n4) Verified Private Net\n");
            scanf("%d", &a);
            if(a == 1){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Virtual Private Network.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n3. What is malware?\n");
            printf("1) Good software\n2) Security patch\n3) Harmful software\n4) Web browser\n");
            scanf("%d", &a);
            if(a == 3){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Harmful software.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n4. Two-factor authentication provides:\n");
            printf("1) Double password\n2) Extra security layer\n3) Faster login\n4) Public access\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Extra security layer.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n5. A firewall is used to:\n");
            printf("1) Heat computer\n2) Block unauthorized access\n3) Store files\n4) Increase volume\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Block unauthorized access.\nLives left: %d\n", l); }
            if(l == 0) break;

            break;

        case 3:
            printf("\nHARD LEVEL\n");

            printf("\n1. What is a DDoS attack?\n");
            printf("1) Data Download Service\n2) Distributed Denial of Service\n3) Double Data Operation\n4) Digital Defense System\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Distributed Denial of Service.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n2. What does encryption do?\n");
            printf("1) Deletes data\n2) Converts data into secure form\n3) Speeds internet\n4) Compresses files\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Converts data into secure form.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n3. What is ransomware?\n");
            printf("1) Free software\n2) Malware that demands payment\n3) Antivirus\n4) Backup tool\n");
            scanf("%d", &a);
            if(a == 2){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Malware that demands payment.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n4. What is social engineering?\n");
            printf("1) Coding technique\n2) Hardware upgrade\n3) Manipulating people to obtain information\n4) Network repair\n");
            scanf("%d", &a);
            if(a == 3){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: Manipulating people to obtain information.\nLives left: %d\n", l); }
            if(l == 0) break;

            printf("\n5. What does HTTPS stand for?\n");
            printf("1) HyperText Transfer Protocol Secure\n2) High Transfer Protocol System\n3) Hyper Terminal Service\n4) Host Transfer Secure\n");
            scanf("%d", &a);
            if(a == 1){ score += 2; printf("Correct.\n"); }
            else { l--; printf("Wrong. Correct answer: HyperText Transfer Protocol Secure.\nLives left: %d\n", l); }
            if(l == 0) break;

            break;

        default:
            printf("Invalid level selection.\n");
            continue;
        }

        if(l == 0) {
            printf("\n========== GAME OVER ==========\n");
        } else {
            printf("\nFinal Score: %d / %d\n", score, m);
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &x);

    } while (x == 'y' || x == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}