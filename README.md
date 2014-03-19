UKCurrentScreenSize
===================
I wrote a Category on UIApplication. 
Added class methods for getting the currentScreenSize or the size in a given orientation of the UIViewController and reports back the correct responses in all orientations.


To use the code:

1. Drag and Drop the UIApplication+ApplicationScreenSize.h and UIApplication+ApplicationScreenSize.m files in your project
2. Import the #import "UIApplication+ApplicationScreenSize.h" in your header file
3. Simply call CGSize sizeOfscreen = [UIApplication currentScreenSize];


Note:

You can all [UIApplication currentScreenSize] method in either of delegation methods

- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation

I subtracted the MIN of the status bar's height and width in the currentScreenSize method.
