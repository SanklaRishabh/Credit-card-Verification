An open-source project to verify the legitimacy of an issued credit card using the card number.

# Overview

Generally, credit cards contain a 16-digit unique number that identifies the cardholder. The numbers are assigned according to the following rules:

1. Starting from the leftmost digit, every alternate digit is multiplied by 2.

1. If any resulting value is greater than 9, this number is subtracted from it.

1. After the operations, all the digits (alternate as well as the remaining digits) are added.

1. The card number is valid if the final sum is divisible by 10. All the steps above verify the validity of the card.

<br>

![](https://codecademy-content.s3.amazonaws.com/PRO/independent-practice-projects/credit-card-checker/diagrams/cc+validator+diagram+1.svg)

# Contribution

You could help develop the project by:

+ Contributing to the source code

+ Suggesting optimizations and reporting issues

+ Creating a GUI for this project

+ Adding support for cards by different issuers
