<?php

/**
 * Implements hook_form_FORMID_alter().
 */
function ulf_transport_request_form_transport_request_entityform_edit_form_alter(&$form, $form_state) {
  global $user;
  drupal_set_title(variable_get('utr_title'));

  $form['#attached']['css'][] = drupal_get_path('module', 'ulf_transport_request') . '/css/styling.css';

  $intro_text = variable_get('utr_intro', array('value' => '', 'format' => NULL))['value'];
  $form['#prefix'] = '<div class="tr-form"><div class="user-message--wrapper"><div class="user-message">' . $intro_text . '</div></div>';
  $form['#suffix'] = '</div>';
}
