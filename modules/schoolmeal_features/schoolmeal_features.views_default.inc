<?php
/**
 * @file
 * schoolmeal_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function schoolmeal_features_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'site_teacher_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'site_teacher_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Teachers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php dsm($view); ?>
<a href="/node/add/teacher/<?php print $view->args[0]; ?>">Add a teacher </a>
';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Breakfast Max */
  $handler->display->display_options['fields']['field_breakfast_max']['id'] = 'field_breakfast_max';
  $handler->display->display_options['fields']['field_breakfast_max']['table'] = 'field_data_field_breakfast_max';
  $handler->display->display_options['fields']['field_breakfast_max']['field'] = 'field_breakfast_max';
  $handler->display->display_options['fields']['field_breakfast_max']['label'] = '';
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breakfast_max']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_breakfast_max']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_breakfast_max']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_breakfast_max']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_breakfast_max']['field_api_classes'] = 0;
  /* Field: Content: Lunch Max */
  $handler->display->display_options['fields']['field_lunch_max']['id'] = 'field_lunch_max';
  $handler->display->display_options['fields']['field_lunch_max']['table'] = 'field_data_field_lunch_max';
  $handler->display->display_options['fields']['field_lunch_max']['field'] = 'field_lunch_max';
  $handler->display->display_options['fields']['field_lunch_max']['label'] = '';
  $handler->display->display_options['fields']['field_lunch_max']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lunch_max']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lunch_max']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lunch_max']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lunch_max']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lunch_max']['field_api_classes'] = 0;
  /* Field: Content: Snack Max */
  $handler->display->display_options['fields']['field_snack_max']['id'] = 'field_snack_max';
  $handler->display->display_options['fields']['field_snack_max']['table'] = 'field_data_field_snack_max';
  $handler->display->display_options['fields']['field_snack_max']['field'] = 'field_snack_max';
  $handler->display->display_options['fields']['field_snack_max']['label'] = '';
  $handler->display->display_options['fields']['field_snack_max']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snack_max']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snack_max']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snack_max']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snack_max']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snack_max']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snack_max']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_snack_max']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: School site (field_school_reference) */
  $handler->display->display_options['arguments']['field_school_reference_nid']['id'] = 'field_school_reference_nid';
  $handler->display->display_options['arguments']['field_school_reference_nid']['table'] = 'field_data_field_school_reference';
  $handler->display->display_options['arguments']['field_school_reference_nid']['field'] = 'field_school_reference_nid';
  $handler->display->display_options['arguments']['field_school_reference_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_school_reference_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_school_reference_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_school_reference_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_school_reference_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_school_reference_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_school_reference_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_school_reference_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher' => 'teacher',
  );

  /* Display: Embed */
  $handler = $view->new_display('embed', 'Embed', 'embed_1');
  $export['site_teacher_list'] = $view;

  return $export;
}
