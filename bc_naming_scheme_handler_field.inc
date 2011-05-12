<?php

class bc_naming_scheme_handler_field extends views_handler_field {

  function construct() {
    parent::construct();

  }

  function pre_render($values) {
  }

  function render($values) {
    $process = $values->bc_naming_scheme_value;
    $process = str_replace('[element]',$values->node_node_data_field_element_reference_node_data_field_element_code_field_element_code_value, $process);
    $process = str_replace('[project]', $values->node_og_ancestry_node_data_field_project_code_field_project_code_value, $process);
    $process = str_replace('[level]', $values->node_data_field_level_field_level_value, $process);
    $process = str_replace('[zone]', $values->node_node_data_field_zone_reference_title, $process);
    $process = str_replace('[discipline]', $values->node_node_data_field_discipline_reference_node_data_field_discipline_code_field_discipline_code_value, $process);
    //$process = str_replace('[sheet-number]', $values->, $process);
    $process = str_replace('[series]', $values->node_node_data_field_series_reference_node_data_field_series_code_field_series_code_value, $process);
    $process = str_replace('[sketch-number]', $values->node_data_field_sketch_number_field_sketch_number_value, $process);
    //$process = str_replace('[controller]', $values->, $process);
    return $process;
  }

}
/*
 * tdClass Object ( [nid] => 10346 [node_og_ancestry_node_data_field_project_code_field_project_code_value] => [node_og_ancestry_nid] => 1407 [node_og_ancestry_type] => project [node_og_ancestry_vid] => 1407 [node_node_data_field_element_reference_node_data_field_element_code_field_element_code_value] => ROOF [node_node_data_field_element_reference_nid] => 17 [node_node_data_field_element_reference_type] => element [node_node_data_field_element_reference_vid] => 17 [node_data_field_level_field_level_value] => 455 [node_type] => model_base [node_vid] => 10349 [node_node_data_field_zone_reference_title] => AA [node_node_data_field_zone_reference_nid] => 24 [bc_naming_scheme_value] => [element]_BASE )
 * [project]
 * [level]
 * [zone]
 * [discipline]
 * [sheet-number]
 * [series]
 * [project]
 * [sketch-number]
 * [element]
 * [controller]
 */
