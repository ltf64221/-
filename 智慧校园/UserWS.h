#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class UserWS_publishWorks;
@class UserWS_publishWorksResponse;
@class UserWS_getMarkQueryInfo;
@class UserWS_getMarkQueryInfoResponse;
@class UserWS_sendEboTalkAboutInfo;
@class UserWS_sendEboTalkAboutInfoResponse;
@class UserWS_getReviewPageInfo;
@class UserWS_getReviewPageInfoResponse;
@class UserWS_addWriteReview;
@class UserWS_addWriteReviewResponse;
@class UserWS_reviewTalkAboutInfo;
@class UserWS_reviewTalkAboutInfoResponse;
@class UserWS_getUserMsg;
@class UserWS_getUserMsgResponse;
@class UserWS_delEBlog;
@class UserWS_delEBlogResponse;
@class UserWS_findNewsByOrgId;
@class UserWS_findNewsByOrgIdResponse;
@class UserWS_getPLetterPage;
@class UserWS_getPLetterPageResponse;
@class UserWS_getClassActivePage;
@class UserWS_getClassActivePageResponse;
@class UserWS_getResultMsgPage;
@class UserWS_getResultMsgPageResponse;
@class UserWS_getWorkCompleteForParents;
@class UserWS_getWorkCompleteForParentsResponse;
@class UserWS_getPLetterMsg;
@class UserWS_getPLetterMsgResponse;
@class UserWS_judgeActivityJoin;
@class UserWS_judgeActivityJoinResponse;
@class UserWS_getStudentById;
@class UserWS_getStudentByIdResponse;
@class UserWS_addEBlog;
@class UserWS_addEBlogResponse;
@class UserWS_getEBolgSquarePage;
@class UserWS_getEBolgSquarePageResponse;
@class UserWS_updateEBlog;
@class UserWS_updateEBlogResponse;
@class UserWS_updateClassNotice;
@class UserWS_updateClassNoticeResponse;
@class UserWS_getOnLineHomeWorkDetails;
@class UserWS_getOnLineHomeWorkDetailsResponse;
@class UserWS_addActivityReview;
@class UserWS_addActivityReviewResponse;
@class UserWS_getOnlineClassPage;
@class UserWS_getOnlineClassPageResponse;
@class UserWS_getRelaClassCirlInfo;
@class UserWS_getRelaClassCirlInfoResponse;
@class UserWS_getMessageSeesionPage;
@class UserWS_getMessageSeesionPageResponse;
@class UserWS_getDynamicsPage;
@class UserWS_getDynamicsPageResponse;
@class UserWS_findPrivilegeListByUserId;
@class UserWS_findPrivilegeListByUserIdResponse;
@class UserWS_getPreparationFilePage;
@class UserWS_getPreparationFilePageResponse;
@class UserWS_getAttentionPage;
@class UserWS_getAttentionPageResponse;
@class UserWS_loginAuth;
@class UserWS_loginAuthResponse;
@class UserWS_getCircleUsersPage;
@class UserWS_getCircleUsersPageResponse;
@class UserWS_getHomeWorkDetails;
@class UserWS_getHomeWorkDetailsResponse;
@class UserWS_markEBlogMan;
@class UserWS_markEBlogManResponse;
@class UserWS_getCurriculum;
@class UserWS_getCurriculumResponse;
@class UserWS_getCommentPage;
@class UserWS_getCommentPageResponse;
@class UserWS_getHomeWorkComplete;
@class UserWS_getHomeWorkCompleteResponse;
@class UserWS_getWritingList;
@class UserWS_getWritingListResponse;
@class UserWS_getWorkCompleteForTeacher;
@class UserWS_getWorkCompleteForTeacherResponse;
@class UserWS_prePackageReview;
@class UserWS_prePackageReviewResponse;
@class UserWS_getStepListByStepId;
@class UserWS_getStepListByStepIdResponse;
@class UserWS_addTodayHomeWork;
@class UserWS_addTodayHomeWorkResponse;
@class UserWS_getResultsFBPage;
@class UserWS_getResultsFBPageResponse;
@class UserWS_getTodayHomeWorkInfo;
@class UserWS_getTodayHomeWorkInfoResponse;
@class UserWS_getClassActiveMsg;
@class UserWS_getClassActiveMsgResponse;
@class UserWS_getCurriculumByClassId;
@class UserWS_getCurriculumByClassIdResponse;
@class UserWS_getEBolgPage;
@class UserWS_getEBolgPageResponse;
@class UserWS_findNewsActivityTopByOrgId;
@class UserWS_findNewsActivityTopByOrgIdResponse;
@class UserWS_getClassStudentsList;
@class UserWS_getClassStudentsListResponse;
@class UserWS_getWriteReviewPage;
@class UserWS_getWriteReviewPageResponse;
@class UserWS_getResourcesFilePage;
@class UserWS_getResourcesFilePageResponse;
@class UserWS_getModuleIsUpdate;
@class UserWS_getModuleIsUpdateResponse;
@class UserWS_getAnnouncementMsg;
@class UserWS_getAnnouncementMsgResponse;
@class UserWS_getEBMsg;
@class UserWS_getEBMsgResponse;
@class UserWS_getComment;
@class UserWS_getCommentResponse;
@class UserWS_findRealClassInfoByUserId;
@class UserWS_findRealClassInfoByUserIdResponse;
@class UserWS_saveImage;
@class UserWS_saveImageResponse;
@class UserWS_getPackageReview;
@class UserWS_getPackageReviewResponse;
@class UserWS_getActivityPage;
@class UserWS_getActivityPageResponse;
@class UserWS_cancelAttention;
@class UserWS_cancelAttentionResponse;
@class UserWS_delClassNotice;
@class UserWS_delClassNoticeResponse;
@class UserWS_getMessageSendInfoPage;
@class UserWS_getMessageSendInfoPageResponse;
@class UserWS_getWorkList;
@class UserWS_getWorkListResponse;
@class UserWS_getWordMarking;
@class UserWS_getWordMarkingResponse;
@class UserWS_getStepMsgByStepId;
@class UserWS_getStepMsgByStepIdResponse;
@class UserWS_getBlackHomeWorkDetails;
@class UserWS_getBlackHomeWorkDetailsResponse;
@class UserWS_getActivityReviewPage;
@class UserWS_getActivityReviewPageResponse;
@class UserWS_getEBolgEManPage;
@class UserWS_getEBolgEManPageResponse;
@class UserWS_getPersonalHomePage;
@class UserWS_getPersonalHomePageResponse;
@class UserWS_addClassNotice;
@class UserWS_addClassNoticeResponse;
@class UserWS_getContactsList;
@class UserWS_getContactsListResponse;
@class UserWS_joniActivity;
@class UserWS_joniActivityResponse;
@class UserWS_getCircleList;
@class UserWS_getCircleListResponse;
@class UserWS_getAnnouncementPage;
@class UserWS_getAnnouncementPageResponse;
@class UserWS_attentionTo;
@class UserWS_attentionToResponse;
@class UserWS_updateHomeWorkState;
@class UserWS_updateHomeWorkStateResponse;
@class UserWS_deleteMessageSessionInfo;
@class UserWS_deleteMessageSessionInfoResponse;
@class UserWS_getCirclePage;
@class UserWS_getCirclePageResponse;
@class UserWS_getSubjectList;
@class UserWS_getSubjectListResponse;
@class UserWS_getNewsPage;
@class UserWS_getNewsPageResponse;
@class UserWS_getOnLineWorkPage;
@class UserWS_getOnLineWorkPageResponse;
@class UserWS_getkhWorkMsg;
@class UserWS_getkhWorkMsgResponse;
@class UserWS_LaudOrDeleteLaud;
@class UserWS_LaudOrDeleteLaudResponse;
@class UserWS_addStudentComment;
@class UserWS_addStudentCommentResponse;
@class UserWS_getEboTalkDetails;
@class UserWS_getEboTalkDetailsResponse;
@class UserWS_getNetWorkClassRoom;
@class UserWS_getNetWorkClassRoomResponse;
@class UserWS_sentMessage;
@class UserWS_sentMessageResponse;

