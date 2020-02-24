<?php

/**
 * @file
 * ulf_transport_request.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ulf_transport_request_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_excursion|entityform|transport_request|form';
  $field_group->group_name = 'group_excursion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Udflugtsmål',
    'weight' => '6',
    'children' => array(
      0 => 'field_excursion_address',
      1 => 'field_excursion_postal_code_city',
      2 => 'field_arrival_excursion',
      3 => 'field_transport_from_excursions',
      4 => 'field_departure_from_excursion',
      5 => 'field_luggage_space',
      6 => 'field_luggage_extent',
      7 => 'field_luggage_in_bus',
      8 => 'field_toilet_in_bus',
      9 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Udflugtsmål',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-excursion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_excursion|entityform|transport_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gdpr|entityform|transport_request|form';
  $field_group->group_name = 'group_gdpr';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Databeskyttelse',
    'weight' => '8',
    'children' => array(
      0 => 'field_gdpr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Databeskyttelse',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gdpr field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gdpr|entityform|transport_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_order_confirmation|entityform|transport_request|form';
  $field_group->group_name = 'group_order_confirmation';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktperson',
    'weight' => '7',
    'children' => array(
      0 => 'field_contacts_name',
      1 => 'field_work_mail',
      2 => 'field_phone',
      3 => 'field_ean_no',
      4 => 'field_institution_department',
      5 => 'field_contacts_address',
      6 => 'field_contacts_postal_code',
      7 => 'field_contacts_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktperson',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-order-confirmation field-group-fieldset',
        'description' => 'Ordrebekræftelsen skal sendes til følgende kontaktperson',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_order_confirmation|entityform|transport_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_starting_place|entityform|transport_request|form';
  $field_group->group_name = 'group_starting_place';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Startsted',
    'weight' => '5',
    'children' => array(
      0 => 'field_address',
      1 => 'field_postal_code_and_city',
      2 => 'field_starting_place_arrival',
      3 => 'field_starting_place_departure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Startsted',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-starting-place field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_starting_place|entityform|transport_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transportation_info|entityform|transport_request|form';
  $field_group->group_name = 'group_transportation_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_number_of_passengers',
      1 => 'field_departure_date',
      2 => 'field_return_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-transportation-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_transportation_info|entityform|transport_request|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Databeskyttelse');
  t('Kontaktperson');
  t('Startsted');
  t('Udflugtsmål');

  return $field_groups;
}
