#include<stdio.h>
int main(){
int choice;

    printf("== Menu ==\n");
    printf("1. Year 1 Semester 1\n");
    printf("2. year 1 semester 2\n");
    printf("3. Year 2 Semester 1\n");
    printf("4. year 2 semester 2\n");
    printf("5. Year 3 Semester 1\n");
    printf("6. year 3 semester 2\n");
    printf("7. Year 4 Semester 1\n");
    printf("8. year 4 semester 2\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 8) {
        printf("Invalid input\n");
        return 1;
    }

    switch (choice) {
    case 1:
        printf("Year 1 Semester 1\n");
        printf("1. COMP 103\n");
        printf("2. COMP 107\n");
        printf("3. COMS 101\n");
        printf("4. MATH 112\n");
        printf("5. PHIL 104\n");
        printf("ZOOL 143\n");
        break;

    case 2:
        printf("Year 1 Semester 2\n");
        printf("ACMP 102: Computer Systems\n");
        printf("ACMP 111: Computer Hardware\n");
        printf("ACMP 119: System analysis and Design\n");
        printf("COMP 102: DiscretebMathematics For Computng\n");  
        printf("COMP 113: Operating Systems\n"); 
        printf("MATH 141:Introductory Statistics\n");
        break;

    case 3:
        printf("Year 2 Semester 1\n");
        printf("ACMP 206: Mathematical Methods for Computer Scientists\n");
        printf("ACMP 222: Object Oriented Programming I(Java)\n");
        printf("ACMP 223: Introduction to Stractural Programming\n");
        printf("ACMP 226: Management Information Systems\n");
        printf("ACMP 250: Python Programming\n");
        printf("MATH 240: Pribabilty and Statistics I\n");
        printf("PHYS 122: Electromagnetism I\n");
        break;

    case 4:
        printf("Year 2 Semester 2\n");
        printf("ACMP 200: Interactive Design & Software Project Management\n");
        printf("ACMP 224: Object Oriented Programming II (Java)\n");
        printf("ACMP 225: Web Programming I\n");
        printf("ACMP 228: Data Structures & Algorithms\n");
        printf("ACMP 271: Fountation of Data Communication and Networks\n");
        printf("ACMP 280: Computer Securityn\n");
        printf("ACMP 285 Introduction to Database\n");
    break;
    case 5:
        printf("Year 3 Semester 1\n");
        printf("ACMP 312: Event Driven Programming\n");
        printf("ACMP 342: Web Programming II\n");
        printf("ACMP 350: Project Design & Development\n");
        printf("ACMP 353: Advanced Database Systems\n");  
        printf("ACMP 355: Network Design $ Management\n"); 
        printf("COMP 303: Automata Theory\n");
        
        break;
    case 6:
        printf("year 3 semester 2\n");
        printf("ACMP 300: Application programin interface design & Implementation\n");
        printf("ACMP 308: Artificial inteligence\n");
        printf("ACMP 324: Object Oriented Programming(C++)\n");
        printf("ACMP 344: Computer Graphics\n");  
        printf("ACMP 382: Simulation and Model Building\n"); 
        printf("COMP 302: Design and Analysis of Algorithms\n");
        
        break;
    case 7:
        printf("year 4 semester 1\n");
        printf("ACMP 410: Professional issues in IT\n");
        printf("ACMP 446: Human-Computer interfase\n");
        printf("ACMP 455: Number Theory and Criptography\n");
        printf("ACMP 491: Emerging Technologies in Applied Computer Science\n");  
        printf("ACMP 496: Marchine Learning Algorithms\n"); 
        printf("COMP 402: Computer Science Project\n");
        printf("COMP 499: Industrial Attachment\n");
        
        break;
    case 8:
        printf("year 4 semester 2\n");
        printf("ACMP 424: Innovation & Technology Transfer\n");
        printf("ACMP 428: Mobile Programming\n");
        printf("ACMP 445: Computer Annimations\n");
        printf("ACMP 452: Data Mining & Knowledge Discovery\n");  
        printf("ACMP 466: Reinforced & Deep Learning\n"); 
        printf("COMP 490: Optimization Methods of Computing\n");
        
        break;  

default:
    printf("Invalid choice\n");
    break;
}
}