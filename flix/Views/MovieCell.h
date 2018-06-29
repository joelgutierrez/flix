//
//  MovieCell.h
//  flix
//
//  Created by Joel Gutierrez on 6/28/18.
//  Copyright © 2018 Joel Gutierrez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;

@end
