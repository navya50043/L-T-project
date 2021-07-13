# TEST PLAN
##  High level test plan
| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if the User selects an option from the available choices, login with correct pin number  and if pin number is wrong show as invalid pin entered.|User's choice | SUCCESS| SUCCESS|Requirement based |
|  H_02       |Check if the User login is successful then selects an option from the available choices check balance,deposit,withdraw|User's choice  | SUCCESS| SUCCESS|Requirement based |
|  H_03       |If the user want to see deposit cash enter the amount to be deposited and after depositing check the balance. |User's choice | PASS | SUCCESS|Requirement based |
|  H_04       |If the user want to do another action then click on yes by entering the integer assigned to word yes.|User's choice | SUCCESS| SUCCESS|Requirement|
|  H_05       |If the user want to perform another action from the choice by entering the integers and can perform withdraw  or deposit action |User's choice | SUCCESS| SUCCESS|Requirement based |
|  H_06       |If the user want to with draw the amount the first check balace and then with draw amount enter the withdraw amount and then collect cash |User's choice | SUCCESS| SUCCESS|Requirement based  |
|  H_07       |The user have to check the balance after withdrawing the amonunt that how much amount felt in our account |User's choice | SUCCESS| SUCCESS|Requirement based  |
|  H_08       |Check if the system asks the user for repeating the process and exits the system when choosed |User's choice | SUCCESS| SUCCESS|Scenario based |

## Low level test plan
| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |When entering the pin number check ansd enter the correct pin number |User's choice| Invoke the process| SUCCESS|Scenario based |
|  L_02       |Enter the actions which you would like to perform  |User's choice| SUCCESS| SUCCESS|Scenario based    |
|  L_03       |Check the balance of the account| User's choice as an integer| PASS| SUCCESS|Scenario based    |
|  L_04       |If the Unknown pin number is entered |User's choice as an alphabets| Invalid Message| Invalid message|Scenario based    |
|  L_05       |Allocate the actions such as deposit withdraw check balance | User's choice as an integer | SUCCESS| SUCCESS|Scenario based    |
|  L_06       |Check that all actions are close before leaving from the atm center|User's choice | SUCCESS| SUCCESS|Scenario based    |
