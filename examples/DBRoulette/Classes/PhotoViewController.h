//
//  PhotoViewController.h
//  DBRoulette
//


@class DBRestClient;

@interface PhotoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIImageView* imageView;
    UIButton* nextButton;
    UIActivityIndicatorView* activityIndicator;
    
    NSArray* photoPaths;
    NSString* photosHash;
    NSString* currentPhotoPath;
    BOOL working;
    DBRestClient* restClient;
    NSMutableArray *dropboxURLs;
}

@property (nonatomic, retain) IBOutlet UIImageView* imageView;
@property (nonatomic, retain) IBOutlet UIButton* nextButton;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView* activityIndicator;
@property (retain, nonatomic) IBOutlet UITableView *tableViewForDropBoxItems;
@property (nonatomic, retain) NSTimer *silenceTimer;

- (IBAction)uploadToDropBox:(id)sender;
- (IBAction)deleteFromDropBox:(id)sender;
- (IBAction)getSharableLink:(id)sender;
-(void)reloadTable;

@end
