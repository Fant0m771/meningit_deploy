<?php
/**
 * @file
 * meningitis_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function meningitis_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_banner|node|article|form';
  $field_group->group_name = 'group_article_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner images',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
      1 => 'field_article_banner_body',
      2 => 'field_article_mobile_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-banner field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_article_banner|node|article|form'] = $field_group;

  return $export;
}
