
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and every time you save your project.
* Do not hand edit this file.
********************************************************************************/
#include "app_main.h"
#include "uib_views_inc.h"

void connection_datetime_view_dtv_previous_button_onclicked(uib_datetime_view_view_context *vc, Evas_Object *obj, void *event_info){
	datetime_view_dtv_previous_button_onclicked(vc, obj, event_info);
	Elm_Object_Item* navi_item = uib_util_push_view("deskstatus_view");
	datetime_view_dtv_previous_button_onclicked_post(navi_item, vc, obj, event_info);
}
void connection_datetime_view_dtv_next_button_onclicked(uib_datetime_view_view_context *vc, Evas_Object *obj, void *event_info){
	datetime_view_dtv_next_button_onclicked(vc, obj, event_info);
	Elm_Object_Item* navi_item = uib_util_push_view("finedust_view");
	datetime_view_dtv_next_button_onclicked_post(navi_item, vc, obj, event_info);
}