<?php
/**
 * @file
 * schoolmeal_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function schoolmeal_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer schoolmeal.
  $permissions['administer schoolmeal'] = array(
    'name' => 'administer schoolmeal',
    'roles' => array(
      0 => 'kitchen admin',
    ),
    'module' => 'schoolmeal',
  );

  // Exported permission: enter district orders.
  $permissions['enter district orders'] = array(
    'name' => 'enter district orders',
    'roles' => array(
      0 => 'district user',
      1 => 'kitchen admin',
    ),
    'module' => 'schoolmeal',
  );

  return $permissions;
}
