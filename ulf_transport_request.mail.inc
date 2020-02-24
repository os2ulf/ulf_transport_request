<?php

function _transport_request_notify(EntityMetadataWrapper $wrapper, $action) {

  $entity_form_id = $wrapper->entityform_id->value();
  if (empty($entity_form_id)) {
    return;
  }

  global $language;

  // Set fallback email
  $to = variable_get('site_mail');

  switch($action) {
    case 'on_submit_user':
      $params['subject'] = t('Transportation request received', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Transportation request received', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('utr_confirmation_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _tr_build_mail_confirmation($wrapper);
      $to = $wrapper->field_work_mail->value();
      break;
    case 'on_submit_admin':
      $params['subject'] = t('Transportation request received', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Transportation request received', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('utr_notify_admin_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _tr_build_mail_confirmation($wrapper);
      $to = variable_get('utr_admin_email');
      break;
  }

  drupal_mail('ulf_transport_request', 'transport_request_notification', $to, $language->language, $params);
}

/**
 * Implements hook_mail().
 *
 * Alter mail.
 */
function ulf_transport_request_mail($key, &$message, $params) {
  switch ($key) {
    case 'transport_request_notification':
      $message['subject'] = $params['subject'];
      $message['body'] = $params['body'];
      break;
  }
}

/**
 * Create mail template.
 *
 * @param EntityMetadataWrapper $wrapper
 *   The wrapper of an entity.
 *
 * @return string
 *   The values of the submitted form grouped into a string.
 */
function _tr_build_mail_confirmation(EntityMetadataWrapper $wrapper) {
  $application = '';
  $entity_form_id = $wrapper->entityform_id->value();
  if (empty($entity_form_id )) {
    return $application;
  }

  global $language;
  $translation_lang = array('langcode' => $language->language);

  $application .= '<h3>';
  $application .= t('Application details', array(), $translation_lang);
  $application .= ':</h3>';

  $application .= '<strong>';
  $application .= t('Id', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->entityform_id->value();
  $application .= '<br/>';

  $application .= '<h3>';
  $application .= t('Starting place', array(), $translation_lang);
  $application .= ':</h3>';
  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('Departure date', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= date('d/m/Y', $wrapper->field_departure_date->value());
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Return date', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= date('d/m/Y', $wrapper->field_return_date->value());
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Number of passangers', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_number_of_passengers->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= '</p>';

  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('Address', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_address->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Postal code and city', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_postal_code_and_city->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Arrival at starting place', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_starting_place_arrival->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Departure time from starting place', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_starting_place_departure->value();
  $application .= '</p>';

  $application .= '<h3>';
  $application .= t('Excursion', array(), $translation_lang);
  $application .= ':</h3>';
  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('Address', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_excursion_address->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Postal code and city', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_excursion_postal_code_city->label();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Arrival at excursion destination before returning home', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_arrival_excursion->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Do you want transportation home from excursion destinations', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_transport_from_excursions->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Departure time from excursion destinations', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_departure_from_excursion->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Need for luggage space', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_luggage_space->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('The extent of luggage', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_luggage_extent->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Possibility of luggage or outer clothing in the bus while visiting the excursion destination', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_luggage_in_bus->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('There must be a toilet in the bus', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_toilet_in_bus->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Any comments', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_comments->value();
  $application .= '</p>';

  $application .= '<h3>';
  $application .= t('Contact person', array(), $translation_lang);
  $application .= ':</h3>';
  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('First name and last name', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_contacts_name->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Work Mail', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_work_mail->label();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Phone', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_phone->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('EAN-no.', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_ean_no->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Institution / Department', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_institution_department->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Address', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_contacts_address->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Postal code', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_contacts_postal_code->value();
  $application .= '<br/>';
  $application .= t('City', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_contacts_city->value();
  $application .= '</p>';

  return $application;
}
