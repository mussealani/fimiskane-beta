<?php
/**
 * @file
 * f_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Site global parts that will be displayed over entire the site.';
  $context->tag = 'Core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'filminskane' => 'filminskane',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-external_links_menu' => array(
          'module' => 'boxes',
          'delta' => 'external_links_menu',
          'region' => 'pre-page',
          'weight' => '-10',
        ),
        'boxes-external_links_toggle' => array(
          'module' => 'boxes',
          'delta' => 'external_links_toggle',
          'region' => 'pre-page',
          'weight' => '-9',
        ),
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'pre-header',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-9',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'header',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Core');
  t('Site global parts that will be displayed over entire the site.');
  $export['global'] = $context;

  return $export;
}