@class ns3_TimeebUser;
@class ns3_ArrayOfSaleCardOrder;
@class ns5_Book;
@class ns8_ArrayOfPermission;
@class ns3_UserInfo;
@class ns5_ArrayOfShelf;
@interface UserWS_publishWorks : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_publishWorks *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_publishWorksResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_publishWorksResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMarkQueryInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMarkQueryInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMarkQueryInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMarkQueryInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_sendEboTalkAboutInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_sendEboTalkAboutInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_sendEboTalkAboutInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_sendEboTalkAboutInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getReviewPageInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getReviewPageInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getReviewPageInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getReviewPageInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addWriteReview : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addWriteReview *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addWriteReviewResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addWriteReviewResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_reviewTalkAboutInfo : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_reviewTalkAboutInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_reviewTalkAboutInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_reviewTalkAboutInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getUserMsg : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getUserMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getUserMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getUserMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_delEBlog : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_delEBlog *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_delEBlogResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_delEBlogResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findNewsByOrgId : NSObject {
	
/* elements */
	NSNumber * in0;
	NSNumber * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findNewsByOrgId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSNumber * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findNewsByOrgIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findNewsByOrgIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPLetterPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSNumber * in4;
	NSNumber * in5;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPLetterPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSNumber * in4;
@property (retain) NSNumber * in5;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPLetterPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPLetterPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassActivePage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassActivePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassActivePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassActivePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResultMsgPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResultMsgPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResultMsgPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResultMsgPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkCompleteForParents : NSObject {
	
/* elements */
	NSNumber * in0;
	NSNumber * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkCompleteForParents *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSNumber * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkCompleteForParentsResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkCompleteForParentsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPLetterMsg : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPLetterMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPLetterMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPLetterMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_judgeActivityJoin : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_judgeActivityJoin *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_judgeActivityJoinResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_judgeActivityJoinResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStudentById : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStudentById *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStudentByIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStudentByIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns1_TalkReplyReply : NSObject {
	
/* elements */
	NSString * friendId;
	NSString * headPicture;
	NSNumber * id_;
	NSString * imgPath;
	NSNumber * isOwn;
	NSString * nickName;
	NSString * repId;
	NSString * repToId;
	NSNumber * replyId;
	NSString * replyRComment;
	NSDate * replyRTime;
	NSNumber * replyRToUId;
	NSNumber * replyRUId;
	NSString * showRRTime;
	NSString * showReplyRComment;
	NSString * trueName;
	NSString * userName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns1_TalkReplyReply *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * friendId;
@property (retain) NSString * headPicture;
@property (retain) NSNumber * id_;
@property (retain) NSString * imgPath;
@property (retain) NSNumber * isOwn;
@property (retain) NSString * nickName;
@property (retain) NSString * repId;
@property (retain) NSString * repToId;
@property (retain) NSNumber * replyId;
@property (retain) NSString * replyRComment;
@property (retain) NSDate * replyRTime;
@property (retain) NSNumber * replyRToUId;
@property (retain) NSNumber * replyRUId;
@property (retain) NSString * showRRTime;
@property (retain) NSString * showReplyRComment;
@property (retain) NSString * trueName;
@property (retain) NSString * userName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns1_ArrayOfTalkReplyReply : NSObject {
	
/* elements */
	NSMutableArray *TalkReplyReply;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns1_ArrayOfTalkReplyReply *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addTalkReplyReply:(ns1_TalkReplyReply *)toAdd;
@property (readonly) NSMutableArray * TalkReplyReply;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns1_TalkReply : NSObject {
	
/* elements */
	NSString * friendId;
	NSString * headPicture;
	NSNumber * id_;
	NSString * imgPath;
	NSNumber * isOwn;
	NSString * nickName;
	NSString * replyComment;
	ns1_ArrayOfTalkReplyReply * replyReply;
	NSDate * replyTime;
	NSNumber * replyToUId;
	NSNumber * replyUId;
	NSString * showReplyComment;
	NSString * showTime;
	NSNumber * talkId;
	NSString * trueName;
	NSString * userName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns1_TalkReply *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * friendId;
@property (retain) NSString * headPicture;
@property (retain) NSNumber * id_;
@property (retain) NSString * imgPath;
@property (retain) NSNumber * isOwn;
@property (retain) NSString * nickName;
@property (retain) NSString * replyComment;
@property (retain) ns1_ArrayOfTalkReplyReply * replyReply;
@property (retain) NSDate * replyTime;
@property (retain) NSNumber * replyToUId;
@property (retain) NSNumber * replyUId;
@property (retain) NSString * showReplyComment;
@property (retain) NSString * showTime;
@property (retain) NSNumber * talkId;
@property (retain) NSString * trueName;
@property (retain) NSString * userName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns1_ArrayOfTalkReply : NSObject {
	
/* elements */
	NSMutableArray *TalkReply;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns1_ArrayOfTalkReply *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addTalkReply:(ns1_TalkReply *)toAdd;
@property (readonly) NSMutableArray * TalkReply;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns1_TalkAbout : NSObject {
	
/* elements */
	NSString * circleId;
	NSString * circleName;
	NSNumber * circleType;
	NSNumber * fileNameCount;
	NSString * filePath;
	NSString * friendId;
	NSString * headPicture;
	NSNumber * id_;
	NSNumber * isCollect;
	NSNumber * isLaud;
	NSNumber * isOpen;
	NSNumber * isOwn;
	NSNumber * laudCount;
	NSString * nickName;
	NSDate * publishTime;
	NSNumber * repeatCount;
	NSNumber * repeatId;
	ns1_ArrayOfTalkReply * reply;
	NSNumber * replyCount;
	NSString * showPath;
	NSString * showTalkComment;
	NSString * tId;
	ns1_TalkAbout * talkAbout;
	NSString * talkComment;
	NSNumber * totalCount;
	NSString * trueName;
	NSNumber * type;
	NSNumber * userId;
	NSString * userName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns1_TalkAbout *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * circleId;
@property (retain) NSString * circleName;
@property (retain) NSNumber * circleType;
@property (retain) NSNumber * fileNameCount;
@property (retain) NSString * filePath;
@property (retain) NSString * friendId;
@property (retain) NSString * headPicture;
@property (retain) NSNumber * id_;
@property (retain) NSNumber * isCollect;
@property (retain) NSNumber * isLaud;
@property (retain) NSNumber * isOpen;
@property (retain) NSNumber * isOwn;
@property (retain) NSNumber * laudCount;
@property (retain) NSString * nickName;
@property (retain) NSDate * publishTime;
@property (retain) NSNumber * repeatCount;
@property (retain) NSNumber * repeatId;
@property (retain) ns1_ArrayOfTalkReply * reply;
@property (retain) NSNumber * replyCount;
@property (retain) NSString * showPath;
@property (retain) NSString * showTalkComment;
@property (retain) NSString * tId;
@property (retain) ns1_TalkAbout * talkAbout;
@property (retain) NSString * talkComment;
@property (retain) NSNumber * totalCount;
@property (retain) NSString * trueName;
@property (retain) NSNumber * type;
@property (retain) NSNumber * userId;
@property (retain) NSString * userName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addEBlog : NSObject {
	
/* elements */
	ns1_TalkAbout * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addEBlog *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns1_TalkAbout * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addEBlogResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addEBlogResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgSquarePage : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgSquarePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgSquarePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgSquarePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateEBlog : NSObject {
	
/* elements */
	ns1_TalkAbout * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateEBlog *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns1_TalkAbout * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateEBlogResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateEBlogResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns2_RealClassMember : NSObject {
	
/* elements */
	NSDate * applyDate;
	NSString * classAdviserNickName;
	NSString * classAdviserUserId;
	NSString * className;
	NSString * classOrgName;
	NSString * classType;
	NSNumber * creatorId;
	NSString * email;
	NSString * headpicture;
	NSNumber * id_;
	NSString * introduction;
	NSNumber * levelStatus;
	NSString * nickName;
	NSString * orgId;
	NSString * phoneNumber;
	NSString * realClassName;
	NSString * realClassStatus;
	NSNumber * realclassId;
	NSDate * replayDate;
	NSNumber * sex;
	NSNumber * status;
	NSString * truename;
	NSNumber * userId;
	NSNumber * userIdentity;
	NSString * username;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns2_RealClassMember *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * applyDate;
@property (retain) NSString * classAdviserNickName;
@property (retain) NSString * classAdviserUserId;
@property (retain) NSString * className;
@property (retain) NSString * classOrgName;
@property (retain) NSString * classType;
@property (retain) NSNumber * creatorId;
@property (retain) NSString * email;
@property (retain) NSString * headpicture;
@property (retain) NSNumber * id_;
@property (retain) NSString * introduction;
@property (retain) NSNumber * levelStatus;
@property (retain) NSString * nickName;
@property (retain) NSString * orgId;
@property (retain) NSString * phoneNumber;
@property (retain) NSString * realClassName;
@property (retain) NSString * realClassStatus;
@property (retain) NSNumber * realclassId;
@property (retain) NSDate * replayDate;
@property (retain) NSNumber * sex;
@property (retain) NSNumber * status;
@property (retain) NSString * truename;
@property (retain) NSNumber * userId;
@property (retain) NSNumber * userIdentity;
@property (retain) NSString * username;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns2_RealClass : NSObject {
	
/* elements */
	NSNumber * bookNum;
	NSNumber * bookNumLimit;
	NSString * classCode;
	NSString * className;
	USBoolean * classType;
	NSNumber * creatorId;
	NSNumber * deleted;
	NSString * entranceYear;
	NSDate * establishDate;
	NSString * grade;
	NSNumber * id_;
	USBoolean * isGraduated;
	NSNumber * levelStatusint;
	NSString * loginPic;
	NSNumber * memberNum;
	NSNumber * memberNumLimit;
	NSNumber * orgId;
	NSString * organization_name;
	NSString * realClassDes;
	NSString * realClassMaxim;
	ns2_RealClassMember * realClassMember;
	NSString * realClassName;
	NSString * schoolName;
	NSString * schoolStage;
	NSNumber * spaceSize;
	NSNumber * status;
	NSString * truename;
	NSString * username;
	NSNumber * visitNum;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns2_RealClass *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * bookNum;
@property (retain) NSNumber * bookNumLimit;
@property (retain) NSString * classCode;
@property (retain) NSString * className;
@property (retain) USBoolean * classType;
@property (retain) NSNumber * creatorId;
@property (retain) NSNumber * deleted;
@property (retain) NSString * entranceYear;
@property (retain) NSDate * establishDate;
@property (retain) NSString * grade;
@property (retain) NSNumber * id_;
@property (retain) USBoolean * isGraduated;
@property (retain) NSNumber * levelStatusint;
@property (retain) NSString * loginPic;
@property (retain) NSNumber * memberNum;
@property (retain) NSNumber * memberNumLimit;
@property (retain) NSNumber * orgId;
@property (retain) NSString * organization_name;
@property (retain) NSString * realClassDes;
@property (retain) NSString * realClassMaxim;
@property (retain) ns2_RealClassMember * realClassMember;
@property (retain) NSString * realClassName;
@property (retain) NSString * schoolName;
@property (retain) NSString * schoolStage;
@property (retain) NSNumber * spaceSize;
@property (retain) NSNumber * status;
@property (retain) NSString * truename;
@property (retain) NSString * username;
@property (retain) NSNumber * visitNum;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Activity : NSObject {
	
/* elements */
	NSDate * act_enddate;
	NSString * act_explanation;
	NSNumber * act_id;
	NSNumber * act_ifrestric;
	NSDate * act_launchdate;
	NSString * act_logoPic;
	NSString * act_name;
	NSString * act_notice;
	NSString * act_slogan;
	NSDate * act_startdate;
	NSNumber * act_status;
	NSString * act_tag;
	NSNumber * act_type;
	NSDate * act_updatedate;
	NSNumber * act_vistnum;
	NSNumber * belongWebsite;
	NSNumber * commentnum;
	NSNumber * deleted;
	NSString * endDateStr;
	NSNumber * organizationId;
	NSNumber * realClassId;
	NSString * selectListType;
	NSString * startDateStr;
	NSNumber * teacherId;
	NSNumber * user_id;
	NSNumber * writingNeedCheck;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Activity *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * act_enddate;
@property (retain) NSString * act_explanation;
@property (retain) NSNumber * act_id;
@property (retain) NSNumber * act_ifrestric;
@property (retain) NSDate * act_launchdate;
@property (retain) NSString * act_logoPic;
@property (retain) NSString * act_name;
@property (retain) NSString * act_notice;
@property (retain) NSString * act_slogan;
@property (retain) NSDate * act_startdate;
@property (retain) NSNumber * act_status;
@property (retain) NSString * act_tag;
@property (retain) NSNumber * act_type;
@property (retain) NSDate * act_updatedate;
@property (retain) NSNumber * act_vistnum;
@property (retain) NSNumber * belongWebsite;
@property (retain) NSNumber * commentnum;
@property (retain) NSNumber * deleted;
@property (retain) NSString * endDateStr;
@property (retain) NSNumber * organizationId;
@property (retain) NSNumber * realClassId;
@property (retain) NSString * selectListType;
@property (retain) NSString * startDateStr;
@property (retain) NSNumber * teacherId;
@property (retain) NSNumber * user_id;
@property (retain) NSNumber * writingNeedCheck;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfActivity : NSObject {
	
/* elements */
	NSMutableArray *Activity;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfActivity *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addActivity:(ns4_Activity *)toAdd;
@property (readonly) NSMutableArray * Activity;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Actmessage : NSObject {
	
/* elements */
	ns4_Activity * activity;
	NSString * actmessage_content;
	NSNumber * actmessage_id;
	NSDate * actmessage_launchdate;
	ns3_TimeebUser * timeebuser;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Actmessage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns4_Activity * activity;
@property (retain) NSString * actmessage_content;
@property (retain) NSNumber * actmessage_id;
@property (retain) NSDate * actmessage_launchdate;
@property (retain) ns3_TimeebUser * timeebuser;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfActmessage : NSObject {
	
/* elements */
	NSMutableArray *Actmessage;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfActmessage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addActmessage:(ns4_Actmessage *)toAdd;
@property (readonly) NSMutableArray * Actmessage;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Actregist : NSObject {
	
/* elements */
	NSDate * act_enddate;
	NSString * act_explanation;
	NSNumber * act_id;
	NSNumber * act_ifrestric;
	NSString * act_logoPic;
	NSString * act_name;
	NSString * act_notice;
	NSString * act_slogan;
	NSDate * act_startdate;
	NSNumber * act_status;
	NSString * act_tag;
	NSNumber * act_type;
	NSNumber * act_vistnum;
	ns4_Activity * activity;
	NSDate * actregist_date;
	NSNumber * actregist_id;
	NSNumber * belongWebsite;
	NSNumber * commentnum;
	NSNumber * deleted;
	NSNumber * id_;
	NSNumber * ifhasaccept;
	NSString * nickName;
	NSNumber * organizationId;
	NSString * organizationName;
	NSNumber * realClassId;
	NSString * realClassName;
	ns3_TimeebUser * timeebuser;
	NSString * truename;
	NSNumber * user_id;
	NSString * username;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Actregist *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * act_enddate;
@property (retain) NSString * act_explanation;
@property (retain) NSNumber * act_id;
@property (retain) NSNumber * act_ifrestric;
@property (retain) NSString * act_logoPic;
@property (retain) NSString * act_name;
@property (retain) NSString * act_notice;
@property (retain) NSString * act_slogan;
@property (retain) NSDate * act_startdate;
@property (retain) NSNumber * act_status;
@property (retain) NSString * act_tag;
@property (retain) NSNumber * act_type;
@property (retain) NSNumber * act_vistnum;
@property (retain) ns4_Activity * activity;
@property (retain) NSDate * actregist_date;
@property (retain) NSNumber * actregist_id;
@property (retain) NSNumber * belongWebsite;
@property (retain) NSNumber * commentnum;
@property (retain) NSNumber * deleted;
@property (retain) NSNumber * id_;
@property (retain) NSNumber * ifhasaccept;
@property (retain) NSString * nickName;
@property (retain) NSNumber * organizationId;
@property (retain) NSString * organizationName;
@property (retain) NSNumber * realClassId;
@property (retain) NSString * realClassName;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSString * truename;
@property (retain) NSNumber * user_id;
@property (retain) NSString * username;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfActregist : NSObject {
	
/* elements */
	NSMutableArray *Actregist;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfActregist *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addActregist:(ns4_Actregist *)toAdd;
@property (readonly) NSMutableArray * Actregist;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_ArrayOfTimeebUser : NSObject {
	
/* elements */
	NSMutableArray *TimeebUser;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_ArrayOfTimeebUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addTimeebUser:(ns3_TimeebUser *)toAdd;
@property (readonly) NSMutableArray * TimeebUser;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_Comment : NSObject {
	
/* elements */
	NSNumber * bookId;
	NSDate * createDate;
	NSString * headpicture;
	NSNumber * id_;
	NSString * info;
	ns3_TimeebUser * timeebuser;
	NSString * truename;
	NSNumber * userid;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_Comment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * bookId;
@property (retain) NSDate * createDate;
@property (retain) NSString * headpicture;
@property (retain) NSNumber * id_;
@property (retain) NSString * info;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSString * truename;
@property (retain) NSNumber * userid;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_ArrayOfComment : NSObject {
	
/* elements */
	NSMutableArray *Comment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_ArrayOfComment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addComment:(ns5_Comment *)toAdd;
@property (readonly) NSMutableArray * Comment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_ChargeRecord : NSObject {
	
/* elements */
	NSNumber * chargeMoney;
	NSDate * chargeTime;
	ns3_TimeebUser * chargeUser;
	NSNumber * ecoinNum;
	NSNumber * id_;
	NSNumber * payMode;
	NSString * remark;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_ChargeRecord *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * chargeMoney;
@property (retain) NSDate * chargeTime;
@property (retain) ns3_TimeebUser * chargeUser;
@property (retain) NSNumber * ecoinNum;
@property (retain) NSNumber * id_;
@property (retain) NSNumber * payMode;
@property (retain) NSString * remark;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_ArrayOfChargeRecord : NSObject {
	
/* elements */
	NSMutableArray *ChargeRecord;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_ArrayOfChargeRecord *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addChargeRecord:(ns6_ChargeRecord *)toAdd;
@property (readonly) NSMutableArray * ChargeRecord;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_IntegrationRecord : NSObject {
	
/* elements */
	NSDate * chargeTime;
	NSNumber * ecoinNum;
	NSNumber * id_;
	NSNumber * integrationCount;
	ns3_TimeebUser * integrationUser;
	NSString * remark;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_IntegrationRecord *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * chargeTime;
@property (retain) NSNumber * ecoinNum;
@property (retain) NSNumber * id_;
@property (retain) NSNumber * integrationCount;
@property (retain) ns3_TimeebUser * integrationUser;
@property (retain) NSString * remark;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_ArrayOfIntegrationRecord : NSObject {
	
/* elements */
	NSMutableArray *IntegrationRecord;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_ArrayOfIntegrationRecord *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addIntegrationRecord:(ns6_IntegrationRecord *)toAdd;
@property (readonly) NSMutableArray * IntegrationRecord;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_SaleCard : NSObject {
	
/* elements */
	NSDate * addDate;
	NSString * cover;
	NSNumber * id_;
	NSString * name;
	NSNumber * price;
	NSNumber * saleVolume;
	ns3_ArrayOfSaleCardOrder * salecardorders;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_SaleCard *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * addDate;
@property (retain) NSString * cover;
@property (retain) NSNumber * id_;
@property (retain) NSString * name;
@property (retain) NSNumber * price;
@property (retain) NSNumber * saleVolume;
@property (retain) ns3_ArrayOfSaleCardOrder * salecardorders;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_SaleCardOrder : NSObject {
	
/* elements */
	NSDate * buyDate;
	NSNumber * count;
	NSNumber * id_;
	NSString * orderEndDate;
	NSString * orderNum;
	NSString * orderStartDate;
	NSNumber * payMode;
	NSString * phone;
	NSString * postCode;
	NSString * receiveAddress;
	NSString * receiveName;
	NSString * remark;
	ns6_SaleCard * salecard;
	NSNumber * status;
	ns3_TimeebUser * timeebuser;
	NSNumber * totalMoney;
	NSString * userName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_SaleCardOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * buyDate;
@property (retain) NSNumber * count;
@property (retain) NSNumber * id_;
@property (retain) NSString * orderEndDate;
@property (retain) NSString * orderNum;
@property (retain) NSString * orderStartDate;
@property (retain) NSNumber * payMode;
@property (retain) NSString * phone;
@property (retain) NSString * postCode;
@property (retain) NSString * receiveAddress;
@property (retain) NSString * receiveName;
@property (retain) NSString * remark;
@property (retain) ns6_SaleCard * salecard;
@property (retain) NSNumber * status;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSNumber * totalMoney;
@property (retain) NSString * userName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_ArrayOfSaleCardOrder : NSObject {
	
/* elements */
	NSMutableArray *SaleCardOrder;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_ArrayOfSaleCardOrder *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addSaleCardOrder:(ns3_SaleCardOrder *)toAdd;
@property (readonly) NSMutableArray * SaleCardOrder;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Actbook : NSObject {
	
/* elements */
	NSNumber * act_id;
	NSNumber * actbook_id;
	ns4_Activity * activity;
	ns5_Book * book;
	NSNumber * id_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Actbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * act_id;
@property (retain) NSNumber * actbook_id;
@property (retain) ns4_Activity * activity;
@property (retain) ns5_Book * book;
@property (retain) NSNumber * id_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfActbook : NSObject {
	
/* elements */
	NSMutableArray *Actbook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfActbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addActbook:(ns4_Actbook *)toAdd;
@property (readonly) NSMutableArray * Actbook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns2_ArrayOfRealClass : NSObject {
	
/* elements */
	NSMutableArray *RealClass;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns2_ArrayOfRealClass *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRealClass:(ns2_RealClass *)toAdd;
@property (readonly) NSMutableArray * RealClass;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns8_PermissionCategory : NSObject {
	
/* elements */
	NSString * categoryCode;
	NSString * categoryName;
	NSString * note;
	NSNumber * permissionCategoryId;
	ns8_ArrayOfPermission * permissions;
	NSNumber * priority;
	USBoolean * visible;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns8_PermissionCategory *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * categoryCode;
@property (retain) NSString * categoryName;
@property (retain) NSString * note;
@property (retain) NSNumber * permissionCategoryId;
@property (retain) ns8_ArrayOfPermission * permissions;
@property (retain) NSNumber * priority;
@property (retain) USBoolean * visible;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns8_Permission : NSObject {
	
/* elements */
	NSString * note;
	ns8_PermissionCategory * permissionCategory;
	NSString * permissionCode;
	NSNumber * permissionId;
	NSString * permissionName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns8_Permission *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * note;
@property (retain) ns8_PermissionCategory * permissionCategory;
@property (retain) NSString * permissionCode;
@property (retain) NSNumber * permissionId;
@property (retain) NSString * permissionName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns8_ArrayOfPermission : NSObject {
	
/* elements */
	NSMutableArray *Permission;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns8_ArrayOfPermission *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addPermission:(ns8_Permission *)toAdd;
@property (readonly) NSMutableArray * Permission;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns8_Role : NSObject {
	
/* elements */
	NSString * note;
	ns8_ArrayOfPermission * permissions;
	NSString * roleCode;
	NSNumber * roleId;
	NSString * roleName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns8_Role *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * note;
@property (retain) ns8_ArrayOfPermission * permissions;
@property (retain) NSString * roleCode;
@property (retain) NSNumber * roleId;
@property (retain) NSString * roleName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns8_ArrayOfRole : NSObject {
	
/* elements */
	NSMutableArray *Role;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns8_ArrayOfRole *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRole:(ns8_Role *)toAdd;
@property (readonly) NSMutableArray * Role;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_TPhoneMessageSend : NSObject {
	
/* elements */
	NSDate * FAssessorTime;
	NSDate * FDispatcherTime;
	NSNumber * FId;
	NSString * FMark;
	NSString * FMessageContent;
	NSString * FNoPassReason;
	NSString * FPhoneFailNumList;
	NSString * FPhoneNumList;
	NSDate * FProposerTime;
	NSString * FSendResult;
	NSDate * FSendTime;
	NSNumber * FStatus;
	NSString * FSubject;
	ns3_UserInfo * userInfoByFAssessorId;
	ns3_UserInfo * userInfoByFDispatcherId;
	ns3_UserInfo * userInfoByFProposerId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_TPhoneMessageSend *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * FAssessorTime;
@property (retain) NSDate * FDispatcherTime;
@property (retain) NSNumber * FId;
@property (retain) NSString * FMark;
@property (retain) NSString * FMessageContent;
@property (retain) NSString * FNoPassReason;
@property (retain) NSString * FPhoneFailNumList;
@property (retain) NSString * FPhoneNumList;
@property (retain) NSDate * FProposerTime;
@property (retain) NSString * FSendResult;
@property (retain) NSDate * FSendTime;
@property (retain) NSNumber * FStatus;
@property (retain) NSString * FSubject;
@property (retain) ns3_UserInfo * userInfoByFAssessorId;
@property (retain) ns3_UserInfo * userInfoByFDispatcherId;
@property (retain) ns3_UserInfo * userInfoByFProposerId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns6_ArrayOfTPhoneMessageSend : NSObject {
	
/* elements */
	NSMutableArray *TPhoneMessageSend;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns6_ArrayOfTPhoneMessageSend *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addTPhoneMessageSend:(ns6_TPhoneMessageSend *)toAdd;
@property (readonly) NSMutableArray * TPhoneMessageSend;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns9_TMailSend : NSObject {
	
/* elements */
	NSNumber * f_Assessor_Id;
	NSDate * f_Assessor_Time;
	NSNumber * f_Dispatcher_Id;
	NSDate * f_Dispatcher_Time;
	NSNumber * f_Id;
	NSString * f_Mail_Content;
	NSString * f_Mail_FailNum_List;
	NSString * f_Mail_Num_List;
	NSString * f_Mark;
	NSString * f_NoPassReason;
	NSNumber * f_Proposer_Id;
	NSDate * f_Proposer_Time;
	NSDate * f_SendTime;
	NSString * f_SenderMail;
	NSNumber * f_Status;
	NSString * f_Subject;
	ns3_UserInfo * userInfoByFAssessorId;
	ns3_UserInfo * userInfoByFDispatcherId;
	ns3_UserInfo * userInfoByFProposerId;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns9_TMailSend *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * f_Assessor_Id;
@property (retain) NSDate * f_Assessor_Time;
@property (retain) NSNumber * f_Dispatcher_Id;
@property (retain) NSDate * f_Dispatcher_Time;
@property (retain) NSNumber * f_Id;
@property (retain) NSString * f_Mail_Content;
@property (retain) NSString * f_Mail_FailNum_List;
@property (retain) NSString * f_Mail_Num_List;
@property (retain) NSString * f_Mark;
@property (retain) NSString * f_NoPassReason;
@property (retain) NSNumber * f_Proposer_Id;
@property (retain) NSDate * f_Proposer_Time;
@property (retain) NSDate * f_SendTime;
@property (retain) NSString * f_SenderMail;
@property (retain) NSNumber * f_Status;
@property (retain) NSString * f_Subject;
@property (retain) ns3_UserInfo * userInfoByFAssessorId;
@property (retain) ns3_UserInfo * userInfoByFDispatcherId;
@property (retain) ns3_UserInfo * userInfoByFProposerId;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns9_ArrayOfTMailSend : NSObject {
	
/* elements */
	NSMutableArray *TMailSend;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns9_ArrayOfTMailSend *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addTMailSend:(ns9_TMailSend *)toAdd;
@property (readonly) NSMutableArray * TMailSend;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_UserInfo : NSObject {
	
/* elements */
	NSString * email;
	USBoolean * gender;
	USBoolean * islocked;
	NSNumber * logincount;
	NSString * loginip;
	NSDate * logintime;
	USBoolean * mailcheck;
	USBoolean * messagecheck;
	NSString * phonenumber;
	USBoolean * publisherSuperAdmin;
	NSString * qq;
	NSString * realname;
	NSDate * registerdate;
	ns8_ArrayOfRole * roles;
	ns6_ArrayOfTPhoneMessageSend * tuserInfoByFAssessorId;
	ns6_ArrayOfTPhoneMessageSend * tuserInfoByFProposerId;
	NSNumber * userId;
	ns9_ArrayOfTMailSend * userInfoByFAssessorId;
	ns9_ArrayOfTMailSend * userInfoByFProposerId;
	NSString * username;
	NSString * userpwd;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_UserInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * email;
@property (retain) USBoolean * gender;
@property (retain) USBoolean * islocked;
@property (retain) NSNumber * logincount;
@property (retain) NSString * loginip;
@property (retain) NSDate * logintime;
@property (retain) USBoolean * mailcheck;
@property (retain) USBoolean * messagecheck;
@property (retain) NSString * phonenumber;
@property (retain) USBoolean * publisherSuperAdmin;
@property (retain) NSString * qq;
@property (retain) NSString * realname;
@property (retain) NSDate * registerdate;
@property (retain) ns8_ArrayOfRole * roles;
@property (retain) ns6_ArrayOfTPhoneMessageSend * tuserInfoByFAssessorId;
@property (retain) ns6_ArrayOfTPhoneMessageSend * tuserInfoByFProposerId;
@property (retain) NSNumber * userId;
@property (retain) ns9_ArrayOfTMailSend * userInfoByFAssessorId;
@property (retain) ns9_ArrayOfTMailSend * userInfoByFProposerId;
@property (retain) NSString * username;
@property (retain) NSString * userpwd;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns7_Organization : NSObject {
	
/* elements */
	NSNumber * accountCush;
	NSNumber * accountEbi;
	NSNumber * accountSettled;
	NSNumber * auditModel;
	NSNumber * belongWebsite;
	NSString * childId;
	NSString * childName;
	NSString * contract;
	NSString * creator;
	NSString * englishAddress;
	NSString * englishIntroduction;
	NSString * englishName;
	NSNumber * grade;
	NSString * headPicture;
	NSString * id_;
	NSString * loginPic;
	NSNumber * orgUpdateFlag;
	NSNumber * org_vistnum;
	NSNumber * organization_ActivityId;
	NSDate * organization_AddDate;
	NSString * organization_AddUserId;
	NSString * organization_Address;
	NSDate * organization_AuditingDate;
	NSString * organization_AuditingUserId;
	NSString * organization_BalanceAccountCircle;
	NSString * organization_BannerFile;
	NSNumber * organization_BookCount;
	NSNumber * organization_ChildOrganizationId;
	NSString * organization_Code;
	NSString * organization_CommendPic;
	NSNumber * organization_CommendValue;
	NSNumber * organization_Credits;
	NSNumber * organization_Cyclostyle;
	NSNumber * organization_Estimation;
	NSString * organization_Fax;
	NSString * organization_Introduction;
	NSString * organization_LogoFile;
	NSString * organization_Name;
	NSString * organization_OrgCardFile;
	NSString * organization_PostCode;
	NSString * organization_Proportion;
	NSString * organization_State;
	NSNumber * organization_StudentCount;
	NSString * organization_Type;
	NSString * organization_areaCode;
	ns2_ArrayOfRealClass * realClassList;
	ns3_TimeebUser * timeebuserByOrganizationAddUserId;
	ns3_UserInfo * timeebuserByOrganizationAuditingUserId;
	NSString * truename;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns7_Organization *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * accountCush;
@property (retain) NSNumber * accountEbi;
@property (retain) NSNumber * accountSettled;
@property (retain) NSNumber * auditModel;
@property (retain) NSNumber * belongWebsite;
@property (retain) NSString * childId;
@property (retain) NSString * childName;
@property (retain) NSString * contract;
@property (retain) NSString * creator;
@property (retain) NSString * englishAddress;
@property (retain) NSString * englishIntroduction;
@property (retain) NSString * englishName;
@property (retain) NSNumber * grade;
@property (retain) NSString * headPicture;
@property (retain) NSString * id_;
@property (retain) NSString * loginPic;
@property (retain) NSNumber * orgUpdateFlag;
@property (retain) NSNumber * org_vistnum;
@property (retain) NSNumber * organization_ActivityId;
@property (retain) NSDate * organization_AddDate;
@property (retain) NSString * organization_AddUserId;
@property (retain) NSString * organization_Address;
@property (retain) NSDate * organization_AuditingDate;
@property (retain) NSString * organization_AuditingUserId;
@property (retain) NSString * organization_BalanceAccountCircle;
@property (retain) NSString * organization_BannerFile;
@property (retain) NSNumber * organization_BookCount;
@property (retain) NSNumber * organization_ChildOrganizationId;
@property (retain) NSString * organization_Code;
@property (retain) NSString * organization_CommendPic;
@property (retain) NSNumber * organization_CommendValue;
@property (retain) NSNumber * organization_Credits;
@property (retain) NSNumber * organization_Cyclostyle;
@property (retain) NSNumber * organization_Estimation;
@property (retain) NSString * organization_Fax;
@property (retain) NSString * organization_Introduction;
@property (retain) NSString * organization_LogoFile;
@property (retain) NSString * organization_Name;
@property (retain) NSString * organization_OrgCardFile;
@property (retain) NSString * organization_PostCode;
@property (retain) NSString * organization_Proportion;
@property (retain) NSString * organization_State;
@property (retain) NSNumber * organization_StudentCount;
@property (retain) NSString * organization_Type;
@property (retain) NSString * organization_areaCode;
@property (retain) ns2_ArrayOfRealClass * realClassList;
@property (retain) ns3_TimeebUser * timeebuserByOrganizationAddUserId;
@property (retain) ns3_UserInfo * timeebuserByOrganizationAuditingUserId;
@property (retain) NSString * truename;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns7_OrgEbook : NSObject {
	
/* elements */
	NSDate * buyDate;
	ns5_Book * eBook;
	NSNumber * id_;
	ns3_TimeebUser * timeebuser;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns7_OrgEbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * buyDate;
@property (retain) ns5_Book * eBook;
@property (retain) NSNumber * id_;
@property (retain) ns3_TimeebUser * timeebuser;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns7_ArrayOfOrgEbook : NSObject {
	
/* elements */
	NSMutableArray *OrgEbook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns7_ArrayOfOrgEbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addOrgEbook:(ns7_OrgEbook *)toAdd;
@property (readonly) NSMutableArray * OrgEbook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_BagStore : NSObject {
	
/* elements */
	NSNumber * bagID;
	NSString * bagname;
	NSString * bagtype;
	NSString * bookcolor;
	NSString * bookimage;
	NSNumber * capacity;
	NSNumber * price;
	ns5_ArrayOfShelf * shelfs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_BagStore *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * bagID;
@property (retain) NSString * bagname;
@property (retain) NSString * bagtype;
@property (retain) NSString * bookcolor;
@property (retain) NSString * bookimage;
@property (retain) NSNumber * capacity;
@property (retain) NSNumber * price;
@property (retain) ns5_ArrayOfShelf * shelfs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_ArrayOfBagStore : NSObject {
	
/* elements */
	NSMutableArray *BagStore;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_ArrayOfBagStore *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addBagStore:(ns5_BagStore *)toAdd;
@property (readonly) NSMutableArray * BagStore;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_ArrayOfBook : NSObject {
	
/* elements */
	NSMutableArray *Book;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_ArrayOfBook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addBook:(ns5_Book *)toAdd;
@property (readonly) NSMutableArray * Book;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_Shelf : NSObject {
	
/* elements */
	ns5_ArrayOfBagStore * bagstores;
	ns5_ArrayOfBook * books;
	NSNumber * shelfcapacity;
	NSNumber * shelfid;
	NSString * shelfname;
	NSNumber * shelfprice;
	NSNumber * shelftype;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_Shelf *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns5_ArrayOfBagStore * bagstores;
@property (retain) ns5_ArrayOfBook * books;
@property (retain) NSNumber * shelfcapacity;
@property (retain) NSNumber * shelfid;
@property (retain) NSString * shelfname;
@property (retain) NSNumber * shelfprice;
@property (retain) NSNumber * shelftype;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_ArrayOfShelf : NSObject {
	
/* elements */
	NSMutableArray *Shelf;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_ArrayOfShelf *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addShelf:(ns5_Shelf *)toAdd;
@property (readonly) NSMutableArray * Shelf;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns5_Book : NSObject {
	
/* elements */
	NSString * CN;
	NSNumber * EPUBconvertStatus;
	NSNumber * EPUBconvertStatusFlag;
	NSNumber * EPUBsynchronic;
	NSString * ISSN;
	ns4_ArrayOfActbook * actbooks;
	ns4_ArrayOfActivity * activities;
	NSString * authorCoding;
	NSString * authorDes;
	NSString * authorIdentity;
	NSString * authorType;
	NSString * bianjishi;
	NSString * bookDes;
	NSNumber * bookMark;
	NSNumber * chapterCount;
	NSNumber * chapterCount2;
	NSNumber * checkTag;
	NSString * classCode;
	NSNumber * clickNum;
	NSString * code;
	NSNumber * compressType;
	NSString * congShuMing;
	NSString * content;
	NSNumber * contentNum;
	NSString * contentPageRange;
	NSNumber * contentProviderId;
	NSNumber * convertStatus;
	NSNumber * convertStatusFlag;
	NSString * coverUrl;
	NSNumber * cpTag;
	NSString * creator;
	NSDate * digCopyrightEnd;
	NSDate * digCopyrightStart;
	NSNumber * docType;
	NSString * duJiaShouQuan;
	NSNumber * ebookDiscount;
	NSNumber * ebookNowPrice;
	NSNumber * ebookPrice;
	NSNumber * ebookSaleVolume;
	NSNumber * freeBook;
	NSNumber * id_;
	NSString * identityId;
	USBoolean * isRecommend;
	NSDate * issueDate;
	NSDate * issueDateEnd;
	NSDate * issueDateStart;
	NSString * kaiBen;
	NSString * kaiBenGuiGe;
	NSString * name;
	ns7_Organization * organization;
	NSString * organizationName;
	ns7_ArrayOfOrgEbook * orgs;
	NSNumber * pageCount;
	NSNumber * pbookCount;
	NSNumber * pbookDiscount;
	NSNumber * pbookNowPrice;
	NSNumber * pbookPrice;
	NSNumber * pbookSaleVolume;
	NSString * pressOrder;
	NSNumber * processStatus;
	NSString * publisher;
	NSString * queryEndDate;
	NSString * queryStartDate;
	NSString * realISBN;
	NSNumber * recommendNum;
	NSString * reditor;
	NSString * remarks;
	NSDate * rukuDate;
	ns5_ArrayOfShelf * shelfs;
	NSString * shouQuanKaiShi;
	NSString * shouQuanZhongZhi;
	NSString * sign;
	NSNumber * synchronic;
	NSNumber * tableStatus;
	NSString * tigongshang;
	NSString * title;
	NSNumber * tryreadEndPage;
	NSNumber * tryreadStartPage;
	NSNumber * type;
	NSString * uuId;
	NSString * xinXiWangLuo;
	NSNumber * yeMa;
	NSString * year;
	NSString * yinShuaChang;
	NSString * yinZhang;
	NSString * youfadaima;
	NSString * zhuangDingXingShi;
	NSString * zhuangZheSheJi;
	NSString * zhuanshouquan;
	NSString * zhubian;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns5_Book *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CN;
@property (retain) NSNumber * EPUBconvertStatus;
@property (retain) NSNumber * EPUBconvertStatusFlag;
@property (retain) NSNumber * EPUBsynchronic;
@property (retain) NSString * ISSN;
@property (retain) ns4_ArrayOfActbook * actbooks;
@property (retain) ns4_ArrayOfActivity * activities;
@property (retain) NSString * authorCoding;
@property (retain) NSString * authorDes;
@property (retain) NSString * authorIdentity;
@property (retain) NSString * authorType;
@property (retain) NSString * bianjishi;
@property (retain) NSString * bookDes;
@property (retain) NSNumber * bookMark;
@property (retain) NSNumber * chapterCount;
@property (retain) NSNumber * chapterCount2;
@property (retain) NSNumber * checkTag;
@property (retain) NSString * classCode;
@property (retain) NSNumber * clickNum;
@property (retain) NSString * code;
@property (retain) NSNumber * compressType;
@property (retain) NSString * congShuMing;
@property (retain) NSString * content;
@property (retain) NSNumber * contentNum;
@property (retain) NSString * contentPageRange;
@property (retain) NSNumber * contentProviderId;
@property (retain) NSNumber * convertStatus;
@property (retain) NSNumber * convertStatusFlag;
@property (retain) NSString * coverUrl;
@property (retain) NSNumber * cpTag;
@property (retain) NSString * creator;
@property (retain) NSDate * digCopyrightEnd;
@property (retain) NSDate * digCopyrightStart;
@property (retain) NSNumber * docType;
@property (retain) NSString * duJiaShouQuan;
@property (retain) NSNumber * ebookDiscount;
@property (retain) NSNumber * ebookNowPrice;
@property (retain) NSNumber * ebookPrice;
@property (retain) NSNumber * ebookSaleVolume;
@property (retain) NSNumber * freeBook;
@property (retain) NSNumber * id_;
@property (retain) NSString * identityId;
@property (retain) USBoolean * isRecommend;
@property (retain) NSDate * issueDate;
@property (retain) NSDate * issueDateEnd;
@property (retain) NSDate * issueDateStart;
@property (retain) NSString * kaiBen;
@property (retain) NSString * kaiBenGuiGe;
@property (retain) NSString * name;
@property (retain) ns7_Organization * organization;
@property (retain) NSString * organizationName;
@property (retain) ns7_ArrayOfOrgEbook * orgs;
@property (retain) NSNumber * pageCount;
@property (retain) NSNumber * pbookCount;
@property (retain) NSNumber * pbookDiscount;
@property (retain) NSNumber * pbookNowPrice;
@property (retain) NSNumber * pbookPrice;
@property (retain) NSNumber * pbookSaleVolume;
@property (retain) NSString * pressOrder;
@property (retain) NSNumber * processStatus;
@property (retain) NSString * publisher;
@property (retain) NSString * queryEndDate;
@property (retain) NSString * queryStartDate;
@property (retain) NSString * realISBN;
@property (retain) NSNumber * recommendNum;
@property (retain) NSString * reditor;
@property (retain) NSString * remarks;
@property (retain) NSDate * rukuDate;
@property (retain) ns5_ArrayOfShelf * shelfs;
@property (retain) NSString * shouQuanKaiShi;
@property (retain) NSString * shouQuanZhongZhi;
@property (retain) NSString * sign;
@property (retain) NSNumber * synchronic;
@property (retain) NSNumber * tableStatus;
@property (retain) NSString * tigongshang;
@property (retain) NSString * title;
@property (retain) NSNumber * tryreadEndPage;
@property (retain) NSNumber * tryreadStartPage;
@property (retain) NSNumber * type;
@property (retain) NSString * uuId;
@property (retain) NSString * xinXiWangLuo;
@property (retain) NSNumber * yeMa;
@property (retain) NSString * year;
@property (retain) NSString * yinShuaChang;
@property (retain) NSString * yinZhang;
@property (retain) NSString * youfadaima;
@property (retain) NSString * zhuangDingXingShi;
@property (retain) NSString * zhuangZheSheJi;
@property (retain) NSString * zhuanshouquan;
@property (retain) NSString * zhubian;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_UserEbook : NSObject {
	
/* elements */
	NSNumber * bookId;
	NSString * bookName;
	NSString * bookStr;
	ns5_Book * books;
	NSDate * buyDate;
	NSString * cartStr;
	NSString * headPicture;
	NSNumber * id_;
	NSDate * invalidDate;
	NSNumber * moneyStr;
	NSString * orderEndDate;
	NSString * orderNum;
	NSString * orderStartDate;
	NSNumber * payMode;
	NSNumber * payedEbi;
	NSNumber * status;
	ns3_TimeebUser * timeebuser;
	NSNumber * totalMoney;
	NSNumber * userId;
	NSString * userName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_UserEbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * bookId;
@property (retain) NSString * bookName;
@property (retain) NSString * bookStr;
@property (retain) ns5_Book * books;
@property (retain) NSDate * buyDate;
@property (retain) NSString * cartStr;
@property (retain) NSString * headPicture;
@property (retain) NSNumber * id_;
@property (retain) NSDate * invalidDate;
@property (retain) NSNumber * moneyStr;
@property (retain) NSString * orderEndDate;
@property (retain) NSString * orderNum;
@property (retain) NSString * orderStartDate;
@property (retain) NSNumber * payMode;
@property (retain) NSNumber * payedEbi;
@property (retain) NSNumber * status;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSNumber * totalMoney;
@property (retain) NSNumber * userId;
@property (retain) NSString * userName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_ArrayOfUserEbook : NSObject {
	
/* elements */
	NSMutableArray *UserEbook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_ArrayOfUserEbook *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addUserEbook:(ns3_UserEbook *)toAdd;
@property (readonly) NSMutableArray * UserEbook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Writing : NSObject {
	
/* elements */
	NSDate * act_enddate;
	NSNumber * act_id;
	NSNumber * act_kind;
	NSString * act_logoPic;
	NSString * act_name;
	NSNumber * areaId;
	NSString * authorTrueName;
	NSString * authorUnit;
	NSNumber * belongWebSite;
	NSNumber * checkTag;
	NSNumber * cityId;
	NSNumber * commentnum;
	NSString * contributor;
	NSNumber * favour;
	NSString * grade;
	NSString * headPicture;
	NSString * nickName;
	NSNumber * organizationId;
	NSString * organization_name;
	NSNumber * provinceId;
	NSString * truename;
	NSString * userName;
	NSNumber * user_id;
	NSString * wri_content;
	NSNumber * wri_id;
	NSDate * wri_launchdate;
	NSString * wri_pic;
	NSString * wri_tag;
	NSString * wri_teacher;
	NSString * wri_title;
	NSDate * wri_updatedate;
	NSNumber * wri_vistnum;
	NSString * writingGroup;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Writing *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSDate * act_enddate;
@property (retain) NSNumber * act_id;
@property (retain) NSNumber * act_kind;
@property (retain) NSString * act_logoPic;
@property (retain) NSString * act_name;
@property (retain) NSNumber * areaId;
@property (retain) NSString * authorTrueName;
@property (retain) NSString * authorUnit;
@property (retain) NSNumber * belongWebSite;
@property (retain) NSNumber * checkTag;
@property (retain) NSNumber * cityId;
@property (retain) NSNumber * commentnum;
@property (retain) NSString * contributor;
@property (retain) NSNumber * favour;
@property (retain) NSString * grade;
@property (retain) NSString * headPicture;
@property (retain) NSString * nickName;
@property (retain) NSNumber * organizationId;
@property (retain) NSString * organization_name;
@property (retain) NSNumber * provinceId;
@property (retain) NSString * truename;
@property (retain) NSString * userName;
@property (retain) NSNumber * user_id;
@property (retain) NSString * wri_content;
@property (retain) NSNumber * wri_id;
@property (retain) NSDate * wri_launchdate;
@property (retain) NSString * wri_pic;
@property (retain) NSString * wri_tag;
@property (retain) NSString * wri_teacher;
@property (retain) NSString * wri_title;
@property (retain) NSDate * wri_updatedate;
@property (retain) NSNumber * wri_vistnum;
@property (retain) NSString * writingGroup;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_Wrimessage : NSObject {
	
/* elements */
	NSString * headpicture;
	ns3_TimeebUser * timeebuser;
	NSString * truename;
	NSNumber * user_id;
	NSNumber * wri_id;
	NSString * wrimessage_content;
	NSNumber * wrimessage_id;
	NSDate * wrimessage_launchdate;
	ns4_Writing * writing;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_Wrimessage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * headpicture;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSString * truename;
@property (retain) NSNumber * user_id;
@property (retain) NSNumber * wri_id;
@property (retain) NSString * wrimessage_content;
@property (retain) NSNumber * wrimessage_id;
@property (retain) NSDate * wrimessage_launchdate;
@property (retain) ns4_Writing * writing;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfWrimessage : NSObject {
	
/* elements */
	NSMutableArray *Wrimessage;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfWrimessage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addWrimessage:(ns4_Wrimessage *)toAdd;
@property (readonly) NSMutableArray * Wrimessage;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns4_ArrayOfWriting : NSObject {
	
/* elements */
	NSMutableArray *Writing;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns4_ArrayOfWriting *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addWriting:(ns4_Writing *)toAdd;
@property (readonly) NSMutableArray * Writing;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns3_TimeebUser : NSObject {
	
/* elements */
	ns4_ArrayOfActivity * activities;
	ns4_ArrayOfActmessage * actmessages;
	ns4_ArrayOfActregist * actregists;
	NSString * address;
	NSNumber * attentionValue;
	ns3_ArrayOfTimeebUser * attentions2timeebUser;
	NSNumber * balance;
	NSNumber * belongWebsite;
	NSDate * birthday;
	ns5_ArrayOfComment * bookComments;
	NSNumber * browserCount;
	ns6_ArrayOfChargeRecord * chargeRecords;
	NSString * childId;
	NSString * company;
	NSNumber * consumptionCount;
	NSString * department;
	NSString * email;
	USBoolean * emailCheck;
	NSString * fax;
	NSString * headPicture;
	NSString * id_;
	NSNumber * integration;
	ns6_ArrayOfIntegrationRecord * integrationRecords;
	NSString * introduction;
	NSNumber * isActive;
	USBoolean * isExpertTeacher;
	NSNumber * isLocked;
	NSNumber * isOrganizationUser;
	NSNumber * isSubstationUser;
	NSNumber * isTxWeibo;
	NSNumber * isXlWeibo;
	NSString * job;
	NSString * lastLoginIp;
	NSDate * lastLoginTime;
	NSString * legalPerson;
	NSNumber * level;
	NSNumber * loginCount;
	NSString * loginIp;
	NSNumber * loginStatus;
	NSDate * loginTime;
	NSString * nickName;
	NSString * orgCode;
	ns3_TimeebUser * organizationUser;
	NSString * phoneNumber;
	NSString * postCode;
	NSString * recommendName;
	NSString * recommendPhoneNumber;
	NSString * recommendUserName;
	NSDate * registerDate;
	ns3_ArrayOfSaleCardOrder * salecardorders;
	NSString * sex;
	NSString * subject;
	NSString * teacherCard;
	NSNumber * teacherState;
	NSString * tel;
	NSNumber * templateId;
	NSString * token;
	NSString * trueName;
	NSString * txWeibo;
	NSString * type;
	NSString * userId;
	NSString * userName;
	NSString * userPass;
	NSNumber * userType;
	ns3_ArrayOfUserEbook * userebooks;
	NSNumber * virtualIntegration;
	ns4_ArrayOfWrimessage * wrimessages;
	ns4_ArrayOfWriting * writings;
	NSString * xlWeibo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns3_TimeebUser *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns4_ArrayOfActivity * activities;
@property (retain) ns4_ArrayOfActmessage * actmessages;
@property (retain) ns4_ArrayOfActregist * actregists;
@property (retain) NSString * address;
@property (retain) NSNumber * attentionValue;
@property (retain) ns3_ArrayOfTimeebUser * attentions2timeebUser;
@property (retain) NSNumber * balance;
@property (retain) NSNumber * belongWebsite;
@property (retain) NSDate * birthday;
@property (retain) ns5_ArrayOfComment * bookComments;
@property (retain) NSNumber * browserCount;
@property (retain) ns6_ArrayOfChargeRecord * chargeRecords;
@property (retain) NSString * childId;
@property (retain) NSString * company;
@property (retain) NSNumber * consumptionCount;
@property (retain) NSString * department;
@property (retain) NSString * email;
@property (retain) USBoolean * emailCheck;
@property (retain) NSString * fax;
@property (retain) NSString * headPicture;
@property (retain) NSString * id_;
@property (retain) NSNumber * integration;
@property (retain) ns6_ArrayOfIntegrationRecord * integrationRecords;
@property (retain) NSString * introduction;
@property (retain) NSNumber * isActive;
@property (retain) USBoolean * isExpertTeacher;
@property (retain) NSNumber * isLocked;
@property (retain) NSNumber * isOrganizationUser;
@property (retain) NSNumber * isSubstationUser;
@property (retain) NSNumber * isTxWeibo;
@property (retain) NSNumber * isXlWeibo;
@property (retain) NSString * job;
@property (retain) NSString * lastLoginIp;
@property (retain) NSDate * lastLoginTime;
@property (retain) NSString * legalPerson;
@property (retain) NSNumber * level;
@property (retain) NSNumber * loginCount;
@property (retain) NSString * loginIp;
@property (retain) NSNumber * loginStatus;
@property (retain) NSDate * loginTime;
@property (retain) NSString * nickName;
@property (retain) NSString * orgCode;
@property (retain) ns3_TimeebUser * organizationUser;
@property (retain) NSString * phoneNumber;
@property (retain) NSString * postCode;
@property (retain) NSString * recommendName;
@property (retain) NSString * recommendPhoneNumber;
@property (retain) NSString * recommendUserName;
@property (retain) NSDate * registerDate;
@property (retain) ns3_ArrayOfSaleCardOrder * salecardorders;
@property (retain) NSString * sex;
@property (retain) NSString * subject;
@property (retain) NSString * teacherCard;
@property (retain) NSNumber * teacherState;
@property (retain) NSString * tel;
@property (retain) NSNumber * templateId;
@property (retain) NSString * token;
@property (retain) NSString * trueName;
@property (retain) NSString * txWeibo;
@property (retain) NSString * type;
@property (retain) NSString * userId;
@property (retain) NSString * userName;
@property (retain) NSString * userPass;
@property (retain) NSNumber * userType;
@property (retain) ns3_ArrayOfUserEbook * userebooks;
@property (retain) NSNumber * virtualIntegration;
@property (retain) ns4_ArrayOfWrimessage * wrimessages;
@property (retain) ns4_ArrayOfWriting * writings;
@property (retain) NSString * xlWeibo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface ns2_RealClassNotice : NSObject {
	
/* elements */
	NSNumber * id_;
	NSString * imgPath;
	NSString * nickname;
	NSString * noticeContent;
	NSDate * noticeDate;
	NSString * noticeTitle;
	ns2_RealClass * realClass;
	NSNumber * realclassId;
	NSNumber * status;
	ns3_TimeebUser * timeebuser;
	NSString * truename;
	NSNumber * userId;
	NSString * username;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (ns2_RealClassNotice *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * id_;
@property (retain) NSString * imgPath;
@property (retain) NSString * nickname;
@property (retain) NSString * noticeContent;
@property (retain) NSDate * noticeDate;
@property (retain) NSString * noticeTitle;
@property (retain) ns2_RealClass * realClass;
@property (retain) NSNumber * realclassId;
@property (retain) NSNumber * status;
@property (retain) ns3_TimeebUser * timeebuser;
@property (retain) NSString * truename;
@property (retain) NSNumber * userId;
@property (retain) NSString * username;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateClassNotice : NSObject {
	
/* elements */
	ns2_RealClassNotice * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateClassNotice *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) ns2_RealClassNotice * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateClassNoticeResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateClassNoticeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnLineHomeWorkDetails : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnLineHomeWorkDetails *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnLineHomeWorkDetailsResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnLineHomeWorkDetailsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addActivityReview : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addActivityReview *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addActivityReviewResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addActivityReviewResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnlineClassPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSNumber * in2;
	NSString * in3;
	NSString * in4;
	NSString * in5;
	NSNumber * in6;
	NSNumber * in7;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnlineClassPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSString * in5;
@property (retain) NSNumber * in6;
@property (retain) NSNumber * in7;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnlineClassPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnlineClassPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getRelaClassCirlInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getRelaClassCirlInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getRelaClassCirlInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getRelaClassCirlInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMessageSeesionPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMessageSeesionPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMessageSeesionPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMessageSeesionPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getDynamicsPage : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getDynamicsPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getDynamicsPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getDynamicsPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findPrivilegeListByUserId : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findPrivilegeListByUserId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findPrivilegeListByUserIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findPrivilegeListByUserIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPreparationFilePage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPreparationFilePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPreparationFilePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPreparationFilePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAttentionPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAttentionPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAttentionPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAttentionPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_loginAuth : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_loginAuth *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_loginAuthResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_loginAuthResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCircleUsersPage : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCircleUsersPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCircleUsersPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCircleUsersPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getHomeWorkDetails : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getHomeWorkDetails *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getHomeWorkDetailsResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getHomeWorkDetailsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_markEBlogMan : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_markEBlogMan *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_markEBlogManResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_markEBlogManResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCurriculum : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCurriculum *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCurriculumResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCurriculumResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCommentPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSNumber * in4;
	NSNumber * in5;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCommentPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSNumber * in4;
@property (retain) NSNumber * in5;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCommentPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCommentPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getHomeWorkComplete : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getHomeWorkComplete *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getHomeWorkCompleteResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getHomeWorkCompleteResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWritingList : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWritingList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWritingListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWritingListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkCompleteForTeacher : NSObject {
	
/* elements */
	NSNumber * in0;
	NSNumber * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkCompleteForTeacher *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSNumber * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkCompleteForTeacherResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkCompleteForTeacherResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_prePackageReview : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_prePackageReview *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_prePackageReviewResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_prePackageReviewResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStepListByStepId : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStepListByStepId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStepListByStepIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStepListByStepIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addTodayHomeWork : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addTodayHomeWork *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addTodayHomeWorkResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addTodayHomeWorkResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResultsFBPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSNumber * in4;
	NSNumber * in5;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResultsFBPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSNumber * in4;
@property (retain) NSNumber * in5;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResultsFBPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResultsFBPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getTodayHomeWorkInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getTodayHomeWorkInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getTodayHomeWorkInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getTodayHomeWorkInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassActiveMsg : NSObject {
	
/* elements */
	NSNumber * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassActiveMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassActiveMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassActiveMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCurriculumByClassId : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCurriculumByClassId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCurriculumByClassIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCurriculumByClassIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgPage : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findNewsActivityTopByOrgId : NSObject {
	
/* elements */
	NSNumber * in0;
	NSNumber * in1;
	NSString * in2;
	NSString * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findNewsActivityTopByOrgId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSNumber * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findNewsActivityTopByOrgIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findNewsActivityTopByOrgIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassStudentsList : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassStudentsList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getClassStudentsListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getClassStudentsListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWriteReviewPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWriteReviewPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWriteReviewPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWriteReviewPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResourcesFilePage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResourcesFilePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getResourcesFilePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getResourcesFilePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getModuleIsUpdate : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getModuleIsUpdate *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getModuleIsUpdateResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getModuleIsUpdateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAnnouncementMsg : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAnnouncementMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAnnouncementMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAnnouncementMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBMsg : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getComment : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getComment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCommentResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCommentResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findRealClassInfoByUserId : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findRealClassInfoByUserId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_findRealClassInfoByUserIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_findRealClassInfoByUserIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_saveImage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	USBoolean * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_saveImage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) USBoolean * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_saveImageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_saveImageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPackageReview : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPackageReview *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPackageReviewResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPackageReviewResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getActivityPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getActivityPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getActivityPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getActivityPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_cancelAttention : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_cancelAttention *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_cancelAttentionResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_cancelAttentionResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_delClassNotice : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_delClassNotice *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_delClassNoticeResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_delClassNoticeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMessageSendInfoPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMessageSendInfoPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getMessageSendInfoPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getMessageSendInfoPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkList : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWorkListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWorkListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWordMarking : NSObject {
	
/* elements */
	NSNumber * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWordMarking *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getWordMarkingResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getWordMarkingResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStepMsgByStepId : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStepMsgByStepId *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getStepMsgByStepIdResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getStepMsgByStepIdResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getBlackHomeWorkDetails : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getBlackHomeWorkDetails *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getBlackHomeWorkDetailsResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getBlackHomeWorkDetailsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getActivityReviewPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSNumber * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getActivityReviewPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSNumber * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getActivityReviewPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getActivityReviewPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgEManPage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSNumber * in4;
	NSNumber * in5;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgEManPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSNumber * in4;
@property (retain) NSNumber * in5;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEBolgEManPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEBolgEManPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPersonalHomePage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPersonalHomePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getPersonalHomePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getPersonalHomePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addClassNotice : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addClassNotice *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addClassNoticeResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addClassNoticeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getContactsList : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSNumber * in4;
	NSNumber * in5;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getContactsList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSNumber * in4;
@property (retain) NSNumber * in5;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getContactsListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getContactsListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_joniActivity : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_joniActivity *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_joniActivityResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_joniActivityResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCircleList : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCircleList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCircleListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCircleListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAnnouncementPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAnnouncementPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getAnnouncementPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getAnnouncementPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_attentionTo : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_attentionTo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_attentionToResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_attentionToResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateHomeWorkState : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateHomeWorkState *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_updateHomeWorkStateResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_updateHomeWorkStateResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_deleteMessageSessionInfo : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_deleteMessageSessionInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_deleteMessageSessionInfoResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_deleteMessageSessionInfoResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCirclePage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
	NSNumber * in4;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCirclePage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
@property (retain) NSNumber * in4;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getCirclePageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getCirclePageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getSubjectList : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getSubjectList *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getSubjectListResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getSubjectListResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getNewsPage : NSObject {
	
/* elements */
	NSNumber * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getNewsPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getNewsPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getNewsPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnLineWorkPage : NSObject {
	
/* elements */
	NSString * in0;
	NSNumber * in1;
	NSNumber * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnLineWorkPage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSNumber * in1;
@property (retain) NSNumber * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getOnLineWorkPageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getOnLineWorkPageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getkhWorkMsg : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getkhWorkMsg *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getkhWorkMsgResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getkhWorkMsgResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_LaudOrDeleteLaud : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSNumber * in3;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_LaudOrDeleteLaud *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSNumber * in3;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_LaudOrDeleteLaudResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_LaudOrDeleteLaudResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addStudentComment : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addStudentComment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_addStudentCommentResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_addStudentCommentResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEboTalkDetails : NSObject {
	
/* elements */
	NSString * in0;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEboTalkDetails *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getEboTalkDetailsResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getEboTalkDetailsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getNetWorkClassRoom : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
	NSString * in3;
	NSString * in4;
	NSNumber * in5;
	NSNumber * in6;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getNetWorkClassRoom *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
@property (retain) NSString * in3;
@property (retain) NSString * in4;
@property (retain) NSNumber * in5;
@property (retain) NSNumber * in6;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_getNetWorkClassRoomResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_getNetWorkClassRoomResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_sentMessage : NSObject {
	
/* elements */
	NSString * in0;
	NSString * in1;
	NSString * in2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_sentMessage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * in0;
@property (retain) NSString * in1;
@property (retain) NSString * in2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface UserWS_sentMessageResponse : NSObject {
	
/* elements */
	NSString * out_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (UserWS_sentMessageResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * out_;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "UserWS.h"
#import "ns1.h"
#import "ns2.h"
#import "ns3.h"
#import "ns4.h"
#import "ns5.h"
#import "ns6.h"
#import "ns8.h"
#import "ns9.h"
#import "ns7.h"
@class UserWSHttpBinding;
@interface UserWS : NSObject {
	
}
+ (UserWSHttpBinding *)UserWSHttpBinding;
@end
@class UserWSHttpBindingResponse;
@class UserWSHttpBindingOperation;
@protocol UserWSHttpBindingResponseDelegate <NSObject>
- (void) operation:(UserWSHttpBindingOperation *)operation completedWithResponse:(UserWSHttpBindingResponse *)response;
@end
@interface UserWSHttpBinding : NSObject <UserWSHttpBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(UserWSHttpBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (UserWSHttpBindingResponse *)publishWorksUsingParameters:(UserWS_publishWorks *)aParameters ;
- (void)publishWorksAsyncUsingParameters:(UserWS_publishWorks *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getMarkQueryInfoUsingParameters:(UserWS_getMarkQueryInfo *)aParameters ;
- (void)getMarkQueryInfoAsyncUsingParameters:(UserWS_getMarkQueryInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)sendEboTalkAboutInfoUsingParameters:(UserWS_sendEboTalkAboutInfo *)aParameters ;
- (void)sendEboTalkAboutInfoAsyncUsingParameters:(UserWS_sendEboTalkAboutInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getReviewPageInfoUsingParameters:(UserWS_getReviewPageInfo *)aParameters ;
- (void)getReviewPageInfoAsyncUsingParameters:(UserWS_getReviewPageInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addWriteReviewUsingParameters:(UserWS_addWriteReview *)aParameters ;
- (void)addWriteReviewAsyncUsingParameters:(UserWS_addWriteReview *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)reviewTalkAboutInfoUsingParameters:(UserWS_reviewTalkAboutInfo *)aParameters ;
- (void)reviewTalkAboutInfoAsyncUsingParameters:(UserWS_reviewTalkAboutInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getUserMsgUsingParameters:(UserWS_getUserMsg *)aParameters ;
- (void)getUserMsgAsyncUsingParameters:(UserWS_getUserMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)delEBlogUsingParameters:(UserWS_delEBlog *)aParameters ;
- (void)delEBlogAsyncUsingParameters:(UserWS_delEBlog *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)findNewsByOrgIdUsingParameters:(UserWS_findNewsByOrgId *)aParameters ;
- (void)findNewsByOrgIdAsyncUsingParameters:(UserWS_findNewsByOrgId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getPLetterPageUsingParameters:(UserWS_getPLetterPage *)aParameters ;
- (void)getPLetterPageAsyncUsingParameters:(UserWS_getPLetterPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getClassActivePageUsingParameters:(UserWS_getClassActivePage *)aParameters ;
- (void)getClassActivePageAsyncUsingParameters:(UserWS_getClassActivePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getResultMsgPageUsingParameters:(UserWS_getResultMsgPage *)aParameters ;
- (void)getResultMsgPageAsyncUsingParameters:(UserWS_getResultMsgPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWorkCompleteForParentsUsingParameters:(UserWS_getWorkCompleteForParents *)aParameters ;
- (void)getWorkCompleteForParentsAsyncUsingParameters:(UserWS_getWorkCompleteForParents *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getPLetterMsgUsingParameters:(UserWS_getPLetterMsg *)aParameters ;
- (void)getPLetterMsgAsyncUsingParameters:(UserWS_getPLetterMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)judgeActivityJoinUsingParameters:(UserWS_judgeActivityJoin *)aParameters ;
- (void)judgeActivityJoinAsyncUsingParameters:(UserWS_judgeActivityJoin *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getStudentByIdUsingParameters:(UserWS_getStudentById *)aParameters ;
- (void)getStudentByIdAsyncUsingParameters:(UserWS_getStudentById *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addEBlogUsingParameters:(UserWS_addEBlog *)aParameters ;
- (void)addEBlogAsyncUsingParameters:(UserWS_addEBlog *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getEBolgSquarePageUsingParameters:(UserWS_getEBolgSquarePage *)aParameters ;
- (void)getEBolgSquarePageAsyncUsingParameters:(UserWS_getEBolgSquarePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)updateEBlogUsingParameters:(UserWS_updateEBlog *)aParameters ;
- (void)updateEBlogAsyncUsingParameters:(UserWS_updateEBlog *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)updateClassNoticeUsingParameters:(UserWS_updateClassNotice *)aParameters ;
- (void)updateClassNoticeAsyncUsingParameters:(UserWS_updateClassNotice *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getOnLineHomeWorkDetailsUsingParameters:(UserWS_getOnLineHomeWorkDetails *)aParameters ;
- (void)getOnLineHomeWorkDetailsAsyncUsingParameters:(UserWS_getOnLineHomeWorkDetails *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addActivityReviewUsingParameters:(UserWS_addActivityReview *)aParameters ;
- (void)addActivityReviewAsyncUsingParameters:(UserWS_addActivityReview *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getOnlineClassPageUsingParameters:(UserWS_getOnlineClassPage *)aParameters ;
- (void)getOnlineClassPageAsyncUsingParameters:(UserWS_getOnlineClassPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getRelaClassCirlInfoUsingParameters:(UserWS_getRelaClassCirlInfo *)aParameters ;
- (void)getRelaClassCirlInfoAsyncUsingParameters:(UserWS_getRelaClassCirlInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getMessageSeesionPageUsingParameters:(UserWS_getMessageSeesionPage *)aParameters ;
- (void)getMessageSeesionPageAsyncUsingParameters:(UserWS_getMessageSeesionPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getDynamicsPageUsingParameters:(UserWS_getDynamicsPage *)aParameters ;
- (void)getDynamicsPageAsyncUsingParameters:(UserWS_getDynamicsPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)findPrivilegeListByUserIdUsingParameters:(UserWS_findPrivilegeListByUserId *)aParameters ;
- (void)findPrivilegeListByUserIdAsyncUsingParameters:(UserWS_findPrivilegeListByUserId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getPreparationFilePageUsingParameters:(UserWS_getPreparationFilePage *)aParameters ;
- (void)getPreparationFilePageAsyncUsingParameters:(UserWS_getPreparationFilePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getAttentionPageUsingParameters:(UserWS_getAttentionPage *)aParameters ;
- (void)getAttentionPageAsyncUsingParameters:(UserWS_getAttentionPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)loginAuthUsingParameters:(UserWS_loginAuth *)aParameters ;
- (void)loginAuthAsyncUsingParameters:(UserWS_loginAuth *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCircleUsersPageUsingParameters:(UserWS_getCircleUsersPage *)aParameters ;
- (void)getCircleUsersPageAsyncUsingParameters:(UserWS_getCircleUsersPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getHomeWorkDetailsUsingParameters:(UserWS_getHomeWorkDetails *)aParameters ;
- (void)getHomeWorkDetailsAsyncUsingParameters:(UserWS_getHomeWorkDetails *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)markEBlogManUsingParameters:(UserWS_markEBlogMan *)aParameters ;
- (void)markEBlogManAsyncUsingParameters:(UserWS_markEBlogMan *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCurriculumUsingParameters:(UserWS_getCurriculum *)aParameters ;
- (void)getCurriculumAsyncUsingParameters:(UserWS_getCurriculum *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCommentPageUsingParameters:(UserWS_getCommentPage *)aParameters ;
- (void)getCommentPageAsyncUsingParameters:(UserWS_getCommentPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getHomeWorkCompleteUsingParameters:(UserWS_getHomeWorkComplete *)aParameters ;
- (void)getHomeWorkCompleteAsyncUsingParameters:(UserWS_getHomeWorkComplete *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWritingListUsingParameters:(UserWS_getWritingList *)aParameters ;
- (void)getWritingListAsyncUsingParameters:(UserWS_getWritingList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWorkCompleteForTeacherUsingParameters:(UserWS_getWorkCompleteForTeacher *)aParameters ;
- (void)getWorkCompleteForTeacherAsyncUsingParameters:(UserWS_getWorkCompleteForTeacher *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)prePackageReviewUsingParameters:(UserWS_prePackageReview *)aParameters ;
- (void)prePackageReviewAsyncUsingParameters:(UserWS_prePackageReview *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getStepListByStepIdUsingParameters:(UserWS_getStepListByStepId *)aParameters ;
- (void)getStepListByStepIdAsyncUsingParameters:(UserWS_getStepListByStepId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addTodayHomeWorkUsingParameters:(UserWS_addTodayHomeWork *)aParameters ;
- (void)addTodayHomeWorkAsyncUsingParameters:(UserWS_addTodayHomeWork *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getResultsFBPageUsingParameters:(UserWS_getResultsFBPage *)aParameters ;
- (void)getResultsFBPageAsyncUsingParameters:(UserWS_getResultsFBPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getTodayHomeWorkInfoUsingParameters:(UserWS_getTodayHomeWorkInfo *)aParameters ;
- (void)getTodayHomeWorkInfoAsyncUsingParameters:(UserWS_getTodayHomeWorkInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getClassActiveMsgUsingParameters:(UserWS_getClassActiveMsg *)aParameters ;
- (void)getClassActiveMsgAsyncUsingParameters:(UserWS_getClassActiveMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCurriculumByClassIdUsingParameters:(UserWS_getCurriculumByClassId *)aParameters ;
- (void)getCurriculumByClassIdAsyncUsingParameters:(UserWS_getCurriculumByClassId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getEBolgPageUsingParameters:(UserWS_getEBolgPage *)aParameters ;
- (void)getEBolgPageAsyncUsingParameters:(UserWS_getEBolgPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)findNewsActivityTopByOrgIdUsingParameters:(UserWS_findNewsActivityTopByOrgId *)aParameters ;
- (void)findNewsActivityTopByOrgIdAsyncUsingParameters:(UserWS_findNewsActivityTopByOrgId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getClassStudentsListUsingParameters:(UserWS_getClassStudentsList *)aParameters ;
- (void)getClassStudentsListAsyncUsingParameters:(UserWS_getClassStudentsList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWriteReviewPageUsingParameters:(UserWS_getWriteReviewPage *)aParameters ;
- (void)getWriteReviewPageAsyncUsingParameters:(UserWS_getWriteReviewPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getResourcesFilePageUsingParameters:(UserWS_getResourcesFilePage *)aParameters ;
- (void)getResourcesFilePageAsyncUsingParameters:(UserWS_getResourcesFilePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getModuleIsUpdateUsingParameters:(UserWS_getModuleIsUpdate *)aParameters ;
- (void)getModuleIsUpdateAsyncUsingParameters:(UserWS_getModuleIsUpdate *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getAnnouncementMsgUsingParameters:(UserWS_getAnnouncementMsg *)aParameters ;
- (void)getAnnouncementMsgAsyncUsingParameters:(UserWS_getAnnouncementMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getEBMsgUsingParameters:(UserWS_getEBMsg *)aParameters ;
- (void)getEBMsgAsyncUsingParameters:(UserWS_getEBMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCommentUsingParameters:(UserWS_getComment *)aParameters ;
- (void)getCommentAsyncUsingParameters:(UserWS_getComment *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)findRealClassInfoByUserIdUsingParameters:(UserWS_findRealClassInfoByUserId *)aParameters ;
- (void)findRealClassInfoByUserIdAsyncUsingParameters:(UserWS_findRealClassInfoByUserId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)saveImageUsingParameters:(UserWS_saveImage *)aParameters ;
- (void)saveImageAsyncUsingParameters:(UserWS_saveImage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getPackageReviewUsingParameters:(UserWS_getPackageReview *)aParameters ;
- (void)getPackageReviewAsyncUsingParameters:(UserWS_getPackageReview *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getActivityPageUsingParameters:(UserWS_getActivityPage *)aParameters ;
- (void)getActivityPageAsyncUsingParameters:(UserWS_getActivityPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)cancelAttentionUsingParameters:(UserWS_cancelAttention *)aParameters ;
- (void)cancelAttentionAsyncUsingParameters:(UserWS_cancelAttention *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)delClassNoticeUsingParameters:(UserWS_delClassNotice *)aParameters ;
- (void)delClassNoticeAsyncUsingParameters:(UserWS_delClassNotice *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getMessageSendInfoPageUsingParameters:(UserWS_getMessageSendInfoPage *)aParameters ;
- (void)getMessageSendInfoPageAsyncUsingParameters:(UserWS_getMessageSendInfoPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWorkListUsingParameters:(UserWS_getWorkList *)aParameters ;
- (void)getWorkListAsyncUsingParameters:(UserWS_getWorkList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getWordMarkingUsingParameters:(UserWS_getWordMarking *)aParameters ;
- (void)getWordMarkingAsyncUsingParameters:(UserWS_getWordMarking *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getStepMsgByStepIdUsingParameters:(UserWS_getStepMsgByStepId *)aParameters ;
- (void)getStepMsgByStepIdAsyncUsingParameters:(UserWS_getStepMsgByStepId *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getBlackHomeWorkDetailsUsingParameters:(UserWS_getBlackHomeWorkDetails *)aParameters ;
- (void)getBlackHomeWorkDetailsAsyncUsingParameters:(UserWS_getBlackHomeWorkDetails *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getActivityReviewPageUsingParameters:(UserWS_getActivityReviewPage *)aParameters ;
- (void)getActivityReviewPageAsyncUsingParameters:(UserWS_getActivityReviewPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getEBolgEManPageUsingParameters:(UserWS_getEBolgEManPage *)aParameters ;
- (void)getEBolgEManPageAsyncUsingParameters:(UserWS_getEBolgEManPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getPersonalHomePageUsingParameters:(UserWS_getPersonalHomePage *)aParameters ;
- (void)getPersonalHomePageAsyncUsingParameters:(UserWS_getPersonalHomePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addClassNoticeUsingParameters:(UserWS_addClassNotice *)aParameters ;
- (void)addClassNoticeAsyncUsingParameters:(UserWS_addClassNotice *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getContactsListUsingParameters:(UserWS_getContactsList *)aParameters ;
- (void)getContactsListAsyncUsingParameters:(UserWS_getContactsList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)joniActivityUsingParameters:(UserWS_joniActivity *)aParameters ;
- (void)joniActivityAsyncUsingParameters:(UserWS_joniActivity *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCircleListUsingParameters:(UserWS_getCircleList *)aParameters ;
- (void)getCircleListAsyncUsingParameters:(UserWS_getCircleList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getAnnouncementPageUsingParameters:(UserWS_getAnnouncementPage *)aParameters ;
- (void)getAnnouncementPageAsyncUsingParameters:(UserWS_getAnnouncementPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)attentionToUsingParameters:(UserWS_attentionTo *)aParameters ;
- (void)attentionToAsyncUsingParameters:(UserWS_attentionTo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)updateHomeWorkStateUsingParameters:(UserWS_updateHomeWorkState *)aParameters ;
- (void)updateHomeWorkStateAsyncUsingParameters:(UserWS_updateHomeWorkState *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)deleteMessageSessionInfoUsingParameters:(UserWS_deleteMessageSessionInfo *)aParameters ;
- (void)deleteMessageSessionInfoAsyncUsingParameters:(UserWS_deleteMessageSessionInfo *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getCirclePageUsingParameters:(UserWS_getCirclePage *)aParameters ;
- (void)getCirclePageAsyncUsingParameters:(UserWS_getCirclePage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getSubjectListUsingParameters:(UserWS_getSubjectList *)aParameters ;
- (void)getSubjectListAsyncUsingParameters:(UserWS_getSubjectList *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getNewsPageUsingParameters:(UserWS_getNewsPage *)aParameters ;
- (void)getNewsPageAsyncUsingParameters:(UserWS_getNewsPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getOnLineWorkPageUsingParameters:(UserWS_getOnLineWorkPage *)aParameters ;
- (void)getOnLineWorkPageAsyncUsingParameters:(UserWS_getOnLineWorkPage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getkhWorkMsgUsingParameters:(UserWS_getkhWorkMsg *)aParameters ;
- (void)getkhWorkMsgAsyncUsingParameters:(UserWS_getkhWorkMsg *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)LaudOrDeleteLaudUsingParameters:(UserWS_LaudOrDeleteLaud *)aParameters ;
- (void)LaudOrDeleteLaudAsyncUsingParameters:(UserWS_LaudOrDeleteLaud *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)addStudentCommentUsingParameters:(UserWS_addStudentComment *)aParameters ;
- (void)addStudentCommentAsyncUsingParameters:(UserWS_addStudentComment *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getEboTalkDetailsUsingParameters:(UserWS_getEboTalkDetails *)aParameters ;
- (void)getEboTalkDetailsAsyncUsingParameters:(UserWS_getEboTalkDetails *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)getNetWorkClassRoomUsingParameters:(UserWS_getNetWorkClassRoom *)aParameters ;
- (void)getNetWorkClassRoomAsyncUsingParameters:(UserWS_getNetWorkClassRoom *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
- (UserWSHttpBindingResponse *)sentMessageUsingParameters:(UserWS_sentMessage *)aParameters ;
- (void)sentMessageAsyncUsingParameters:(UserWS_sentMessage *)aParameters  delegate:(id<UserWSHttpBindingResponseDelegate>)responseDelegate;
@end
@interface UserWSHttpBindingOperation : NSOperation {
	UserWSHttpBinding *binding;
	UserWSHttpBindingResponse *response;
	id<UserWSHttpBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) UserWSHttpBinding *binding;
@property (readonly) UserWSHttpBindingResponse *response;
@property (nonatomic, assign) id<UserWSHttpBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate;
@end
@interface UserWSHttpBinding_publishWorks : UserWSHttpBindingOperation {
	UserWS_publishWorks * parameters;
}
@property (retain) UserWS_publishWorks * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_publishWorks *)aParameters
;
@end
@interface UserWSHttpBinding_getMarkQueryInfo : UserWSHttpBindingOperation {
	UserWS_getMarkQueryInfo * parameters;
}
@property (retain) UserWS_getMarkQueryInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getMarkQueryInfo *)aParameters
;
@end
@interface UserWSHttpBinding_sendEboTalkAboutInfo : UserWSHttpBindingOperation {
	UserWS_sendEboTalkAboutInfo * parameters;
}
@property (retain) UserWS_sendEboTalkAboutInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_sendEboTalkAboutInfo *)aParameters
;
@end
@interface UserWSHttpBinding_getReviewPageInfo : UserWSHttpBindingOperation {
	UserWS_getReviewPageInfo * parameters;
}
@property (retain) UserWS_getReviewPageInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getReviewPageInfo *)aParameters
;
@end
@interface UserWSHttpBinding_addWriteReview : UserWSHttpBindingOperation {
	UserWS_addWriteReview * parameters;
}
@property (retain) UserWS_addWriteReview * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addWriteReview *)aParameters
;
@end
@interface UserWSHttpBinding_reviewTalkAboutInfo : UserWSHttpBindingOperation {
	UserWS_reviewTalkAboutInfo * parameters;
}
@property (retain) UserWS_reviewTalkAboutInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_reviewTalkAboutInfo *)aParameters
;
@end
@interface UserWSHttpBinding_getUserMsg : UserWSHttpBindingOperation {
	UserWS_getUserMsg * parameters;
}
@property (retain) UserWS_getUserMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getUserMsg *)aParameters
;
@end
@interface UserWSHttpBinding_delEBlog : UserWSHttpBindingOperation {
	UserWS_delEBlog * parameters;
}
@property (retain) UserWS_delEBlog * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_delEBlog *)aParameters
;
@end
@interface UserWSHttpBinding_findNewsByOrgId : UserWSHttpBindingOperation {
	UserWS_findNewsByOrgId * parameters;
}
@property (retain) UserWS_findNewsByOrgId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_findNewsByOrgId *)aParameters
;
@end
@interface UserWSHttpBinding_getPLetterPage : UserWSHttpBindingOperation {
	UserWS_getPLetterPage * parameters;
}
@property (retain) UserWS_getPLetterPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getPLetterPage *)aParameters
;
@end
@interface UserWSHttpBinding_getClassActivePage : UserWSHttpBindingOperation {
	UserWS_getClassActivePage * parameters;
}
@property (retain) UserWS_getClassActivePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getClassActivePage *)aParameters
;
@end
@interface UserWSHttpBinding_getResultMsgPage : UserWSHttpBindingOperation {
	UserWS_getResultMsgPage * parameters;
}
@property (retain) UserWS_getResultMsgPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getResultMsgPage *)aParameters
;
@end
@interface UserWSHttpBinding_getWorkCompleteForParents : UserWSHttpBindingOperation {
	UserWS_getWorkCompleteForParents * parameters;
}
@property (retain) UserWS_getWorkCompleteForParents * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWorkCompleteForParents *)aParameters
;
@end
@interface UserWSHttpBinding_getPLetterMsg : UserWSHttpBindingOperation {
	UserWS_getPLetterMsg * parameters;
}
@property (retain) UserWS_getPLetterMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getPLetterMsg *)aParameters
;
@end
@interface UserWSHttpBinding_judgeActivityJoin : UserWSHttpBindingOperation {
	UserWS_judgeActivityJoin * parameters;
}
@property (retain) UserWS_judgeActivityJoin * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_judgeActivityJoin *)aParameters
;
@end
@interface UserWSHttpBinding_getStudentById : UserWSHttpBindingOperation {
	UserWS_getStudentById * parameters;
}
@property (retain) UserWS_getStudentById * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getStudentById *)aParameters
;
@end
@interface UserWSHttpBinding_addEBlog : UserWSHttpBindingOperation {
	UserWS_addEBlog * parameters;
}
@property (retain) UserWS_addEBlog * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addEBlog *)aParameters
;
@end
@interface UserWSHttpBinding_getEBolgSquarePage : UserWSHttpBindingOperation {
	UserWS_getEBolgSquarePage * parameters;
}
@property (retain) UserWS_getEBolgSquarePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getEBolgSquarePage *)aParameters
;
@end
@interface UserWSHttpBinding_updateEBlog : UserWSHttpBindingOperation {
	UserWS_updateEBlog * parameters;
}
@property (retain) UserWS_updateEBlog * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_updateEBlog *)aParameters
;
@end
@interface UserWSHttpBinding_updateClassNotice : UserWSHttpBindingOperation {
	UserWS_updateClassNotice * parameters;
}
@property (retain) UserWS_updateClassNotice * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_updateClassNotice *)aParameters
;
@end
@interface UserWSHttpBinding_getOnLineHomeWorkDetails : UserWSHttpBindingOperation {
	UserWS_getOnLineHomeWorkDetails * parameters;
}
@property (retain) UserWS_getOnLineHomeWorkDetails * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getOnLineHomeWorkDetails *)aParameters
;
@end
@interface UserWSHttpBinding_addActivityReview : UserWSHttpBindingOperation {
	UserWS_addActivityReview * parameters;
}
@property (retain) UserWS_addActivityReview * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addActivityReview *)aParameters
;
@end
@interface UserWSHttpBinding_getOnlineClassPage : UserWSHttpBindingOperation {
	UserWS_getOnlineClassPage * parameters;
}
@property (retain) UserWS_getOnlineClassPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getOnlineClassPage *)aParameters
;
@end
@interface UserWSHttpBinding_getRelaClassCirlInfo : UserWSHttpBindingOperation {
	UserWS_getRelaClassCirlInfo * parameters;
}
@property (retain) UserWS_getRelaClassCirlInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getRelaClassCirlInfo *)aParameters
;
@end
@interface UserWSHttpBinding_getMessageSeesionPage : UserWSHttpBindingOperation {
	UserWS_getMessageSeesionPage * parameters;
}
@property (retain) UserWS_getMessageSeesionPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getMessageSeesionPage *)aParameters
;
@end
@interface UserWSHttpBinding_getDynamicsPage : UserWSHttpBindingOperation {
	UserWS_getDynamicsPage * parameters;
}
@property (retain) UserWS_getDynamicsPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getDynamicsPage *)aParameters
;
@end
@interface UserWSHttpBinding_findPrivilegeListByUserId : UserWSHttpBindingOperation {
	UserWS_findPrivilegeListByUserId * parameters;
}
@property (retain) UserWS_findPrivilegeListByUserId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_findPrivilegeListByUserId *)aParameters
;
@end
@interface UserWSHttpBinding_getPreparationFilePage : UserWSHttpBindingOperation {
	UserWS_getPreparationFilePage * parameters;
}
@property (retain) UserWS_getPreparationFilePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getPreparationFilePage *)aParameters
;
@end
@interface UserWSHttpBinding_getAttentionPage : UserWSHttpBindingOperation {
	UserWS_getAttentionPage * parameters;
}
@property (retain) UserWS_getAttentionPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getAttentionPage *)aParameters
;
@end
@interface UserWSHttpBinding_loginAuth : UserWSHttpBindingOperation {
	UserWS_loginAuth * parameters;
}
@property (retain) UserWS_loginAuth * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_loginAuth *)aParameters
;
@end
@interface UserWSHttpBinding_getCircleUsersPage : UserWSHttpBindingOperation {
	UserWS_getCircleUsersPage * parameters;
}
@property (retain) UserWS_getCircleUsersPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCircleUsersPage *)aParameters
;
@end
@interface UserWSHttpBinding_getHomeWorkDetails : UserWSHttpBindingOperation {
	UserWS_getHomeWorkDetails * parameters;
}
@property (retain) UserWS_getHomeWorkDetails * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getHomeWorkDetails *)aParameters
;
@end
@interface UserWSHttpBinding_markEBlogMan : UserWSHttpBindingOperation {
	UserWS_markEBlogMan * parameters;
}
@property (retain) UserWS_markEBlogMan * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_markEBlogMan *)aParameters
;
@end
@interface UserWSHttpBinding_getCurriculum : UserWSHttpBindingOperation {
	UserWS_getCurriculum * parameters;
}
@property (retain) UserWS_getCurriculum * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCurriculum *)aParameters
;
@end
@interface UserWSHttpBinding_getCommentPage : UserWSHttpBindingOperation {
	UserWS_getCommentPage * parameters;
}
@property (retain) UserWS_getCommentPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCommentPage *)aParameters
;
@end
@interface UserWSHttpBinding_getHomeWorkComplete : UserWSHttpBindingOperation {
	UserWS_getHomeWorkComplete * parameters;
}
@property (retain) UserWS_getHomeWorkComplete * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getHomeWorkComplete *)aParameters
;
@end
@interface UserWSHttpBinding_getWritingList : UserWSHttpBindingOperation {
	UserWS_getWritingList * parameters;
}
@property (retain) UserWS_getWritingList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWritingList *)aParameters
;
@end
@interface UserWSHttpBinding_getWorkCompleteForTeacher : UserWSHttpBindingOperation {
	UserWS_getWorkCompleteForTeacher * parameters;
}
@property (retain) UserWS_getWorkCompleteForTeacher * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWorkCompleteForTeacher *)aParameters
;
@end
@interface UserWSHttpBinding_prePackageReview : UserWSHttpBindingOperation {
	UserWS_prePackageReview * parameters;
}
@property (retain) UserWS_prePackageReview * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_prePackageReview *)aParameters
;
@end
@interface UserWSHttpBinding_getStepListByStepId : UserWSHttpBindingOperation {
	UserWS_getStepListByStepId * parameters;
}
@property (retain) UserWS_getStepListByStepId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getStepListByStepId *)aParameters
;
@end
@interface UserWSHttpBinding_addTodayHomeWork : UserWSHttpBindingOperation {
	UserWS_addTodayHomeWork * parameters;
}
@property (retain) UserWS_addTodayHomeWork * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addTodayHomeWork *)aParameters
;
@end
@interface UserWSHttpBinding_getResultsFBPage : UserWSHttpBindingOperation {
	UserWS_getResultsFBPage * parameters;
}
@property (retain) UserWS_getResultsFBPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getResultsFBPage *)aParameters
;
@end
@interface UserWSHttpBinding_getTodayHomeWorkInfo : UserWSHttpBindingOperation {
	UserWS_getTodayHomeWorkInfo * parameters;
}
@property (retain) UserWS_getTodayHomeWorkInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getTodayHomeWorkInfo *)aParameters
;
@end
@interface UserWSHttpBinding_getClassActiveMsg : UserWSHttpBindingOperation {
	UserWS_getClassActiveMsg * parameters;
}
@property (retain) UserWS_getClassActiveMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getClassActiveMsg *)aParameters
;
@end
@interface UserWSHttpBinding_getCurriculumByClassId : UserWSHttpBindingOperation {
	UserWS_getCurriculumByClassId * parameters;
}
@property (retain) UserWS_getCurriculumByClassId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCurriculumByClassId *)aParameters
;
@end
@interface UserWSHttpBinding_getEBolgPage : UserWSHttpBindingOperation {
	UserWS_getEBolgPage * parameters;
}
@property (retain) UserWS_getEBolgPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getEBolgPage *)aParameters
;
@end
@interface UserWSHttpBinding_findNewsActivityTopByOrgId : UserWSHttpBindingOperation {
	UserWS_findNewsActivityTopByOrgId * parameters;
}
@property (retain) UserWS_findNewsActivityTopByOrgId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_findNewsActivityTopByOrgId *)aParameters
;
@end
@interface UserWSHttpBinding_getClassStudentsList : UserWSHttpBindingOperation {
	UserWS_getClassStudentsList * parameters;
}
@property (retain) UserWS_getClassStudentsList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getClassStudentsList *)aParameters
;
@end
@interface UserWSHttpBinding_getWriteReviewPage : UserWSHttpBindingOperation {
	UserWS_getWriteReviewPage * parameters;
}
@property (retain) UserWS_getWriteReviewPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWriteReviewPage *)aParameters
;
@end
@interface UserWSHttpBinding_getResourcesFilePage : UserWSHttpBindingOperation {
	UserWS_getResourcesFilePage * parameters;
}
@property (retain) UserWS_getResourcesFilePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getResourcesFilePage *)aParameters
;
@end
@interface UserWSHttpBinding_getModuleIsUpdate : UserWSHttpBindingOperation {
	UserWS_getModuleIsUpdate * parameters;
}
@property (retain) UserWS_getModuleIsUpdate * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getModuleIsUpdate *)aParameters
;
@end
@interface UserWSHttpBinding_getAnnouncementMsg : UserWSHttpBindingOperation {
	UserWS_getAnnouncementMsg * parameters;
}
@property (retain) UserWS_getAnnouncementMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getAnnouncementMsg *)aParameters
;
@end
@interface UserWSHttpBinding_getEBMsg : UserWSHttpBindingOperation {
	UserWS_getEBMsg * parameters;
}
@property (retain) UserWS_getEBMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getEBMsg *)aParameters
;
@end
@interface UserWSHttpBinding_getComment : UserWSHttpBindingOperation {
	UserWS_getComment * parameters;
}
@property (retain) UserWS_getComment * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getComment *)aParameters
;
@end
@interface UserWSHttpBinding_findRealClassInfoByUserId : UserWSHttpBindingOperation {
	UserWS_findRealClassInfoByUserId * parameters;
}
@property (retain) UserWS_findRealClassInfoByUserId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_findRealClassInfoByUserId *)aParameters
;
@end
@interface UserWSHttpBinding_saveImage : UserWSHttpBindingOperation {
	UserWS_saveImage * parameters;
}
@property (retain) UserWS_saveImage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_saveImage *)aParameters
;
@end
@interface UserWSHttpBinding_getPackageReview : UserWSHttpBindingOperation {
	UserWS_getPackageReview * parameters;
}
@property (retain) UserWS_getPackageReview * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getPackageReview *)aParameters
;
@end
@interface UserWSHttpBinding_getActivityPage : UserWSHttpBindingOperation {
	UserWS_getActivityPage * parameters;
}
@property (retain) UserWS_getActivityPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getActivityPage *)aParameters
;
@end
@interface UserWSHttpBinding_cancelAttention : UserWSHttpBindingOperation {
	UserWS_cancelAttention * parameters;
}
@property (retain) UserWS_cancelAttention * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_cancelAttention *)aParameters
;
@end
@interface UserWSHttpBinding_delClassNotice : UserWSHttpBindingOperation {
	UserWS_delClassNotice * parameters;
}
@property (retain) UserWS_delClassNotice * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_delClassNotice *)aParameters
;
@end
@interface UserWSHttpBinding_getMessageSendInfoPage : UserWSHttpBindingOperation {
	UserWS_getMessageSendInfoPage * parameters;
}
@property (retain) UserWS_getMessageSendInfoPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getMessageSendInfoPage *)aParameters
;
@end
@interface UserWSHttpBinding_getWorkList : UserWSHttpBindingOperation {
	UserWS_getWorkList * parameters;
}
@property (retain) UserWS_getWorkList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWorkList *)aParameters
;
@end
@interface UserWSHttpBinding_getWordMarking : UserWSHttpBindingOperation {
	UserWS_getWordMarking * parameters;
}
@property (retain) UserWS_getWordMarking * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getWordMarking *)aParameters
;
@end
@interface UserWSHttpBinding_getStepMsgByStepId : UserWSHttpBindingOperation {
	UserWS_getStepMsgByStepId * parameters;
}
@property (retain) UserWS_getStepMsgByStepId * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getStepMsgByStepId *)aParameters
;
@end
@interface UserWSHttpBinding_getBlackHomeWorkDetails : UserWSHttpBindingOperation {
	UserWS_getBlackHomeWorkDetails * parameters;
}
@property (retain) UserWS_getBlackHomeWorkDetails * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getBlackHomeWorkDetails *)aParameters
;
@end
@interface UserWSHttpBinding_getActivityReviewPage : UserWSHttpBindingOperation {
	UserWS_getActivityReviewPage * parameters;
}
@property (retain) UserWS_getActivityReviewPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getActivityReviewPage *)aParameters
;
@end
@interface UserWSHttpBinding_getEBolgEManPage : UserWSHttpBindingOperation {
	UserWS_getEBolgEManPage * parameters;
}
@property (retain) UserWS_getEBolgEManPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getEBolgEManPage *)aParameters
;
@end
@interface UserWSHttpBinding_getPersonalHomePage : UserWSHttpBindingOperation {
	UserWS_getPersonalHomePage * parameters;
}
@property (retain) UserWS_getPersonalHomePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getPersonalHomePage *)aParameters
;
@end
@interface UserWSHttpBinding_addClassNotice : UserWSHttpBindingOperation {
	UserWS_addClassNotice * parameters;
}
@property (retain) UserWS_addClassNotice * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addClassNotice *)aParameters
;
@end
@interface UserWSHttpBinding_getContactsList : UserWSHttpBindingOperation {
	UserWS_getContactsList * parameters;
}
@property (retain) UserWS_getContactsList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getContactsList *)aParameters
;
@end
@interface UserWSHttpBinding_joniActivity : UserWSHttpBindingOperation {
	UserWS_joniActivity * parameters;
}
@property (retain) UserWS_joniActivity * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_joniActivity *)aParameters
;
@end
@interface UserWSHttpBinding_getCircleList : UserWSHttpBindingOperation {
	UserWS_getCircleList * parameters;
}
@property (retain) UserWS_getCircleList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCircleList *)aParameters
;
@end
@interface UserWSHttpBinding_getAnnouncementPage : UserWSHttpBindingOperation {
	UserWS_getAnnouncementPage * parameters;
}
@property (retain) UserWS_getAnnouncementPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getAnnouncementPage *)aParameters
;
@end
@interface UserWSHttpBinding_attentionTo : UserWSHttpBindingOperation {
	UserWS_attentionTo * parameters;
}
@property (retain) UserWS_attentionTo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_attentionTo *)aParameters
;
@end
@interface UserWSHttpBinding_updateHomeWorkState : UserWSHttpBindingOperation {
	UserWS_updateHomeWorkState * parameters;
}
@property (retain) UserWS_updateHomeWorkState * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_updateHomeWorkState *)aParameters
;
@end
@interface UserWSHttpBinding_deleteMessageSessionInfo : UserWSHttpBindingOperation {
	UserWS_deleteMessageSessionInfo * parameters;
}
@property (retain) UserWS_deleteMessageSessionInfo * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_deleteMessageSessionInfo *)aParameters
;
@end
@interface UserWSHttpBinding_getCirclePage : UserWSHttpBindingOperation {
	UserWS_getCirclePage * parameters;
}
@property (retain) UserWS_getCirclePage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getCirclePage *)aParameters
;
@end
@interface UserWSHttpBinding_getSubjectList : UserWSHttpBindingOperation {
	UserWS_getSubjectList * parameters;
}
@property (retain) UserWS_getSubjectList * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getSubjectList *)aParameters
;
@end
@interface UserWSHttpBinding_getNewsPage : UserWSHttpBindingOperation {
	UserWS_getNewsPage * parameters;
}
@property (retain) UserWS_getNewsPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getNewsPage *)aParameters
;
@end
@interface UserWSHttpBinding_getOnLineWorkPage : UserWSHttpBindingOperation {
	UserWS_getOnLineWorkPage * parameters;
}
@property (retain) UserWS_getOnLineWorkPage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getOnLineWorkPage *)aParameters
;
@end
@interface UserWSHttpBinding_getkhWorkMsg : UserWSHttpBindingOperation {
	UserWS_getkhWorkMsg * parameters;
}
@property (retain) UserWS_getkhWorkMsg * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getkhWorkMsg *)aParameters
;
@end
@interface UserWSHttpBinding_LaudOrDeleteLaud : UserWSHttpBindingOperation {
	UserWS_LaudOrDeleteLaud * parameters;
}
@property (retain) UserWS_LaudOrDeleteLaud * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_LaudOrDeleteLaud *)aParameters
;
@end
@interface UserWSHttpBinding_addStudentComment : UserWSHttpBindingOperation {
	UserWS_addStudentComment * parameters;
}
@property (retain) UserWS_addStudentComment * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_addStudentComment *)aParameters
;
@end
@interface UserWSHttpBinding_getEboTalkDetails : UserWSHttpBindingOperation {
	UserWS_getEboTalkDetails * parameters;
}
@property (retain) UserWS_getEboTalkDetails * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getEboTalkDetails *)aParameters
;
@end
@interface UserWSHttpBinding_getNetWorkClassRoom : UserWSHttpBindingOperation {
	UserWS_getNetWorkClassRoom * parameters;
}
@property (retain) UserWS_getNetWorkClassRoom * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_getNetWorkClassRoom *)aParameters
;
@end
@interface UserWSHttpBinding_sentMessage : UserWSHttpBindingOperation {
	UserWS_sentMessage * parameters;
}
@property (retain) UserWS_sentMessage * parameters;
- (id)initWithBinding:(UserWSHttpBinding *)aBinding delegate:(id<UserWSHttpBindingResponseDelegate>)aDelegate
	parameters:(UserWS_sentMessage *)aParameters
;
@end
@interface UserWSHttpBinding_envelope : NSObject {
}
+ (UserWSHttpBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface UserWSHttpBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
