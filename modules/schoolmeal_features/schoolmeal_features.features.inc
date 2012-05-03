<?php
/**
 * @file
 * schoolmeal_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function schoolmeal_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function schoolmeal_features_node_info() {
  $items = array(
    'daily_order' => array(
      'name' => t('Daily Order'),
      'base' => 'node_content',
      'description' => t('Orders are placed by school sites for every day school is in session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meal_menu' => array(
      'name' => t('Meal menu'),
      'base' => 'node_content',
      'description' => t('Contains a list of items that make up a daily meal menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meal_order' => array(
      'name' => t('Meal order'),
      'base' => 'node_content',
      'description' => t('Individual daily meal orders by teachers make up a Daily Order. This record stores a delivery date, a single meal order count, by type (breakfast, snack or lunch), the cctr count, counts for special preparation and the teacher id.'),
      'has_title' => '1',
      'title_label' => t('Order description'),
      'help' => '',
    ),
    'school_site' => array(
      'name' => t('School Site'),
      'base' => 'node_content',
      'description' => t('Meals are delivered to school sites.'),
      'has_title' => '1',
      'title_label' => t('Site title'),
      'help' => '',
    ),
    'teacher' => array(
      'name' => t('Teacher'),
      'base' => 'node_content',
      'description' => t('Teachers are members of school sites'),
      'has_title' => '1',
      'title_label' => t('Teacher name'),
      'help' => '',
    ),
  );
  return $items;
}
