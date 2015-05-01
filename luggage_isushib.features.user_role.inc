<?php
/**
 * @file
 * luggage_isushib.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_isushib_user_default_roles() {
  $roles = array();

  // Exported role: isushib user admin.
  $roles['shibboleth user admin'] = array(
    'name' => 'shibboleth user admin',
    'weight' => 8,
  );

  return $roles;
}