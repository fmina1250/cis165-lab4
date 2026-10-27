# AI Reflection - Lab 4

## Tools Used
* I used Gemini to assist with general assistance on how to approach the assignment and answering some questions.

## One Decision
* **Decision:** When structuring the `ocean_levels.cpp` program, Gemini suggested naming the annual rise rate constant `RISE_RATE_MM_PER_YEAR` and storing the year values in explicit variables (`years1`, `years2`, `years3`) before calculating the products into distinct result variables. 
* **Outcome:** I accepted this suggestion because it  follows the course styling rule requiring all intermediate calculations to be pre-stored in variables before passing them to `cout`, rather than putting inline arithmetic inside output statements.

## Verification
* I verified the accuracy of both programs by performing manual arithmetic checks before and after running the code:
  * For `average.cpp`, I manually added 28 + 32 + 37 + 24 + 33 to get 154, and divided 154 / 5 to confirm the expected average of 30.8. Running the compiled program matched these exact output values.
  * For `ocean_levels.cpp`, I manually multiplied 1.5 by 5 (7.5 mm), 7 (10.5 mm), and 10 (15.0 mm), and verified that the program output matched these exact values. I also tested with a changed rate (2.4) to confirm dynamic calculation correctness before restoring the assigned 1.5 rate.

## Learning
* **What I can do now:** I can write clean, readable C++ code using `double` data types to preserve decimal precision and properly structure main function logic.
* **What I still need to practice:** What I still need to practice: I need to practice writing C++ code completely from memory without referencing standard syntax templates or guides. 