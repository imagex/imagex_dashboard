<?php
/**
 * @file
 * imagex_dashboard_defaults.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_dashboard_defaults_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.imagex_dashboard.default_handlers|page_imagex_dashboard_panel_context|conf|display|content|new-1"] = (object) array(
      'pid' => 'new-1',
      'panel' => 'two_66_33_first',
      'type' => 'views_panes',
      'subtype' => 'imagex_dashboard_default_content-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'link_to_view' => 1,
        'more_link' => 1,
        'use_pager' => 0,
        'pager_id' => 0,
        'items_per_page' => 10,
        'fields_override' => array(
          'title' => 1,
          'type' => 1,
          'name' => 1,
          'status' => 1,
          'created' => 1,
          'delete_node' => 1,
          'edit_node' => 1,
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["page_manager_pages.imagex_dashboard.default_handlers|page_imagex_dashboard_panel_context|conf|display|content|new-2"] = (object) array(
      'pid' => 'new-2',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'imagex_dashboard_default_comments-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'more_link' => 1,
        'use_pager' => 0,
        'pager_id' => 0,
        'items_per_page' => 6,
        'fields_override' => array(
          'subject' => 1,
          'name' => 1,
          'created' => 1,
          'status' => 1,
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
    );
  $overrides["page_manager_pages.imagex_dashboard.default_handlers|page_imagex_dashboard_panel_context|conf|display|panels|two_66_33_first"] = array(
    0 => 'new-1',
  );
  $overrides["page_manager_pages.imagex_dashboard.default_handlers|page_imagex_dashboard_panel_context|conf|display|panels|two_66_33_second"] = array(
    0 => 'new-2',
  );

 return $overrides;
}
