<?php
/**
 * @file
 * f_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_admin_title';
  $strongarm->value = 'Main menu level 1';
  $export['menu_block_1_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_depth';
  $strongarm->value = '2';
  $export['menu_block_1_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_1_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_expanded';
  $strongarm->value = 0;
  $export['menu_block_1_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_follow';
  $strongarm->value = 0;
  $export['menu_block_1_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_level';
  $strongarm->value = '1';
  $export['menu_block_1_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_parent';
  $strongarm->value = 'main-menu:0';
  $export['menu_block_1_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_sort';
  $strongarm->value = 0;
  $export['menu_block_1_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_1_title_link';
  $strongarm->value = 0;
  $export['menu_block_1_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_trail_by_path_breadcrumb_handling';
  $strongarm->value = 1;
  $export['menu_trail_by_path_breadcrumb_handling'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node';
  $strongarm->value = TRUE;
  $export['metatag_enable_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_user__user';
  $strongarm->value = TRUE;
  $export['metatag_enable_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_modules';
  $strongarm->value = array(
    'backup_migrate' => 0,
    'bad_judgement' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'devel' => 1,
    'devel_debug_log' => 1,
    'devel_form_debug' => 1,
    'devel_generate' => 1,
    'ds_ui' => 1,
    'field_ui' => 1,
    'help' => 1,
    'letmein' => 1,
    'logentries' => 0,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'search_krumo' => 1,
    'security_review' => 0,
    'speedy' => 0,
    'stage_file_proxy' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'update' => 1,
    'views_ui' => 1,
    'xhprof' => 1,
  );
  $export['tadaa_development_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_development_variables';
  $strongarm->value = array(
    'block_cache' => 0,
    'cache' => 0,
    'cron_safe_threshold' => '0',
    'dblog_row_limit' => '100',
    'error_level' => '2',
    'preprocess_css' => 0,
    'preprocess_js' => 0,
    'reroute_email_enable' => 1,
    'reroute_email_enable_message' => 1,
  );
  $export['tadaa_development_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tadaa_staging_modules';
  $strongarm->value = array(
    'backup_migrate' => 0,
    'bad_judgement' => 1,
    'context_ui' => 1,
    'dblog' => 1,
    'devel' => 0,
    'devel_debug_log' => 0,
    'devel_form_debug' => 0,
    'devel_generate' => 0,
    'ds_ui' => 1,
    'field_ui' => 1,
    'help' => 0,
    'letmein' => 1,
    'logentries' => 0,
    'reroute_email' => 1,
    'rules_admin' => 1,
    'search_krumo' => 0,
    'security_review' => 1,
    'speedy' => 1,
    'stage_file_proxy' => 1,
    'googleanalytics' => 0,
    'themekey_ui' => 1,
    'update' => 0,
    'views_ui' => 1,
    'xhprof' => 0,
  );
  $export['tadaa_staging_modules'] = $strongarm;

  return $export;
}
