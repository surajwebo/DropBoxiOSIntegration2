//
//  DBRouletteAppDelegate.h
//  DBRoulette
//
//  
//


@class RootViewController;

@interface DBRouletteAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UINavigationController *navigationController;
    RootViewController *rootViewController;
	NSString *relinkUserId;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet RootViewController *rootViewController;

@end

