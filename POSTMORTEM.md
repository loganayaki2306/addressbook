ADDRESS-BOOK PROJECT POSTMORTEM  
March 22, 2016

### Successes  
- Learned a lot  
- Completed project  
- Good separation of concerns & encapsulation  
- First experience with version control & git  
- Familiarization with Qt & SQLite APIs  
- `Observer` pattern to update views  

### Failures
- Role of controller in `MVC` pattern.  My `AddressBookController` class does 
almost nothing. It's just a pass-through to the Model. As the project went 
on I got a better feel for what the controller should be responsible for. 
A lot of logic should be taken out of the `QtAddressBookGUI` class and pushed
into the controller. The `QtAddressBookGUI` class should provide hooks/methods
for the controller to actually control the view's state, rather than doing
most of that within the view itself.  

### Planning & Design. 
I should have spent more time really fleshing out the program design before hand.

### Additional Points
See [TODO](/TODO.md) for additional points to consider.
