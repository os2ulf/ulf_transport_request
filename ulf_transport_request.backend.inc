<?php

/**
 * @file
 *
 * Code for the backend form.
 */

/**
 * Create custom backend form.
 *
 * @param array $form
 *   Custom backend form.
 * @param array $form_state
 *   Form state of the backend form.
 *
 * @return mixed
 *   The form displayed in the backend.
 */
function ulf_transport_request_form_backend(array $form, array &$form_state) {
  $form['groups'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['email_texts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email texts'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['email_texts']['utr_notify_admin_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Notification to adm. function when request is sent'),
    '#default_value' => variable_get('utr_notify_admin_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['email_texts']['utr_confirmation_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Copy of confirmation for user'),
    '#default_value' => variable_get('utr_confirmation_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 1,
  );

  $form['frontend_texts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Frontend texts'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['frontend_texts']['utr_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title for the form'),
    '#default_value' => variable_get('utr_title'),
    '#description' => t('Sit the title for the form page'),
    '#weight' => 0,
    '#size' => 30,
  );

  $form['frontend_texts']['utr_intro'] = array(
    '#type' => 'text_format',
    '#title' => t('Intro text'),
    '#default_value' => variable_get('utr_intro', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['frontend_texts']['utr_gdpr'] = array(
    '#type' => 'text_format',
    '#title' => t('GDPR text'),
    '#default_value' => variable_get('utr_gdpr', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['frontend_texts']['utr_receipt'] = array(
    '#type' => 'text_format',
    '#title' => t('Receipt text'),
    '#default_value' => variable_get('utr_receipt', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Other settings'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['settings']['utr_admin_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email for Ulf administration'),
    '#default_value' => variable_get('utr_admin_email'),
    '#description' => t('Admin emails related to transport applications will be sent here. This must be an email address within the site domain. I.e info@ulfiaarhus.dk'),
    '#weight' => 1,
    '#size' => 30,
  );

  return system_settings_form($form);
}
