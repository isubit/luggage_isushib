<?php
/**
 * @file
 * luggage_isushib.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_isushib_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer pubcookie site access'.
  $permissions['administer isushib site access'] = array(
    'name' => 'administer isushib site access',
    'roles' => array(
      'isushib user admin' => 'isushib user admin',
    ),
    'module' => 'isushibsiteaccess',
  );

  return $permissions;
}
