<?php
/**
 * @file
 * schoolmeal_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function schoolmeal_features_user_default_roles() {
  $roles = array();

  // Exported role: district user.
  $roles['district user'] = array(
    'name' => 'district user',
    'weight' => '3',
  );

  // Exported role: kitchen admin.
  $roles['kitchen admin'] = array(
    'name' => 'kitchen admin',
    'weight' => '4',
  );

  return $roles;
}
