<?php

/**
 * @file
 * ulf_transport_request.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ulf_transport_request_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ulf_transport_request_default_entityform_type() {
  $items = array();
  $items['transport_request'] = entity_import('entityform_type', '{
    "type" : "transport_request",
    "label" : "Adhoc busk\\u00f8rsel",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "editor" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Application received",
      "submission_text" : { "value" : "", "format" : "editor" },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0, "5" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "editor" }
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/transport-request",
        "alias" : "ansoeg\\/bustransport",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/transport-request\\/confirm",
        "alias" : "ansoeg\\/bustransport\\/modtaget",
        "language" : "und"
      }
    }
  }');
  return $items;
}
