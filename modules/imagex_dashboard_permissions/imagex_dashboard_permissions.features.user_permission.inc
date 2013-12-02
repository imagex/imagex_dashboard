<?php
/**
 * @file
 * imagex_dashboard_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_dashboard_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view content admin dashboard'.
  $permissions['view content admin dashboard'] = array(
    'name' => 'view content admin dashboard',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'Super User' => 'Super User',
      'administrator' => 'administrator',
    ),
    'module' => 'imagex_dashboard',
  );

  return $permissions;
}
