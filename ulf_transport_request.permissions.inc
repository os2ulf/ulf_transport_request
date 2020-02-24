<?php

/**
 * @file
 * Permission settings for the loop_documents module.
 */

/**
 * Implements hook_permissions().
 *
 * Add permission to restrict access to certain admin paths.
 */
function ulf_transport_request_permission() {
  $permissions = array(
    'administer ulf transport request settings' => array(
      'title' => t('Administer transportation request settings'),
      'description' => t('Administer transportation settings'),
    ),
  );

  return $permissions;
}
