<?php
/**
 * @file
 * meningitis_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function meningitis_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'page_banner_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Mobile Image */
  $handler->display->display_options['fields']['field_article_mobile_image']['id'] = 'field_article_mobile_image';
  $handler->display->display_options['fields']['field_article_mobile_image']['table'] = 'field_data_field_article_mobile_image';
  $handler->display->display_options['fields']['field_article_mobile_image']['field'] = 'field_article_mobile_image';
  $handler->display->display_options['fields']['field_article_mobile_image']['label'] = '';
  $handler->display->display_options['fields']['field_article_mobile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_mobile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_mobile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Banner body */
  $handler->display->display_options['fields']['field_article_banner_body']['id'] = 'field_article_banner_body';
  $handler->display->display_options['fields']['field_article_banner_body']['table'] = 'field_data_field_article_banner_body';
  $handler->display->display_options['fields']['field_article_banner_body']['field'] = 'field_article_banner_body';
  $handler->display->display_options['fields']['field_article_banner_body']['label'] = '';
  $handler->display->display_options['fields']['field_article_banner_body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Banner image */
  $handler = $view->new_display('block', 'Banner image', 'block');
  $export['page_banner_image'] = $view;

  return $export;
}
