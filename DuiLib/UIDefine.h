#pragma once
//////////////BEGIN消息映射宏定义////////////////////////////////////////////////////
///

namespace DuiLib
{

	//定义所有消息类型
	//////////////////////////////////////////////////////////////////////////

#define DUI_MSGTYPE_MENU                   (_T("menu"))
#define DUI_MSGTYPE_LINK                   (_T("link"))

#define DUI_MSGTYPE_TIMER                  (_T("timer"))
#define DUI_MSGTYPE_CLICK                  (_T("click"))

#define DUI_MSGTYPE_RETURN                 (_T("return"))
#define DUI_MSGTYPE_RETURN_KEYUP           (_T("return_keyup")) // Add this to avoid when keydown close window then keyup back to parent/owner window
#define DUI_MSGTYPE_SCROLL                 (_T("scroll"))

#define DUI_MSGTYPE_BEFOREDROPDOWN		   (_T("cmb_before_dropdown"))
#define DUI_MSGTYPE_AFTERDROPDOWN		   (_T("cmb_after_dropdown"))
#define DUI_MSGTYPE_DROPDOWNCLOSED		   (_T("cmb_dropdown_closed"))

#define DUI_MSGTYPE_SETFOCUS               (_T("setfocus"))

#define DUI_MSGTYPE_KILLFOCUS              (_T("killfocus"))
#define DUI_MSGTYPE_ITEMCLICK 		   	   (_T("itemclick"))
#define DUI_MSGTYPE_TABSELECT              (_T("tabselect"))

#define DUI_MSGTYPE_ITEMSELECT 		   	   (_T("itemselect"))
#define DUI_MSGTYPE_ITEMEXPAND             (_T("itemexpand"))
#define DUI_MSGTYPE_WINDOWINIT             (_T("windowinit"))
#define DUI_MSGTYPE_BUTTONDOWN 		   	   (_T("buttondown"))
#define DUI_MSGTYPE_MOUSEENTER			   (_T("mouseenter"))
#define DUI_MSGTYPE_MOUSELEAVE			   (_T("mouseleave"))
#define DUI_MSGTYPE_RBUTTONDOWN			   (_T("rbuttondown"))
#define DUI_MSGTYPE_RBUTTONUP			   (_T("rbuttonup"))
#define DUI_MSGTYPE_CONTEXTMENU			   (_T("contextmenu"))

#define DUI_MSGTYPE_TEXTCHANGED            (_T("textchanged"))
#define DUI_MSGTYPE_HEADERCLICK            (_T("headerclick"))
#define DUI_MSGTYPE_ITEMDBCLICK            (_T("itemdbclick"))

#define DUI_MSGTYPE_ITEMCOLLAPSE           (_T("itemcollapse"))
#define DUI_MSGTYPE_ITEMACTIVATE           (_T("itemactivate"))
#define DUI_MSGTYPE_VALUECHANGED           (_T("valuechanged"))

#define DUI_MSGTYPE_SELECTCHANGED 		   (_T("selectchanged"))

#define DUI_MSGTYPE_FOCUS_INDICATOR 		   (_T("focus_indicator_changed"))
//query custom accessibility name, lParam is buffer ptr, wParam is buffer length
#define DUI_MSGTYPE_QUERY_ACC_NAME                (_T("query_acc_name")) 
#define DUI_MSGTYPE_QUERY_ACC_STATUS              _T("query_acc_status")
//query custom accessibility value, lParam is buffer ptr, wParam is buffer length
//for controls which has value, like Edit, combobox, slide control...
#define DUI_MSGTYPE_QUERY_ACC_VALUE               (_T("query_acc_value"))

#define DUI_MSGTYPE_WIN_EDIT_START         (_T("win_edit_start")) //for CEditUI only
#define DUI_MSGTYPE_WIN_EDIT_END		   (_T("win_edit_end"))	  //for CEditUI only	
#define DUI_MSGTYPE_WIN_DOWN_ARROW_PRESSED     (_T("win_down_arrow_pressed"))
//#ifdef DUILIB_ZOOM_EXT
#define DUI_MSGTYPE_DLG_IDOK			   (_T("dialogidok"))
#define DUI_MSGTYPE_DLG_IDCANCEL		   (_T("dialogidcancel"))

#define DUI_MSGTYPE_RICHEDITREQSIZE		   (_T("richeditreqsize"))
#define DUI_MSGTYPE_LISTSCROLL             (_T("listscroll"))
#define DUI_MSGTYPE_LISTUPDATED			   (_T("listupdated"))

#define DUI_MSGTYPE_SEP_AREA_DRAG			(_T("sep_area_drag")) //for UIVerticalLayout and UIHorizontalLayout
//#endif
//////////////////////////////////////////////////////////////////////////


//////////////BEGIN控件名称宏定义//////////////////////////////////////////////////
///

#define  DUI_CTR_EDIT                            (_T("Edit"))
#define  DUI_CTR_LIST                            (_T("List"))
#define  DUI_CTR_TEXT                            (_T("Text"))
#define	 DUI_CTR_ICON							 (_T("Icon"))

#define  DUI_CTR_COMBO                           (_T("Combo"))
#define  DUI_CTR_LABEL                           (_T("Label"))

#define  DUI_CTR_BUTTON                          (_T("Button"))
#define  DUI_CTR_OPTION                          (_T("Option"))
#define  DUI_CTR_SLIDER                          (_T("Slider"))

#define  DUI_CTR_CONTROL                         (_T("Control"))

#define  DUI_CTR_LISTITEM                        (_T("ListItem"))
#define  DUI_CTR_PROGRESS                        (_T("Progress"))
#define  DUI_CTR_RICHEDIT                        (_T("RichEdit"))
#define  DUI_CTR_CHECKBOX                        (_T("CheckBox"))
#define  DUI_CTR_GROUPBOX						 (_T("GroupBox"))


#define  DUI_CTR_CONTAINER                       (_T("Container"))
#define  DUI_CTR_TABLAYOUT                       (_T("TabLayout"))
#define  DUI_CTR_SCROLLBAR                       (_T("ScrollBar"))

#define  DUI_CTR_LISTHEADER                      (_T("ListHeader"))
#define  DUI_CTR_LISTBODY                        (_T("ListBody"))
#define  DUI_CTR_TILEITEM                        (_T("TileItem"))
#define  DUI_CTR_TILELAYOUT                      (_T("TileLayout"))

#define  DUI_CTR_CHILDLAYOUT                     (_T("ChildLayout"))
#define  DUI_CTR_LISTELEMENT                     (_T("ListElement"))

#define  DUI_CTR_DIALOGLAYOUT                    (_T("DialogLayout"))
#define  DUI_CTR_BUBBLEBUTTON					 (_T("BubbleButton"))
#define	 DUI_CTR_BUBBLEOPTION					 (_T("BubbleOption"))	
#define  DUI_CTR_BUTTONLAYOUT                    (_T("ButtonLayout"))

#define  DUI_CTR_VERTICALLAYOUT                  (_T("VerticalLayout"))
#define  DUI_CTR_LISTHEADERITEM                  (_T("ListHeaderItem"))

#define  DUI_CTR_LISTTEXTELEMENT                 (_T("ListTextElement"))

#define  DUI_CTR_HORIZONTALLAYOUT                (_T("HorizontalLayout"))
#define  DUI_CTR_LISTLABELELEMENT                (_T("ListLabelElement"))

#define  DUI_CTR_LISTCONTAINERELEMENT            (_T("ListContainerElement"))

#define DUI_CTR_GIFIMAGE						 (_T("GifImage"))
#define DUI_CTR_MEETINGNUMBEREDIT				 (_T("MeetingNumberEdit"))

#define  DUI_CTR_WINOBJECT                       (_T("WinObject"))

#define  DUI_CTR_TABBARSIMPLEITEM                (_T("TabBarSimpleItem"))
#define  DUI_CTR_TABBARBUBBLEITEM                (_T("TabBarBubbleItem"))
#define  DUI_CTR_TABBAR							 (_T("TabBar"))
#define  DUI_CTR_VERTICALTABBAR                  (_T("VerticalTabBar"))
#define  DUI_CTR_HORIZONTALTABBAR                (_T("HorizontalTabBar"))
#define  DUI_CTR_HORIZONTALTABBAREX              (_T("HorizontalTabExBar"))

#define  DUI_CTR_EDITSTYLELAYOUT				 (_T("EditStyleLayout"))

//to support accessibility, list item need implement this interface
#define DUI_ACC_LIST_ITEM_CONTAINER_IMPL					 (_T("Acc_list_item_container_impl"))

///
//////////////END控件名称宏定义//////////////////////////////////////////////////


#define DUI_COMBOBOX_DROPLIST_CLASS _T("zoom_dui_combobox_droplist")

}// namespace DuiLib

