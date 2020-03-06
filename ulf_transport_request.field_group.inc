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
  $field_group->identifier = 'group_bus|entityform|transport_request|form';
  $field_group->group_name = 'group_bus';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ønsker til bussen',
    'weight' => '4',
    'children' => array(
      0 => 'field_luggage_extent',
      1 => 'field_luggage_in_bus',
      2 => 'field_luggage_space',
      3 => 'field_toilet_in_bus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ønsker til bussen',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-bus field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_bus|entityform|transport_request|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_excursion_address',
      1 => 'field_excursion_postal_code_city',
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
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_group->identifier = 'group_home_transportation|entityform|transport_request|form';
  $field_group->group_name = 'group_home_transportation';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hjemtransport',
    'weight' => '5',
    'children' => array(
      0 => 'field_arrival_excursion',
      1 => 'field_departure_from_excursion',
      2 => 'field_transport_from_excursions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hjemtransport',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-home-transportation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_home_transportation|entityform|transport_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_incidentally|entityform|transport_request|form';
  $field_group->group_name = 'group_incidentally';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Øvrigt',
    'weight' => '6',
    'children' => array(
      0 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Øvrigt',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-incidentally field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_incidentally|entityform|transport_request|form'] = $field_group;

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
    'label' => 'Ordrebekræftelsen skal sendes til følgende kontaktperson',
    'weight' => '7',
    'children' => array(
      0 => 'field_contacts_address',
      1 => 'field_contacts_name',
      2 => 'field_ean_no',
      3 => 'field_institution_department',
      4 => 'field_phone',
      5 => 'field_work_mail',
      6 => 'field_contact_postal_code_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ordrebekræftelsen skal sendes til følgende kontaktperson',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-order-confirmation field-group-fieldset',
        'description' => '',
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
    'weight' => '1',
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
    'label' => 'Bestillingen skal foretages minimum 12 hverdage inden kørselsdatoen',
    'weight' => '0',
    'children' => array(
      0 => 'field_departure_date',
      1 => 'field_number_of_passengers',
      2 => 'field_return_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bestillingen skal foretages minimum 12 hverdage inden kørselsdatoen',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_via|entityform|transport_request|form';
  $field_group->group_name = 'group_via';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'transport_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evt. viapunkt',
    'weight' => '2',
    'children' => array(
      0 => 'field_via_address',
      1 => 'field_via_postal_code_city',
      2 => 'field_via_departure',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Evt. viapunkt',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-via field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_via|entityform|transport_request|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bestillingen skal foretages minimum 12 hverdage inden kørselsdatoen');
  t('Databeskyttelse');
  t('Evt. viapunkt');
  t('Hjemtransport');
  t('Ordrebekræftelsen skal sendes til følgende kontaktperson');
  t('Startsted');
  t('Udflugtsmål');
  t('Ønsker til bussen');
  t('Øvrigt');

  return $field_groups;
}
