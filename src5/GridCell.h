#import <UIKit/UIKit.h>
#import "Proc.h"
#import "Sock.h"
#import "Column.h"

@interface GridTableCell : UITableViewCell
@property (assign) NSUInteger id;
@property (assign) NSUInteger firstColWidth;
@property (assign) BOOL extendArgsLabel;
@property (retain) NSMutableArray *labels;
@property (retain) NSMutableArray *dividers;
+ (NSString *)reuseIdWithIcon:(bool)withicon;
+ (instancetype)cellWithIcon:(bool)withicon;
- (void)configureWithId:(int)id columns:(NSArray *)columns size:(CGSize)size;
- (void)updateWithProc:(PSProc *)proc columns:(NSArray *)columns;
- (void)updateWithSock:(PSSock *)sock columns:(NSArray *)columns;
@end


@interface GridHeaderView : UIView
@property (retain) NSMutableArray *labels;
@property (retain) NSMutableArray *dividers;
+ (instancetype)headerWithColumns:(NSArray *)columns size:(CGSize)size;
+ (instancetype)footerWithColumns:(NSArray *)columns size:(CGSize)size;
- (void)sortColumnOld:(PSColumn *)oldCol New:(PSColumn *)newCol desc:(BOOL)desc;
- (void)updateSummaryWithColumns:(NSArray *)columns procs:(PSProcArray *)procs;
@end