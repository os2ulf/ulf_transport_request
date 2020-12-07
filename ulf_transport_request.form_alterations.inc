<?php

/**
 * Implements hook_form_FORMID_alter().
 */
function ulf_transport_request_form_transport_request_entityform_edit_form_alter(&$form, $form_state) {
  global $user;
  drupal_set_title(variable_get('utr_title'));

  $form['#attached']['css'][] = drupal_get_path('module', 'ulf_transport_request') . '/css/styling.css';

  $intro_text = variable_get('utr_intro', array('value' => '', 'format' => NULL))['value'];
  $intro_text_second = variable_get('utr_intro_second', array('value' => '', 'format' => NULL))['value'];
  $form['#prefix'] = '<div class="tr-form"><div class="user-message--wrapper"><div class="user-message">' . $intro_text . '</div>' . (($intro_text_second) ? '<div class="user-message">' . $intro_text_second . '</div>' : '') . '</div>';
  $form['#suffix'] = '</div>';

  $form['#validate'][] = '_validate_transport_request_form';
}

function _validate_transport_request_form($form, &$form_state) {
  $field_value = $form_state['values']['field_departure_date'][LANGUAGE_NONE][0];

  $min_required_date = strtotime('today midnight + 12 days');
  $date = $field_value['value'];

  if($date < $min_required_date) {
    form_set_error('field_departure_date', t('Deadline for ordering is at least 12 days before driving.'));
  }
}
