//
//  RootViewController.h
//  DBRoulette
//


@class DBRestClient;


@interface RootViewController : UIViewController {
    UIButton* linkButton;
    UIViewController* photoViewController;
	DBRestClient* restClient;
}

- (IBAction)didPressLink;

@property (nonatomic, retain) IBOutlet UIButton* linkButton;
@property (nonatomic, retain) UIViewController* photoViewController;

@end
