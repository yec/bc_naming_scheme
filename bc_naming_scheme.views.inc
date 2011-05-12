<?php

function bc_naming_scheme_views_data() {
  $data = array();

  $data['bc_naming_scheme']['table']['group'] = t('Naming Scheme');

  $data['bc_naming_scheme']['table']['join']['node'] = array(
    'left_table' => 'og_ancestry',
    'left_field' => 'group_nid',
    'field' => 'group_nid',
    'extra' => 'node.type = bc_naming_scheme.type',
  );

  $data['bc_naming_scheme']['value'] = array(
    'title' => t('Name Scheme'),
    'help' => t('The naming scheme.'),
    'field' => array(
      'handler' => 'bc_naming_scheme_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  return $data;
}

function bc_naming_scheme_views_handlers() {
  return array(
    'handlers' => array(
      'bc_naming_scheme_handler_field' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
