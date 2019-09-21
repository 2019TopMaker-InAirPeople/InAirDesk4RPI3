
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/
				
#ifndef UIB_DESKSTATUS_VIEW_VIEW_H_
#define UIB_DESKSTATUS_VIEW_VIEW_H_


#include "g_inc_uib.h"
#include "uib_views.h"

/**
* view context definitions
*/

typedef struct _uib_deskstatus_view_view_context {

	/* parent evas_object which was parameter of create function */
	Evas_Object *parent;
	/* root container UI Component of this view */
	Evas_Object *root_container;
	/* view class name */
	const char *view_name;
	/* indicator state of this view */
	int indicator_state;
	/* This is view type. 'true' is user view, otherwise a UI Builder's view. */
	bool is_user_view;
	/* control context to control this view */
	struct _uib_deskstatus_view_control_context *cc;

	/* UI Components in this view */
	Evas_Object *deskstatus_grid;
	Evas_Object *dsv_previous_button;
	Evas_Object *deskstatus_box;
	Evas_Object *dsb_grid;
	Evas_Object *dsg_away_button;
	Evas_Object *dsg_away_box;
	Evas_Object *away_label;
	Evas_Object *dsg_trip_button;
	Evas_Object *dsg_trip_box;
	Evas_Object *trip_label;
	Evas_Object *dsv_next_button;
} uib_deskstatus_view_view_context;



/**
* @brief	Create a new view then return view context of that view.
* 			You can delete view using evas_object_del(vc->evas_object) like other EFL evas objects.
*/
uib_view_context *uib_view_deskstatus_view_create(Evas_Object *parent, void *create_callback_param);
uib_view_context *uib_view_deskstatus_view_destroy(Evas_Object *parent, void *create_callback_param);

void uib_deskstatus_view_config_HD_portrait();
void deskstatus_view_dsv_previous_button_onclicked(uib_deskstatus_view_view_context *vc, Evas_Object *obj, void *event_info);
void deskstatus_view_dsv_previous_button_onclicked_post(void* param, uib_deskstatus_view_view_context *vc, Evas_Object *obj, void *event_info);
void deskstatus_view_dsv_next_button_onclicked(uib_deskstatus_view_view_context *vc, Evas_Object *obj, void *event_info);
void deskstatus_view_dsv_next_button_onclicked_post(void* param, uib_deskstatus_view_view_context *vc, Evas_Object *obj, void *event_info);
#endif /* UIB_DESKSTATUS_VIEW_VIEW_H_ */